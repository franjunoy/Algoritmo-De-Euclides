#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int numerador;
    int denominador;
}fraccion;

int mcd(fraccion *f); // calcula el m�nimo com�n divisor y lo retorna
fraccion reduce (fraccion *d); // retorna la fracci�n reducida
void muestraFraccion (fraccion c); // imprime por pantalla los valores


