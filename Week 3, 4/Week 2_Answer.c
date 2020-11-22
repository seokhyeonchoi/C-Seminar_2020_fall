//Week 2//*****************************************************
void mapping()
{
	printf("□□□□□□□□□□□□□□□□□□□□□□□□□□□\n"); // Total 27 blocks
	for (int i = 0;i < size_y;i++)
	{
		printf("□");
		for (int j = 0;j < size_x;j++)
		{
			if (map[i][j] == 0)
				printf("  ");

			else if (map[i][j] == 1)
				printf("□");

			else if (map[i][j] == 2)
				printf("○");

			else
				printf("□");
		}
		printf("□");
		if (i == 5)
			printf(" Press 'UP' to 'Jump'");
		if (i == 7)
			printf(" Press 'DOWN' to 'Slide'");
		printf("\n");
	}
}