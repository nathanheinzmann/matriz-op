#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "operations.h"
#define tam 50

float a[tam][tam], b[tam][tam];
int limite1, limite2;
int columnsA, linesA, columnsB, linesB, i, j;

void defineMatrixA()
{
  printf("Linhas:");
  scanf("%d", &linesA);
  system("clear");
  printf("Colunas: ");
  scanf("%d", &columnsA);
  system("clear");
  printf("Elementos: \n\n");

  for (i = 0; i < linesA; i++)
  {
    for (j = 0; j < columnsA; j++)
    {
      scanf("%f", &a[i][j]);
    }
  }
  system("clear");
}

void defineMatrixB()
{
  printf("Linhas:");
  scanf("%d", &linesB);
  system("clear");
  printf("Colunas: ");
  scanf("%d", &columnsB);
  system("clear");

  printf("Elementos: \n\n");

  for (i = 0; i < linesB; i++)
  {
    for (j = 0; j < columnsB; j++)
    {
      scanf("%f", &b[i][j]);
    }
  }
  system("clear");
}

int exibirMenur(int *opcao)
{
  switch (*opcao)
  {
  case 0:
    break;

  case 1:
    defineMatrixA();
    break;

  case 2:
    defineMatrixB();
    break;

  case 3:
    matrixSum(linesA, columnsA, linesB, columnsB, a, b);
    break;

  case 4:
    matrixSubtraction(linesA, columnsA, linesB, columnsB, a, b);
    break;

  case 5:
    matrixMultiplication(linesA, columnsB, a, b, linesB, columnsA);
    break;

  case 6:
    showMatrixA(linesA, columnsA, a);
    break;

  case 7:
    showMatrixB(linesA, columnsB, b);
    break;

  default:
    printf("\n\nOpcao invalida. Digite novamente.\n\n");
    break;
  }

  ShowOptions();
  scanf("%d", &*opcao);
}

int main()
{
  int opcao = 0;

  while (opcao != 8)
  {
    system("clear");
    exibirMenur(&opcao);
  }

  system("clear");
  printf("\nBye :)\n\n");

  return 0;
}