#include <stdio.h>
#include <stdlib.h>

struct node {
    int num;
    struct node * preptr;
    struct node * nextptr;
}*stnode, *ennode;
 

void DlListcreation(int n);
void DlListDeleteMiddleNode(int pos);
void displayDlList(int a);

int main()
{
    int n,num1,a,insPlc;
    stnode = NULL;
    ennode = NULL;
	printf("\n\n Doubly Linked List : Delete node from middle of a doubly linked list :\n");
	printf("---------------------------------------------------------------------------\n");	   	
    printf(" Input the number of nodes (3 or more ): ");
    scanf("%d", &n);
    DlListcreation(n); 
    a=1;
    displayDlList(a);
    printf(" Input the position ( 2 to %d ) to delete a node : ",n-1);
    scanf("%d", &insPlc);

if(insPlc<=1 || insPlc>=n)
    {
     printf("\n Invalid position. Try again.\n ");
    }
	      if(insPlc>1 && insPlc<n)
      {
 
    DlListDeleteMiddleNode(insPlc);  
        a=2;
    displayDlList(a);
      }      
    return 0;
}
 
void DlListcreation(int n)
{
    int i, num;
    struct node *fnNode;
 
    if(n >= 1)
    {
        stnode = (struct node *)malloc(sizeof(struct node));
 
        if(stnode != NULL)
        {
            printf(" Input data for node 1 : "); // assigning data in the first node
            scanf("%d", &num);
 
            stnode->num = num;
            stnode->preptr = NULL;
            stnode->nextptr = NULL;
            ennode = stnode;
            for(i=2; i<=n; i++)
            {
                fnNode = (struct node *)malloc(sizeof(struct node));
                if(fnNode != NULL)
                {
                    printf(" Input data for node %d : ", i);
                    scanf("%d", &num);
                    fnNode->num = num;
                    fnNode->preptr = ennode;    // new node is linking with the previous node
                    fnNode->nextptr = NULL;     // set next address of fnnode is NULL
                    ennode->nextptr = fnNode;   // previous node is linking with the new node
                    ennode = fnNode;            // assign new node as last node
                }
                else
                {
                    printf(" Memory can not be allocated.");
                    break;
                }
            }
        }
        else
        {
            printf(" Memory can not be allocated.");
        }
    }
}

void DlListDeleteMiddleNode(int pos)
{
    struct node *curNode;
    int i;
 
    curNode = stnode;
    for(i=1; i<pos && curNode!=NULL; i++)
    {
        curNode = curNode->nextptr;
    }
    if(curNode != NULL)
    {
        curNode->preptr->nextptr = curNode->nextptr;
        curNode->nextptr->preptr = curNode->preptr;
 
        free(curNode); //Delete the n node
    }
    else
    {
        printf(" The given position is invalid!\n");
    }
} 

void displayDlList(int m)
{
    struct node * tmp;
    int n = 1;
    if(stnode == NULL)
    {
        printf(" No data found in the List yet.");
    }
    else
    {
        tmp = stnode;
        if (m==1)
        {
        printf("\n Data entered in the list are :\n");
        }
        else
        {
         printf("\n After deletion the new list are :\n");   
        }
        while(tmp != NULL)
        {
            printf(" node %d : %d\n", n, tmp->num);
            n++;
            tmp = tmp->nextptr; // current pointer moves to the next node
        }
    }
}

