#include<stdio.h>
int main(){
int i,j;
for(i=1;i<=5;i++){
	for(j=1;j<=17;j++){
//		if(j<=i||9-i<j<9+i||17-i<j<=17){
		if(j<=i||(9-i)<j&&j<(9+i)||17-i<j&&j<=17)
			printf("*");
//			printf("Value of j is %d",j);

			
		
//			printf("*");
		else
			printf(" ");		
	}
	printf("\n");
}
}


