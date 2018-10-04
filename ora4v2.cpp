#include <stdio.h>
#include <math.h>

void 
kiir ( double tomb[], int db)
{

 int i;
 for(i = 0; i <db; i++)
 	printf("PageRank[%d]: %f\n", i, tomb[i]);
}



double tavolsag(double PR[], double PRv[], int n)
{
	double tav = 0.0;
	int i;
	for( i = 0; i<n;i++)
		tav += abs(PR[i] - PRv[i]);
	return tav;


/*
	for( i = 0; i < n ; ++1)
	{
		osszeg += (PRv[i] - PR[i] * PRv[i] - PR[i]);

		return sqrt ( osszeg);
	} */
}

int main ( void)
{
	double L[4][4] = {
		{0.0, 0.0, 1.0 / 3.0, 0.0},
		{1.0, 1.0 / 2.0, 1.0 / 3.0, 1.0},
		{0.0, 1.0 / 2.0, 0.0, 0.0},
		{0.0, 0.0, 1.0 / 3.0, 0.0}
	};

	double PR[4] = { 0.0, 0.0, 0.0, 0.0};
	double PRv[4] = { 1.0 / 4.0, 1.0 / 4.0, 1.0 / 4.0, 1.0 / 4.0};

	int i, j, h;
	i =0; j = 0; h = 5;

	for(;;)
	{
		for(i = 0; i < 4; i++)
			PR[i] = PRv[i];
		for(i = 0; i < 4; i++)
	{
			//for( j = 0; j < 4; ++j)
			//	PR[i] += (L[i][j] * PRv[j]);
		
		double temp = 0;
		for( j =0; j<4;j++)
			temp+=L[i][j]*PR[j];
		PRv[i]= temp;
	}
		if( tavolsag (PR, PRv, 4) < 0.00000001)
			break;

//		for(i = 0; i < 4; ++i)
//			PRv[i] = PR[i];
	}
kiir(PR, 4);

	
}