#ifndef FILE_H
#define FILE_H

#include <stdio.h>
#include <stdlib.h>
#define tam 50

void matrixSum(int linesA, int columnsA, int linesB, int columnsB, float a[][tam], float b[][tam])
{
  int i, j;
  float c[tam][tam];
  if ((linesA == linesB) && (columnsA == columnsB))
  {
    printf("Matriz de soma \n\n");
    for (i = 0; i < linesA; i++)
    {
      for (j = 0; j < columnsA; j++)
      {
        c[i][j] = a[i][j] + b[i][j];
        printf("  %.0f ", c[i][j]);
      }
      printf("\n");
    }
    printf("\n");
  }
  else
  {
    printf("\n Matrizes de tamanhos diferentes, inválido. \n");
  }
}

void matrixSubtraction(int linesA, int columnsA, int linesB, int columnsB, float a[][tam], float b[][tam])
{
  int i, j;
  float sub[tam][tam];
  if ((linesA == linesB) && (columnsA == columnsB))
  {
    printf("Matriz subtracao \n\n");
    for (i = 0; i < linesA; i++)
    {
      for (j = 0; j < columnsA; j++)
      {
        sub[i][j] = a[i][j] - b[i][j];
        printf("  %.0f ", sub[i][j]);
      }
      printf("\n");
    }
    printf("\n");
  }
  else
  {
    printf("\n Matrizes de tamanhos diferentes, inválido. \n");
  }
}

void matrixMultiplication(int linesA, int columnsB, float a[][tam], float b[][tam], int linesB, int columnsA)
{
  int i, j, x;
  float c[tam][tam];
  float aux = 0;
  if (columnsA == linesB)
  {
    for (i = 0; i < linesA; i++)
    {
      for (j = 0; j < columnsB; j++)
      {
        for (x = 0; x < linesB; x++)
        {
          aux += a[i][x] * b[x][j];
        }
        c[i][j] = aux;
        aux = 0;
      }
    }
    for (i = 0; i < linesA; i++)
    {
      for (j = 0; j < columnsB; j++)
      {
        printf(" %2.f", c[i][j]);
      }
      printf("\n\n");
    }
  }
  else
  {
    printf("Quantidade de linhas da matriz A diferente da quantidade de colunas da matriz B \n");
  }
}

void showMatrixA(int linesA, int columnsA, float a[][tam])
{
  int i, j;
  printf("MATRIZ A \n\n");
  for (i = 0; i < linesA; i++)
  {
    for (j = 0; j < columnsA; j++)
    {
      printf(" %.0f ", a[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}

void showMatrixB(int linesB, int columnsB, float b[][tam])
{
  int i, j;
  printf("MATRIZ B \n\n");
  for (i = 0; i < linesB; i++)
  {
    for (j = 0; j < columnsB; j++)
    {
      printf(" %.0f ", b[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}

void ShowOptions()
{
  printf(" 1 -> Definir matriz A \n");
  printf(" 2 -> Definir matriz B \n");
  printf(" 3 -> A+B \n");
  printf(" 4 -> A-B \n");
  printf(" 5 -> A*B \n");
  printf(" 6 -> Ver matriz A \n");
  printf(" 7 -> Ver matriz B \n");
  printf(" 8 -> Sair \n");
}

#endif