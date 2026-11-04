# include <stdio.h>
void saisirNotes(float *T, int N)
{
 
}

void *afficherNotes(float *T, int N )
{
	int i;

	i = 0;
	while (i < N)
	{
		printf("%f\n", *(T + i));
		i++;
	}
	
}


int	main()
{
	float p[6] = {0, 19, 20, 23, 17, 6};
	afficherNotes(p, 6);
	// T = p;
	// N = 6;
	return (0);
}

























