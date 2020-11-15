//Week 1//*****************************************************
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