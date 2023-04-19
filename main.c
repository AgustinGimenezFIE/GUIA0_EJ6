#include <stdio.h>
/* EJ 6
 Escriba una función que calcule la suma y el producto de dos números enteros
utilizando punteros y luego los muestre por pantalla.
 */


void productSum(int *x,int *y);

void productSum(int *x,int *y){
    printf("La suma es: %d",(*x)+(*y));
    printf("\n El producto es %d",(*x)*(*y));

}

int main() {
    int x=0 , y=0;
    printf("Ingrese El valor de la variable 1 :");
    scanf("%d",&x);
    printf("\n Ingrese El valor de la variable 2 : ");
    scanf("%d",&y);
    productSum(&x,&y);
    return 0;
}


