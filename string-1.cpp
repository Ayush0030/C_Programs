#include<stdio.h>
#include<string.h>
int main(){
	char str[20];
	int A;
//	printf("%s",str);
	scanf("%[^\n]",&str);
	
	// the above is a format speciier that doesnt exits the scanf until a next line is found
	printf("%s",str);
	scanf("%d",&A);
	printf("%d",A);

	
}



