#include<stdio.h>
struct Point
{
int x, y;
};

int main()
{
// A valid initialization. member x gets value 0 and y
// gets value 1. The order of declaration is followed.
struct Point p1 = {0, 1};
struct Point p2;
p2.x=30;
printf("%d\n",p1.x);
printf("%d\n",p1.y);
printf("%d\n",p2.x);



}


