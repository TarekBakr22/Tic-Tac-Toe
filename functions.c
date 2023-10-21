#include <stdio.h>
#include <stdlib.h>
#include"STD_TYPES.h"
#include"functions.h"

uint8 square[9] = {'1','2','3','4','5','6','7','8','9'};
void drawBoard()
{
	system("cls");
	printf("\n\n\t Tic Tac Toe \n\n");
	printf("Player1 (X) - Player2 (O) \n\n\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",square[0],square[1],square[2]);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",square[3],square[4],square[5]);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",square[6],square[7],square[8]);
	printf("     |     |     \n");	
}

sint8 checkWin()
{
	if(square[0] == square[1] && square[1] == square[2])
		return 1;
	else if (square[3] == square[4] && square[4] == square[5])
		return 1;
	else if(square[6] == square[7] && square[7] == square[8])
		return 1;
	else if(square[0] == square[3] && square[3] == square[6])
		return 1;
	else if(square[1] == square[4] && square[4] == square[7])
		return 1;
	else if(square[2] == square[5] && square[5] == square[8])
		return 1;
	else if(square[0] == square[4] && square[4] == square[8])
		return 1;
	else if(square[2] == square[4] && square[4] == square[6])
		return 1;
	else if(square[0] != '1' && square[1] != '2' && square[2] != '3' && square[3] !='4' && square[4] != '5' && square[5] != '6' && square[6] != '7' && square[7] != '8' && square[8] != '9')
		return 0;
	else 
		return -1;	
}

void singlePlayer()
{
	system("color a");
	uint8 player = 1;
	sint8 i ,flag;
	sint32 choice;
	sint8 mark; // which is X,O
	
	do {
		drawBoard();
		player = (player % 2==1) ? 1 : 2;
		printf("Player %d, enter the choice (press '0' to quit the game): ",player);
		scanf("%d",&choice);
		mark = (player == 1) ? 'X' : 'O';
	if(player==1)
	{
		if(choice == 1 && square[0] == '1')
			square[0] = mark;
		else if(choice == 2 && square[1] == '2')
			square[1] = mark;
			else if(choice == 3 && square[2] == '3')
			square[2] = mark;
			else if(choice == 4 && square[3] == '4')
			square[3] = mark;
			else if(choice == 5 && square[4] == '5')
			square[4] = mark;
			else if(choice == 6 && square[5] == '6')
			square[5] = mark;
			else if(choice == 7 && square[6] == '7')
			square[6] = mark;
			else if(choice == 8 && square[7] == '8')
			square[7] = mark;
			else if(choice == 9 && square[8] == '9')
			square[8] = mark;		
			else if(choice == 0)
			{
				exit(0);
			}
				
			else {
				printf("Invalid option !");
				player--;
			
			}
			i = checkWin();
			player++;
			
	}
	if(player==2)
	{
		if(square[4] == '5')
			square[4] = 'O';
		else if(square[0] == '1')
			square[0] = 'O';
		else if(square[2] == '3')
			square[2] = 'O';
		else if(square[1] == '2')
			square[1] = 'O';
		else if(square[6] == '7')
			square[6] = 'O';
		else if(square[7] == '8')
			square[7] = 'O';
		else if(square[8] == '9')
			square[8] = 'O';
		else if(square[3] == '4')
			square[3] = 'O';
		else if(square[5] == '6')
			square[5] = 'O';
		else if(choice == 0)
			{
				exit(0);
			}
				
			else {
				printf("Invalid option !");
				player--;
			
			}
			i = checkWin();
			player++;
	}
			
	
	}while(i == -1);
	
	drawBoard();
	player--;
	if(i==1){
		printf("\tPlayer %d won!",--player);
	}
	else {
		printf("\tGame draw.");
	}
}

void multiPlayer()
{
system("color a");
	sint32 player = 1, i ;
	sint32 choice, quit;
	sint8 mark; // which is X,O
	
	do {
		drawBoard();
		player = (player % 2==1) ? 1 : 2;
		printf("Player %d, enter the choice (press '0' to quit the game): ",player);
		scanf("%d",&choice);
		mark = (player == 1) ? 'X' : 'O';
		if(choice == 1 && square[0] == '1')
			square[0] = mark;
		else if(choice == 2 && square[1] == '2')
			square[1] = mark;
			else if(choice == 3 && square[2] == '3')
			square[2] = mark;
			else if(choice == 4 && square[3] == '4')
			square[3] = mark;
			else if(choice == 5 && square[4] == '5')
			square[4] = mark;
			else if(choice == 6 && square[5] == '6')
			square[5] = mark;
			else if(choice == 7 && square[6] == '7')
			square[6] = mark;
			else if(choice == 8 && square[7] == '8')
			square[7] = mark;
			else if(choice == 9 && square[8] == '9')
			square[8] = mark;
			
			else if(choice == 0)
			{
				exit(0);
			}
				
			else {
				printf("Invalid option !");
				player--;
			
			}
			i = checkWin();
			player++;
			
	}while(i == -1);
	
	drawBoard();
	if(i==1){
		printf("\tPlayer %d won!",--player);
	}
	else {
		printf("\tGame draw.");
	}
}