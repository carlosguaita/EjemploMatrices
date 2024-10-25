#include <stdio.h>
#include "funciones.h"

int main (int argc, char *argv[]) {
    int opc;
    float mat1[3][3];
    float mat11[3][3];
    float esc;
    float res[3][3];

    printf("Selecciones una opcion:\n1.Suma\n2.Multiplicacion\n3.Multiplicacion Escalar\n>>");
    scanf("%d",&opc);
    switch (opc)
    {
    case 1:
        printf("Ingrese la matriz1\n");
        ingresoMatriz3x3(mat1);
        printf("Ingrese la matriz2\n");
        ingresoMatriz3x3(mat11);
        suma(mat1,mat11,res);
        break;
    case 2:
        printf("Ingrese la matriz1\n");
        ingresoMatriz3x3(mat1);
        printf("Ingrese la matriz2\n");
        ingresoMatriz3x3(mat11);
        multiplicacion(mat1,mat11,res);
        break;
        case 3:
        printf("Ingrese la matriz1\n");
        ingresoMatriz3x3(mat1);
        printf("Ingrese el escalar");
        scanf("%f",&esc);
        multescalar(esc,mat1,res);
    default:
        break;
    }
    return 0;
}