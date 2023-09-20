#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int numerador;
    int denominador;
}fraccion;

int mcd(fraccion *f); // calcula el mínimo común divisor y lo retorna
fraccion reduce (fraccion *d); // retorna la fracción reducida
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

int mcd(fraccion *f){
    int r, a, b;
    a = f -> numerador;
    b = f -> denominador;
    while(b!=0){
        r = b;
        b = a % b;
        a = r;
    }
    return a;
}

fraccion reduce(fraccion *d){
    int maxi = mcd(d);
    fraccion mini;
    mini.numerador = d -> numerador / maxi;
    mini.denominador = d ->denominador / maxi;
    return mini;
}

void muestraFraccion (fraccion c){
    printf("La fracción reducida es %d/%d \n", c.numerador, c.denominador);
    printf("\n");

}

