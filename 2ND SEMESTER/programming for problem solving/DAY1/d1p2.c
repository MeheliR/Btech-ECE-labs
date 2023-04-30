#include <stdio.h>
int main()
{
 char choice;
 printf("Choose an option please:");
 printf("\nC -> Convert Centigrade to Fahrenheit");
 printf("\nF -> Convert Fahrenheit to Centigrade\n");
 scanf("%c",&choice);
 if (choice=='C' || choice =='c')
 {
 float c;
 float convToF;
 printf("Enter the temperature in Centigrade: ");
 scanf("%f", &c);
 convToF=((9*c)+160)/5;
 printf("\nThe temperature in Fahrenheit is: %f",convToF);
}
else if (choice=='F'|| choice =='f')
 {
 float f;
 float convToC;
 printf("Enter the temperature in Fahrenheit: ");
 scanf("%f", &f);
 convToC=((5*f)-160)/9;
 printf("\nThe temperature in Centigrade is: %f",convToC);
 }
 else
 {
 printf("\nWrong Input");
 }
 return 0;
}

