#include <stdio.h>
#define size_x 25
#define size_y 10
#define c_x 2
#define c_y 8

int map[size_y][size_x];

void mapbase();

int main()
{
	mapbase();
	for(int i=0;i<size_y;i++)
	{
		for(int j=0;j<size_x;j++)
		{
			if(map[i][j]==0)
			printf("%d",map[i][j]);
			
			if(map[i][j]==1)
			printf("%d",map[i][j]);
			
			if(map[i][j]==2)
			printf("%d",map[i][j]);
			
			if(map[i][j]==3)
			printf("%d",map[i][j]);
		}
		printf("\n");
	}
	return 0;
}

void mapbase()
{
	/* Week 1 Assignment */
}