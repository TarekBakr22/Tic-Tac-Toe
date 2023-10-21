#include <stdio.h>
#include <stdlib.h>
#include"STD_TYPES.h"
#include"functions.h"


int main()
{
	start:
	system("cls");
	sint8 mode;
	printf("Enter the mode:\n1.SinglePlayer mode\n2.MultiPlayer mode\n3.Quit game\n");
	scanf("%d",&mode);
	if(mode==1)
	{
		singlePlayer();
	}
	else if(mode==2)
	{
		multiPlayer();
	}
	else if(mode==3)
	{
		exit(0);
	}
	else
	{
		printf("Invalid option. Please enter a valid option");
	}

}
