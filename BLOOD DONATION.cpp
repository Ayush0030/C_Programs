/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{

int age,weight;
scanf("%d%d",&age,&weight);

if(age>70){
	printf("candidate is too old");
}
else if(age>=18){
    if(weight>=55)
    printf("candidate is perfect for blood donation");
    else
    printf("candidate is under weight");
}
else if(age<18&&age>=12){
    if(weight>=55)
    printf("candidate is over weight");
    else
    printf("candidate is too young in age and under weight");
}
else
printf("candidate is infant");
}

