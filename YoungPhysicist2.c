//Young Physicist 2
#include<stdio.h>
#include<stdlib.h>
void crearMatriz(int ***mat, int fil, int col);
void leerMatriz(int **mat, int fil, int col);
void imprimirMatriz(int **mat, int fil, int col);


int main(void)
{
	int filas=0, columnas=3;
	scanf("%d", &filas);
	
	//Función para leer la matriz
	int** matriz;
	crearMatriz(&matriz, filas, columnas);

	printf("Número de filas: %d", sizeof(matriz));

	leerMatriz(matriz, filas, columnas);
	imprimirMatriz(matriz, filas, columnas);
	
	
}

void crearMatriz(int ***mat, int fil, int col)
{
	*mat = (int**)malloc(fil*sizeof(int*));
	for(int i=0; i<fil; i++)
		*(mat[i]) = (int*)malloc(col*sizeof(int));
}


void leerMatriz(int **mat, int fil, int col)
{
	for(int i=0; i<fil; i++)
	{
		for(int j=0; j<col; j++)
		{
			scanf("%d", &mat[i][j]);
		}
	}
	
}

void imprimirMatriz(int **mat, int fil, int col)
{
	for(int i=0; i<fil; i++)
	{
		for(int j=0; j<col;j++)
		{
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
}