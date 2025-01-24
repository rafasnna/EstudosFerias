#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void main (void){

int x = 0;
int y = 0;
int resposta = 0;

printf("\nVamos somar um numero, porfavor me de o valor de X: ");
scanf("%d", &x);
getchar();

printf("\nAgora o valor de Y: ");
scanf("%d", &y);
getchar();

resposta = x + y;

printf("A resposta da soma dos dois numeros e: %d", resposta);
printf("\nPressione <ENTER> para finalizar");
getchar();

}