#include<stdio.h>
int main(){
	int i,j,height;
	scanf("%d",&height);
// in flexible shapes always divide the lines
	for(i=1;i<=height;i++){
		for(j=1;j<=height*2-1;j++){
			if(j==height+1-i||j==height-1+i||i==(height+1)/2&&(j>(height+1)/2&&j<((height+1)/2)+height-1))\
//			the starting point the the horizontal line will start from half of height

			printf("*");
			else
			printf(" ");
			
			
		}
		printf("\n");
	}
}

