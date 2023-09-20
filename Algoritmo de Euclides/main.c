#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int numerador;
    int denominador;
}fraccion;

int mcd(fraccion *f); // calcula el m�nimo com�n divisor y lo retorna
fraccion reduce (fraccion *d); // retorna la fracci�n reducida
void muestraFraccion (fraccion c); // imprime por pantalla los valores

int main(){
    fraccion f1 = {140, 26};
    fraccion f2 = {380, 44};
    fraccion f3 = {830, 675};
    muestraFraccion (reduce(&f1));
    muestraFraccion (reduce(&f2));
    muestraFraccion (reduce(&f3));

return 0;
}



