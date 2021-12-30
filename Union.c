#include <stdio.h>

union item
{
    int x;
    float y;
    char d[100];
    char ch;
    
};

int main( )
{
    union item it;
    it.x = 12;
    it.y = 20.2;
    it.ch = 'a';
    
    
    printf("%d\n", it.x);
    printf("%f\n", it.y);
    printf("%c\n", it.ch);
    // value of x and y is lost only 
    printf("%d",sizeof(it));
    return 0;
}
