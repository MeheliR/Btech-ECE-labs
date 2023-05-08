#include <stdio.h>
int main() 
{
	int numrow,row,column;
	printf("ENTER THE NUMBER OF ROWS:");
	scanf("%d",&numrow);
	
	for(row=1;row<=numrow;row++){
		for(column=1;column<=row;column++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
   
