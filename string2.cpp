#include<stdio.h>
int main(){
	char c[100];
	int i=0;
	int j=0;
	int x=0;
	char numb[100];
	char year[100];
	char y1[100];
	int counter=1;
	scanf("%[^\n]",&c);
	printf("Your String is %s\n",c);
	while(c[i]!=NULL){
		printf("%c\n",c[i]);
		i++;
	}
	int size=i;
	printf("Size of the String Entered is == %d\n\n",size);
	
	i=0;
	while(c[i]!=NULL){
		printf("ASCII CODE FOR EACH IS %d\n",c[i]);
		if(int(c[i])>=48&&int(c[i]<=57)||c[i]=='-'){ //ASCII
			numb[j]=c[i];			
			printf(" The value inside numb  is %c\n\n\n",numb[j]);
			j++;
		}
		i++;
	}
	i=0;
	
	
	while(i<j){
		printf("%c",numb[i]);
		i++;		
	}
	printf("\n\n");
//	
//	for(i=0;i<j;i++){
//		year[i]=numb[i];
//	}
	i=0;
	x=0;
	while(i<j)
	{	
		if((int(numb[i])>=48&&int(numb[i]<=57))&&(int(numb[i+1])>=48&&int(numb[i+1]<=57))&&(numb[i+2]=='-')&&(int(numb[i+3])>=48&&int(numb[i+3]<=57))&&(int(numb[i+4])>=48&&int(numb[i+4]<=57))&&(numb[i+5]=='-')&&(int(numb[i+6])>=48&&int(numb[i+7]<=57))&&(int(numb[i+8])>=48&&int(numb[i+9]<=57)))
		{	
			printf("The Year is %c%c%c%c  ",numb[i+6],numb[i+7],numb[i+8],numb[i+9]);
//			for(x=0;x<100;x+=4){
				year[x]=numb[i+6];	
				year[x+1]=numb[i+7];
				year[x+2]=numb[i+8];
				year[x+3]=numb[i+9];
				x+=4;
//			}
		}
		i++;
		
	}
			x=0;
			while(year[x]!=NULL){
						
				if((year[x]==year[x+4])&&(year[x+1]==year[x+5])&&(year[x+2]==year[x+6])&&(year[x+3]==year[x+7]))
				{					
					printf("\n\n Same year found at year[x] and year[x+4]\n at x== %d\n",x);															
				}
				else
				{	
				printf("the value of x inside else is %d\n\n",x);	
					while((x>=4)&&(year[x+4]!=NULL))
					{
						counter++;
						printf("The Counter get increased to %d\n\n",counter);
						break;
					}
				}
				x+=4;					
			}							
	printf("\n\n The number of distinct years is %d",counter);	
}

