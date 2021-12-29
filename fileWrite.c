#include<stdio.h>
#include<conio.h>

main()
{

	FILE *fp;
	char data[20];
	fp=fopen("sample11.txt","w");	// file name and file mode
	
	if(fp==NULL)
	{
		printf("File not found");
		exit(1);
	}
	
	scanf("%s",&data);
	fprintf(fp,data);
	printf("data sent to file succesfuly");

	// stop further modification on file
	fclose(fp);

	fprintf(fp,"dkjdgjls");
	printf("file closed");
	
	
//getch();	
}
