//Week 3&4//****************************************************
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
	if (cot < 8)
	{
		if (map[cy][cx+1] == 3)
		{
			map[cy][cx] = 0; map[cy-1][cx] = 0;
			gotoxy(2*(cx+1), cy+1);
			printf("  ");
			gotoxy(2*(cx+1), cy);
			printf("  ");
		}
		else
		{
		map[cy-1][cx] = 0; map[cy][cx] = 2; map[cy][cx-1] = 2;
		gotoxy(2*(cx+1), cy+1);
		printf("○");
		gotoxy(2*(cx+1), cy);
		printf("  ");
		gotoxy(2*(cx), cy+1);
		printf("○");
		}
	}
	else
	{
		if (map[cy-1][cx+1] == 3 || (map[cy][cx+1] == 3))
		{
			map[cy][cx] = 0; map[cy][cx-1] = 0;
			gotoxy(2*(cx+1), cy+1);
			printf("  ");
			gotoxy(2*(cx+1), cy+1);
			printf("  ");
		}
		else
		{
		map[cy][cx] = 2; map[cy-1][cx] = 2; map[cy][cx-1] = 0;
		gotoxy(2*(cx+1), cy+1);
		printf("○");
		gotoxy(2*(cx+1), cy);
		printf("○");
		gotoxy(2*(cx), cy+1);
		printf("  ");
		}
	}
}

//Week 3&4//****************************************************
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
	if (cot < 5)
	{
		if ((map[cy-2][cx+1] == 3) || (map[cy-1][cx+1] == 3))
		{
			map[cy][cx] = 0; map[cy-1][cx] = 0;
			gotoxy(2*(cx+1), cy+1);
			printf("  ");
			gotoxy(2*(cx+1), cy);
			printf("  ");
		}
		else
		{
			map[cy - 1][cx] = 2; map[cy - 2][cx] = 2; map[cy][cx] = 0;
			gotoxy(2*(cx+1), cy+1);
			printf("  ");
			gotoxy(2*(cx+1), cy);
			printf("○");
			gotoxy(2*(cx+1), cy-1);
			printf("○");
		}
	}
	if (cot >= 5)
	{
		if (map[cy+1][cx+1] == 3 || (map[cy][cx+1] == 3))
		{
			map[cy][cx] = 0; map[cy-1][cx] = 0;
			gotoxy(2*(cx+1), cy+1);
			printf("  ");
			gotoxy(2*(cx+1), cy);
			printf("  ");
		}
		else
		{
			map[cy-1][cx] = 0; map[cy][cx] = 2; map[cy + 1][cx] = 2;
			gotoxy(2*(cx+1), cy);
			printf("  ");
			gotoxy(2*(cx+1), cy+1);
			printf("○");
			gotoxy(2*(cx+1), cy+2);
			printf("○");
		}
	}
}