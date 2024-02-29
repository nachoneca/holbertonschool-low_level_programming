#include"main.h"
/**
 *alloc_grid - allocates my grid with x and y
 *@width: num of x axys
 *@height: num of y axys
 *Return: my mtz
 */
int **alloc_grid(int width, int height)
{
	int a, b, **mtz;

	if (width <= 0 || height <= 0)
		return (NULL);

	mtz = (int **)malloc(height * sizeof(int *));
	if (mtz == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		mtz[a] = (int *)malloc(width * sizeof(int));
		if (mtz[a] == NULL)
		{
			for (b = 0; b < a; b++)
				free(mtz[b]);
			free(mtz);
			return (NULL);
		}
		for (b = 0; b < width; b++)
			mtz[a][b] = 0;
	}
	return (mtz);
}
