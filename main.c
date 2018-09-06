/*
 * Este programa nos ayudara a calcular el area de un triangulo, dados la base y la altura del mismo.
 *
 * Autor: Angel Olvera
 * 21 de Agosto de 2018
 * Correo: angelolvera00@hotmai.com
 */
#include <stdio.h>

int main() {
    //Declaración de variables
    double base;
    double altura;
    double area;

    //Aqui le pido al usuario la base y la altura del triangulo
    printf("Bienvenido, te ayudare a calcular el area de un triangulo");
    printf("Dame la longitud de la base: ");
    scanf("%lf", &base);
    printf("Dame la altura del triangulo: ");
    scanf("%lf", &altura);

    //Aqui calculo el area del triangulo
    area = (base * altura) /2 ;

    //Aqui le muestro al usuario el area del triangulo

    printf("El area del triangulo es: %lf\n", area);

    return 0;
}
