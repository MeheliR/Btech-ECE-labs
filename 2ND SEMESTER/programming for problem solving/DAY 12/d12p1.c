#include <stdio.h>
struct StudentData{
    char stu_branch[30];
    char stu_name[30];
    int stu_rollno;
    int stu_marksin8subject;
};
int main()
{
              int i;
              struct StudentData student[ 30 ];         

              for(i=0;i<2;i++){
     
     printf("Student branch is:\n ");
     scanf(" %s", &student[i].stu_branch);
     printf("Student name is:\n ");
     scanf(" %s", &student[i].stu_name);
     printf("Student roll no is:\n");
     scanf(" %d", &student[i].stu_rollno);
     printf("Student's marks in 8 subject:\n");
     scanf(" %d",&student[i].stu_marksin8subject );
     
}
 printf("\nDetails student");
    for(i=0;i<2;i++){
     
     printf("Student branch is: %s", student[i].stu_branch);
     printf("\nStudent name is: %s", student[i].stu_name);
     printf("\nStudent roll no is: %d", student[i].stu_rollno);
     printf("\nStudent's marks in 8 subject: %d",student[i].stu_marksin8subject );}
     return 0;
}
