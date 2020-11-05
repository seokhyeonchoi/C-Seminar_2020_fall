/***************************************************************/
/*                                                             */
/*        KOREA UNIVERSITY X HANDS C-Seminar 2020 Fall         */
/*                                                             */
/***************************************************************/

//Preprocessor//*************************************************
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <stdbool.h>
#define size_x 25
#define size_y 10
#define c_x 2
#define c_y 8
#define spd 150
#define oti 500
#define _CRT_SECURE_NO_WARNINGS

//Global Variable//***********************************************
int map[size_y][size_x];
int speed = spd;
int otime = oti;
int score = 0;

//Functions//*****************************************************
void openscreen();
void mapbase();
void mapping();
void slide(int a);
void jump(int b);
void stay();
void obstaclemaker();
void obstaclemove();
int gameover();
void Score();
int endscreen();
void gotoxy(int x, int y);
void CursorView(bool show);

//Main//*********************************************************
int main()
{
	int run = 1;
	srand((unsigned)time(NULL));
	CursorView(0);
	openscreen();
	while (run)
	{
		obstaclemove();
		run = endscreen();
		score = 0;
	}
	return 0;
}

void openscreen()
{
	printf("								\n");
	printf("	KOREA UNIVERSITY X HANDS	\n");
	printf("								\n");
	printf("	   C-Seminar 2020 Fall		\n");
	printf("								\n");
	printf("								\n");
	printf("	      START GAME!			\n");
	printf("								\n");
	Sleep(3000);
	mapbase();
	system("cls");
	mapping();
}

void mapbase()
{
	/* Week 1 Assignment */
}

void mapping()
{
	printf("□□□□□□□□□□□□□□□□□□□□□□□□□□□\n"); // Total 27 blocks

	/* Week 2 Assignment */
}

void slide(int cot)
{
	int cx, cy;
	for (int i = 0;i < size_y;i++)
	{
		for (int j = 0;j < size_x;j++)
		{
			if (map[i][j] == 2)
			{
				cx = j;
				cy = i;
			}
		}
	}

	/* Week 3&4 Assignment */
}

void jump(int cot)
{
	int cx, cy;
	for (int i = 0;i < size_y;i++)
	{
		for (int j = 0;j < size_x;j++)
		{
			if (map[i][j] == 2)
			{
				cx = j;
				cy = i;
			}
		}
	}

	/* Week 3&4 Assignment */
}

void stay()
{
	int cx, cy;
	for (int i = 0;i < size_y;i++)
	{
		for (int j = 0;j < size_x;j++)
		{
			if (map[i][j] == 2)
			{
				cx = j;
				cy = i;
			}
		}
	}
	if (map[cy-1][cx+1] == 3 || (map[cy][cx+1] == 3))
	{
		map[cy][cx] = 0; map[cy-1][cx] = 0;
		gotoxy(2*(cx+1), cy+1);
		printf("  ");
		gotoxy(2*(cx+1), cy);
		printf("  ");
	}
}

void obstaclemaker()
{
	int b;
	int obs[6][size_y - 1];
	b = rand() % 6;
	if (b == 0)
	{
		obs[b][size_y - 10] = 0;
		obs[b][size_y - 9] = 0;
		obs[b][size_y - 8] = 0;
		obs[b][size_y - 7] = 0;
		obs[b][size_y - 6] = 0;
		obs[b][size_y - 5] = 0;
		obs[b][size_y - 4] = 0;
		obs[b][size_y - 3] = 0;
		obs[b][size_y - 2] = 3;
		for (int i = 0;i < size_y - 1;i++)
		{
			map[i][size_x - 1] = obs[b][i];
		}
	}
	else if (b == 1)
	{
		obs[b][size_y - 10] = 0;
		obs[b][size_y - 9] = 0;
		obs[b][size_y - 8] = 0;
		obs[b][size_y - 7] = 0;
		obs[b][size_y - 6] = 0;
		obs[b][size_y - 5] = 0;
		obs[b][size_y - 4] = 0;
		obs[b][size_y - 3] = 3;
		obs[b][size_y - 2] = 3;
		for (int i = 0;i < size_y - 1;i++)
		{
			map[i][size_x - 1] = obs[b][i];
		}
	}
	else if (b == 2)
	{
		obs[b][size_y - 10] = 0;
		obs[b][size_y - 9] = 0;
		obs[b][size_y - 8] = 0;
		obs[b][size_y - 7] = 0;
		obs[b][size_y - 6] = 0;
		obs[b][size_y - 5] = 0;
		obs[b][size_y - 4] = 0;
		obs[b][size_y - 3] = 3;
		obs[b][size_y - 2] = 0;
		for (int i = 0;i < size_y - 1;i++)
		{
			map[i][size_x - 1] = obs[b][i];
		}
	}
	else if (b == 3)
	{	
		obs[b][size_y - 10] = 3;
		obs[b][size_y - 9] = 3;
		obs[b][size_y - 8] = 3;
		obs[b][size_y - 7] = 3;
		obs[b][size_y - 6] = 3;
		obs[b][size_y - 5] = 3;
		obs[b][size_y - 4] = 3;
		obs[b][size_y - 3] = 0;
		obs[b][size_y - 2] = 0;
		for (int i = 0;i < size_y - 1;i++)
		{
			map[i][size_x - 1] = obs[b][i];
		}
	}
	else if (b == 4)
	{	
		obs[b][size_y - 10] = 0;
		obs[b][size_y - 9] = 0;
		obs[b][size_y - 8] = 0;
		obs[b][size_y - 7] = 0;
		obs[b][size_y - 6] = 0;
		obs[b][size_y - 5] = 0;
		obs[b][size_y - 4] = 3;
		obs[b][size_y - 3] = 3;
		obs[b][size_y - 2] = 0;
		for (int i = 0;i < size_y - 1;i++)
		{
			map[i][size_x - 1] = obs[b][i];
		}
	}
	else
	{	
		obs[b][size_y - 10] = 3;
		obs[b][size_y - 9] = 3;
		obs[b][size_y - 8] = 3;
		obs[b][size_y - 7] = 3;
		obs[b][size_y - 6] = 3;
		obs[b][size_y - 5] = 3;
		obs[b][size_y - 4] = 3;
		obs[b][size_y - 3] = 3;
		obs[b][size_y - 2] = 0;
		for (int i = 0;i < size_y - 1;i++)
		{
			map[i][size_x - 1] = obs[b][i];
		}
	}
}

void obstaclemove()
{
	int obstime, k, run2 = 1, cot = 1, time = 0, mtime = 1, ctime = 1; 
	obstime = rand() % otime + 2 * otime;
	while (run2)
	{
		// Press key
		if (_kbhit())
		{
			k = _getch();
			/*if (k == 'p')
				score += 10;*/
			if (k == 224)
			{
				k = _getch();
				if (k == 72){
					// Jump
					while (cot <= 8)
					{
						if ((time % 30) == 0)
						{
							if (cot == 8) time = 0;
							jump(cot);
							++cot;
						}
						// Move obstacle
						if ((mtime % 50) == 0)
						{
							Score();
							for (int i = 0;i < size_y - 1;i++)
							{
								for (int j = 0;j < size_x;j++)
								{
									if (map[i][j] == 3){
										if (j != 0){
											map[i][j - 1] = map[i][j];
											map[i][j] = 0;
											gotoxy(2*(j+1), i+1);
											printf("  ");
											gotoxy(2*(j), i+1);
											printf("□");
										}
										else{
											map[i][j] = 0;
											gotoxy(2*(j+1), i+1);
											printf("  ");
										}

									}
								}
							}
							Sleep(speed);
							mtime = 0;
						}
						// Touch obstacle
						run2 = gameover();
						if (run2 == 0)
							break;
						// Make obstacle
						if ((ctime % obstime) == 0)
						{
							obstaclemaker();
							ctime = 0;
							obstime = rand() % otime + otime * 2;
						}
						time++;
						mtime++;
						ctime++;
					}
					run2 = gameover();
					cot = 1;
				}
				else if (k == 80){
					// Slide
					while (cot <= 8)
					{
						if ((time % 30) == 0)
						{
							if (cot == 8) time = 0;
							slide(cot);
							Sleep(50);
							++cot;
						}
						// Move obstacle
						if ((mtime % 50) == 0)
						{
							Score();
							for (int i = 0;i < size_y - 1;i++)
							{
								for (int j = 0;j < size_x;j++)
								{
									if (map[i][j] == 3){
										if (j != 0){
											map[i][j - 1] = map[i][j];
											map[i][j] = 0;
											gotoxy(2*(j+1), i+1);
											printf("  ");
											gotoxy(2*(j), i+1);
											printf("□");
										}
										else{
											map[i][j] = 0;
											gotoxy(2*(j+1), i+1);
											printf("  ");
										}

									}
								}
							}
							Sleep(speed);
							mtime = 0;
						}
						// Touch obstacle
						run2 = gameover();
						if (run2 == 0)
							break;
						// Make obstacle
						if ((ctime % obstime) == 0)
						{
							obstaclemaker();
							ctime = 0;
							obstime = rand() % otime + otime * 2;
						}
						time++;
						mtime++;
						ctime++;
					}
					run2 = gameover();
					cot = 1;
				}
			}
		}
		// Do not press key
		else {
			stay();
			if ((mtime % 50) == 0)
			{
				Score();
				for (int i = 0;i < size_y - 1;i++)
				{
					for (int j = 0;j < size_x;j++)
					{
						if (map[i][j] == 3){
							if (j != 0){
								map[i][j - 1] = map[i][j];
								map[i][j] = 0;
								gotoxy(2*(j+1), i+1);
								printf("  ");
								gotoxy(2*(j), i+1);
								printf("□");
							}
							else{
								map[i][j] = 0;
								gotoxy(2*(j+1), i+1);
								printf("  ");
							}

						}		
						
					}
				}
				Sleep(speed);
				mtime = 0;
			}
			run2 = gameover();
			if ((ctime % obstime) == 0)
			{
				obstaclemaker();
				ctime = 0;
				obstime = rand() % otime + otime * 2;
			}
			time++;
			mtime++;
			ctime++;
		}
	}
	speed = spd;
	otime = oti;
}

int gameover()
{
	int count = 0;
	for (int i = 0;i < size_y;i++)
	{
		for (int j = 0;j < size_x;j++)
		{
			if (map[i][j] == 2) count++;
		}
	}
	if (count == 2) return 1;
	else {
		system("cls");
		mapping();
		return 0;
	}
}

void Score()
{
	++score;
	gotoxy(2*(size_x + 2), 2);
	printf(" Score : %d", score/2);
	if ((score % 100) == 0 && speed > 20)
	{
		speed -= 5;
		otime -= 20;
	}
	else if ((score % 100) == 0 && speed <= 10) speed--;
}

int endscreen()
{
	int answer;
	system("cls");
	printf("\n\t    Game Over!\n");
	printf("\t Your Score : %d\n\n", score/2);
	printf("\tDo You Wanna Regame?\n");
	printf("\t  1. GO   2. EXIT\n\n");
	printf("\t   Press Number: ");
	scanf_s("%d", &answer);
	if (answer == 1)
	{
		system("cls");
		mapbase();
		mapping();
		return 1;
	}
	else
	{
		system("cls");
		return 0;
	}
}

void gotoxy(int x, int y)
{
	COORD Pos;
	Pos.X = x;
	Pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void CursorView(bool show)
{
	HANDLE hConsole;
	CONSOLE_CURSOR_INFO ConsoleCursor;
	hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
	ConsoleCursor.bVisible=show;
	ConsoleCursor.dwSize=1;
	SetConsoleCursorInfo(hConsole,&ConsoleCursor);
}