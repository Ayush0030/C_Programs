#include<stdio.h>
void main(){
	char array[3][3];
	
	int i,j;
	int index_row, index_col;
	int flag=0;
//	scanf("%c",&c);
	printf("The PLAYER-1 will be assigned X\n \n The PLAYER-2 will be assigned O\n")
	for(i=1;i<=9;i++){
		if(flag>0){
			break; // if the player wins before the end of the game
		}
		if(i%2!=0){
			printf("PLAYER 1 Enter Index Row and Index Col\n");
			scanf("%d%d",&index_row,&index_col);
			while(array[index_row][index_col]=='O'){ // Limit the Player 1 to enter and player 2 reserved position
				printf("The Values are taken by player 2\n Enter the Index Row, index Col Again\n");	
				scanf("%d%d",&index_row,&index_col);
			}
			array[index_row][index_col]='X';		// assign X to position chosen by Player - 1	
		}
		else{
			printf("PLAYER 2 Enter Index Row and Index Col\n");
			scanf("%d%d",&index_row,&index_col);
			while(array[index_row][index_col]=='X'){ // Limit the Player 2 to enter and player 1 reserved position
				printf("The Values are taken by player 1\n Enter the Index Row, index Col Again\n");	
				scanf("%d%d",&index_row,&index_col);
			}
			
			array[index_row][index_col]='O'; 	// assign O to position chosen by Player - 1
		}
	
//	scanf("%d%d",&index_row,&index_col);
//	array[index_row][index_col]=999;
//	printf("%d",array[index_row][index_col]);

		if(i>=5){
			for(j=0;j<3;j++){
				if(array[j][0]==array[j][1]&&array[j][1]==array[j][2]){
					printf("%c is the WINNER Horizontal\n",array[j][0]);
					flag++;
					break;
				}	
				else if(array[0][j]==array[1][j]&&array[1][j]==array[2][j]){
				printf("%c is the WINNER Vertical\n",array[0][j]);
					flag++;
					break;
				}
				else if(array[0][0]==array[1][1]&&array[1][1]==array[2][2]){
				printf("%c is the WINNER Diagonal 1\n",array[0][0]);
					flag++;
					break;
				}
				else if(array[0][2]==array[1][1]&&array[1][1]==array[2][0]){
				printf("%c is the WINNER Diagonal  2\n",array[0][2]);
					flag++;
					break;	
				}
			}
		}
		
	}
	
	
	printf("Your TikTackToe is below\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%c",array[i][j]);
		}
		printf("\n");
	}
	
//	if(flag==0){			
//		for(i=0;i<3;i++){
//				if(array[i][0]==array[i][1]&&array[i][1]==array[i][2]){
//					printf("%c is the WINNER horizontal",array[i][0]);
//				}	
//				else if(array[0][i]==array[1][i]&&array[1][i]==array[2][i]){
//					printf("%c is the WINNER vertical",array[0][i]);
//				}		
//				else if(array[0][0]==array[1][1]&&array[1][1]==array[2][2]){
//					printf("%c is the WINNER diagonal default",array[0][0]);
//				}
//				else if(array[0][2]==array[1][1]&&array[1][1]==array[2][0]){
//					printf("%c is the WINNER diagonal second",array[0][2]);
//				}
//				else
//				printf("No one won");
//		}
//	}
	if(flag==0){
		printf("No one won");

	}
}
