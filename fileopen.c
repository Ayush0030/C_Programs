#include<stdio.h>
void main()
{
	FILE *tp;
	int total;
//	char ch;
	tp = fopen("myfile1.doc","w");
	if (tp==NULL)
	{
		printf("\n Error while creating a File");
	//	getch();
		return 1; 
	}else{
	printf("file created successfuly");

	 fputc('A', tp);
	
//	fprintf(tp, "%d",500);
// fscanf(tp, "%d", &total);
// printf("Value of total is %d\n", total);

 
	}
//	while (tp)
//	{
//		
//		if (feof(tp))// if (ch==EOF)  end of file
//		{
//
//		}
//	}
////scanf("%c",&ch);

//fprintf(tp,"%c",ch);
//	getch();
	fclose(tp);
//	return 0;
}
