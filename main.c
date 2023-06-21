#include <stdio.h>
#include "operaciones.h"

int main(){
    float num1, num2, suma = 0;
    float escalar;
    float arreglo[] = {1,2,3,4,5};

    printf("ingrese el numero:\n ");
    scanf("%f", &escalar);

    arregloEscalar(arreglo, 5, escalar);

    for (int i = 0; i < 5; i++) {
        printf("arreglo %d valor: %f\n", i,arreglo[i]);
    }

}
