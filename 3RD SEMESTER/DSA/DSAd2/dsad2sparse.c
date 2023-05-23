#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void input(int row, int col, int matrix[][col]){
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			scanf("%d",&matrix[i][j]);
		}
	}
}
void display(int row, int col, int matrix[][col]){
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

bool isParseMatrix(int row, int col, int matrix[][col]){
    int size = 0;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(matrix[i][j]==0)
                size++;
        }
    }
    if(size>(row*col)/2)
        return true;
    else
        return false;
}
void addMatrix(int row, int col,int matrix1[][col],int matrix2[][col],int summatrix[][col]){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            summatrix[i][j] = matrix1[i][j]+matrix2[i][j];
        }
    }
}

int main(){
    int row1, row2, col1, col2;
	printf("Enter the number of rows of 1st matrix : ");scanf("%d",&row1);
	printf("Enter the number of columns of 1st matrix : ");scanf("%d",&col1);
	printf("Enter the number of rows of 2nd matrix : ");scanf("%d",&row2);
	printf("Enter the number of columns of 2nd matrix : ");scanf("%d",&col2);
	int matrix1[row1][col1],matrix2[row2][col2];
	printf("Enter the matrix 1 elements : \n");input(row1,col1,matrix1);
	printf("Enter the matrix 2 elements : \n");input(row2,col2,matrix2);
	int summatrix[row1][col1];
	if(!isParseMatrix(row1,col1,matrix1) && !isParseMatrix(row2,col2,matrix2))
		printf("Not parse matrix");
	else{
		if(row1 != row2 || col1 != col2)
			printf("Add of these two parse matrix is not possible\n");
		else{
			summatrix[row1][col1];
			printf("Summation of two parse matrix is : \n");
			addMatrix(row1,col1,matrix1,matrix2,summatrix);
			display(row1,col1,summatrix);
		}
	}
	// printf("Summation matrix is : ");
	// display(row1,col1,summatrix);

	return 0;
}
