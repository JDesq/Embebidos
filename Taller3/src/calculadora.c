#include <stdio.h>
#include <biblioteca.h>

int main(){
    float x = 0;
    float y = 0;
    float result = 0;

    printf(" > Digite el numero 1: ");
    scanf("%f", &x);
    printf(" > Digite el numero 2: ");
    scanf("%f", &y);
    result = suma((float)x, (float)y);
    printf("El resultado de la suma es: %.3f\n", result);
    result = resta(x, y);
    printf("El resultado de la resta es: %.3f\n", result);
    result = multiplicacion(x, y);
    printf("El resultado de la multiplicacion es: %.3f\n", result);
    result = division(x, y);
    printf("El resultado de la division es: %.3f\n", result);
    result = raiz(x);
    printf("El resultado de la raiz del primer numero es: %.3f\n", result);
    result = raiz(y);
    printf("El resultado de la raiz del segundo numero es: %.3f\n", result);

}
