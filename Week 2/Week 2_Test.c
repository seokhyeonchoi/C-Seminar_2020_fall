#include <stdio.h>
#define size_x 25
#define size_y 10
#define c_x 2
#define c_y 8

int map[size_y][size_x];

void mapbase();
void mapping();

int main()
{
	mapbase();
	mapping();
	return 0;
}

void mapbase()
{
	for (int i = 0;i < size_y;i++)
	{
		for (int j = 0;j < size_x;j++)
		{
			if (i == (size_y - 1))
				map[i][j] = 1;

			else
				map[i][j] = 0;
		}
	}
	map[c_y][c_x] = 2;
	map[c_y-1][c_x] = 2;
}

void mapping() // Use "□", "○", "  "
{
	printf("□□□□□□□□□□□□□□□□□□□□□□□□□□□\n"); // Total 27 blocks

	/* Week 2 Assignment */
}