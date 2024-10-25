#include <stdio.h>
#include "funciones.h"

void ingresoMatriz3x3(float mat[3][3]){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("[%d][%d]",i,j);
            scanf("%f",&mat[i][j]);
        }
        
    } 
}

void multiplicacion(float matriz1[3][3], float matriz2[3][3],float matrizR[3][3]){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                matrizR[i][j]+=matriz1[i][k]*matriz2[k][j];
            }
             printf("%f ",matrizR[i][j]);
        }
        printf("\n");
    }
    
}

void suma(float matriz1[3][3], float matriz2[3][3], float res[3][3]){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            res[i][j]=matriz1[i][j]+matriz2[i][j];
            printf("%f ",res[i][j]);
        }
        printf("\n");
    }
    
}

void multescalar(float esc, float matriz1[3][3], float res[3][3]){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            res[i][j]=matriz1[i][j]*esc;
            printf("%f ",res[i][j]);
        }
        printf("\n");
    }
    
}