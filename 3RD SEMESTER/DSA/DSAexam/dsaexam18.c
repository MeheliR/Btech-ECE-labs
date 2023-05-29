/* stack implementation using static array*/

#include<stdio.h >
#define CAPACITY 5//pre-processor macro
int stack[CAPACITY], top=-1;
int push (int);
int pop(void);
int isFULL(void);
int isEMPTY(void);
int traverse(void);
int peek(void);
int main(void)
{
	int ch,item;
	while(1)
	 {
	
printf("1.Push \n");
printf ("2.Pop \n");
printf ("3.Peek \n");
printf ("4.Traverse \n");
printf ("5.Quit \n");

printf ("Enter your choice: \n");
 	scanf("%d",&ch);
 	
 	switch(ch)
 	{
 		case 1: printf("Enter element:");
		         scanf("%d",&item); 
		              push(item);
		              break;
 		case 2:item=pop();
 		       if (item==0)
 		       {
 		       	printf("stack is underflow \n");
				}
				else
				{
					printf("popped item : %d\n",item);
				}
				break;
 		case 3: peek();
 	        	break;
 		
 		case 4: traverse();
 		        break;
 		    
 		
 		default:printf ("invalid input \n \n");
	 }
}
}

int push (int ele)
{
	if (isFULL())
	{
	printf("stack is overflow \n");	
	}
	else
	{
	top++;
	stack[top]= ele;
	printf("%d pushed \n",ele);	
	}
	
}

int isFULL()
{
	if(top==CAPACITY-1)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
int pop()
{
	if(isEMPTY())
	{
		return 0;
		
	}
	else 
	{
		return stack[top--];
	}
}
int isEMPTY()
	
{
	if(top==-1)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}

int peek()
{
	if(isEMPTY())
	{
		printf("stack is empty \n");
	}
	else 
	{
		printf("peek elment : %d \n",stack[top]);
	}
}

int traverse ()
{
if(isEMPTY())
	{
		printf("stack is empty \n");
	}
	else 
	{
		int i;
		printf("stack elements : \n");
		for (i=0;i<=top;i++)
		{
			printf("%d \n",stack[i]);
		}
		}	
}
