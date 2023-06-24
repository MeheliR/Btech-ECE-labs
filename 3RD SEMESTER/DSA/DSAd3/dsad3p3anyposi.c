#include <stdio.h>
#include <stdlib.h>

struct node {
    int num;
    struct node * nextptr;
}*stnode;
 

void ClListcreation(int n);
void ClLinsertNodeAtBeginning(int num);
void ClLinsertNodeAtAny(int num, int pos);
void displayClList(int a);

int main()
{
    int n,num1,a,insPlc;
    stnode = NULL;
	printf("\n\n Circular Linked List : Insert a node at any position in  a circular linked list :\n");
	printf("--------------------------------------------------------------------------------------\n");	   	

    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    ClListcreation(n); 
    a=1;
    displayClList(a);
	printf(" Input the position to insert a new node : ");
    scanf("%d", &insPlc);
    printf(" Input data for the position %d : ", insPlc);
    scanf("%d", &num1);
    ClLinsertNodeAtAny(num1,insPlc);  	
    a=2;
    displayClList(a);	
    return 0;
}

void ClListcreation(int n)
{
    int i, num;
    struct node *preptr, *newnode;

    if(n >= 1)
    {
        stnode = (struct node *)malloc(sizeof(struct node));

        printf(" Input data for node 1 : ");
        scanf("%d", &num);
        stnode->num = num;
        stnode->nextptr = NULL;
        preptr = stnode;
        for(i=2; i<=n; i++)
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            printf(" Input data for node %d : ", i);
            scanf("%d", &num);
            newnode->num = num;
            newnode->nextptr = NULL;	// next address of new node set as NULL
            preptr->nextptr = newnode;	// previous node is linking with new node
            preptr = newnode;   		// previous node is advanced
        }
        preptr->nextptr = stnode; 		//last node is linking with first node
    }
}

void ClLinsertNodeAtBeginning(int num)
{
    struct node *newnode, *curNode;

    if(stnode == NULL)
    {
        printf(" No data found in the List yet.");
    }
    else
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->num = num;
        newnode->nextptr = stnode;
        curNode = stnode;
        while(curNode->nextptr != stnode)
        {
            curNode = curNode->nextptr;
        }
        curNode->nextptr = newnode;
        stnode = newnode;
    }
}

void ClLinsertNodeAtAny(int num, int pos)
{
    struct node *newnode, *curNode;
    int i;

    if(stnode == NULL)
    {
        printf(" No data found in the List yet.");
    }
    else if(pos == 1)
    {
        ClLinsertNodeAtBeginning(num);
    }
    else
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->num = num;
        curNode = stnode;
        for(i=2; i<=pos-1; i++)
        {
            curNode = curNode->nextptr;
        }
        newnode->nextptr = curNode->nextptr;
        curNode->nextptr = newnode;
    }
} 

void displayClList(int m)
{
    struct node *tmp;
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
         printf("\n After insertion the new list are :\n");   
        }        
        do {
            printf(" Data %d = %d\n", n, tmp->num);

            tmp = tmp->nextptr;
            n++;
        }while(tmp != stnode);
    }
}

