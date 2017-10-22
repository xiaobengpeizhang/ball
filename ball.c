#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
	
	int i, j;
	int x = 0, y = 5;
	int speed_x = 1, speed_y = 1;
	int top = 0, bottom = 30, left = 0, right = 50;
	while (1)
	{
		system("cls");
		x += speed_x;
		y += speed_y;
		for (i = 0; i < x; i++)  
		{
			printf("\n"); 
		} 
		for (j = 0; j < y; j++)
		{
			printf(" ");
		}
		printf("o");
		if ((x == top) || (x == bottom))
		{
			printf("\a");
			speed_x = -speed_x;
		}
		if ((y == left) || (y == right))
		{
			printf("\a");
			speed_y = -speed_y;
		}
		
		Sleep(100);
	}	
}
