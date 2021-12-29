#include<stdio.h>
int main(){
int n=10;
int *p;
int **p2;
p=&n;
printf("Value of p is %d\n",p);
printf("Value of *p is %d\n",*p);
printf("Value of n is %d\n",n);
printf("Value of &n is %d\n",&n);

p2=&p;

printf("Value of p2 is %d\n",p2);
printf("Value of &p2 is %d\n",&p2);
printf("Value of *p2 is %d\n",*p2);
printf("Value of **p2 is %d\n",**p2);




}

