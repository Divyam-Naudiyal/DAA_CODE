#include<stdio.h>
#include<conio.h>
int main()
{
 typedef struct
 {
 int sno;
 char name[20];
 int submarks[4];
 }student;
student s1[10];
int i,n,j;
printf("enter the no of students\n");
scanf("%d",&n);
printf("enter the details of students\n");
for(i=0;i<n;i++)
{
 printf("enter sno and name\n");
 scanf("%d%s",&s1[i].sno,s1[i].name);
 printf("enter the marks in 4 subjects\n");
 for(j=0;j<4;j++)
 {
 scanf("%d",&s1[i].submarks[j]);
 }
}
printf("the details of students are\n");
for(i=0;i<n;i++)
{
 printf("sno-%d name-%s\n",s1[i].sno,s1[i].name);
 printf("the marks in 4 subjects\n");
 for(j=0;j<4;j++)
 {
 printf("marks in %d subject is %d\n",j,s1[i].submarks[j]);
 }
}
return 0;
}
