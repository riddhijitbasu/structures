#include<stdio.h>
struct emp{
int eno;
char ename[20];
char edepart[15];
float esal;
};
int main(){
int j;
struct emp e;
printf("Enter Employee detail \n");
printf("Emp No. :-\t");
scanf("%d",&e.eno);
printf("Emp Name :-\t");
scanf("%s",&e.ename);
printf("Emp department :-\t");
scanf("%s",&e.edepart);
printf("Emp salary :-\t");
scanf("%f",&e.esal);
printf("\n \n");

printf("Enter 1 to print");
scanf("%d",&j);
if(j==1){
printf("Employee details are \n \n Employee name:- \t %s \n Employee number:- \t %d \n employee department:- \t %s \n Employee salary:- \t %f",e.ename,e.eno,e.edepart,e.esal);
}
else
exit(1);
}
