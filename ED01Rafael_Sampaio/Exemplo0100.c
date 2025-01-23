/* Exemplo0100 - v0.0.- 22/01/2025
Rafael Sampaio

para compilar: gcc -o (nome desejado) (arquivo.c)

*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void ex0100 (void){

    printf("%s\n","1");

    printf("\nAperte <ENTER> para finalizar.");
    getchar();
}

void ex0101 (void){

int x = 0;

    printf("\n%s\n","Exemplo_0101 - Progama na versao v0.1");

    printf("\n%s%d\n","X = ",x);
    printf("Entrar com um valor inteiro: ");
    scanf("%d",&x);
    getchar();

    printf("%s%d\n","x= ", x);

    printf("\n\nApertar <ENTER> para continuar.");
    getchar();
}

void ex0102 (void){

double x = 0.0;

    printf("\n%s\n","Exemplo0102 - Programa - v0.2");

    printf("\n%s%lf\n","X = ", x);

    printf("Entrar com um valor real: ");
    scanf("%lf",&x);
    getchar();

    printf("%s%lf\n","X = ", x);

    printf("\n\nAperte <ENTER> para continuar\n");
    getchar();
}

void ex0103 (void){

    char x = 'A';

    printf("\n%s%c\n","x = ", x);
    printf("Entre com um caractere: ");
    scanf("%c", &x);
    getchar();

    printf("%s%c\n","x = ", x);

    printf("\n\nPressione <ENTER> para continuar.\n");
    getchar();

}

void ex0104(void){

bool x= false;

int y= 0;

    printf("\n%s\n", "ex0104 - programa - v0.3");

    printf("\n%s%d\n","X = ", x);
    printf("Entrar com um valor logico: ");
    scanf("%d",&y);
    getchar();

    x=(y!=0);
    printf("%s%d\n", "x = ", x);
    printf("\n\nApertar <ENTER> para continuar.\n");
    getchar();
}

void ex0105 (void){

char x [80] = "abc";
char *px = &x[0];

    printf("\n%s\n", "0105 - Programa - v0.5");
    printf("\n%s%s\n","X = ", x);

    printf("Entrar com uma cadeia de caracteres: ");
    scanf("%s", x);
    getchar();

    printf("%s%s\n","x = ", x);

    printf("Entre com outra cadeia de caracteres: ");
    scanf("%s", px);
    getchar();

    printf("%s%s\n", "x = ", px);

    printf("\nPressione <ENTER> para continuar\n");
    getchar();
}


/*@return - codigo de encerramento
  @parametro argc - quantidade de parametros na linha de comandos
  @parametro argv - arranjo com o grupo de parametros na linha de comandos*/

int main (int argc, char* argv[]){

int opcao= 0;

    printf("%s\n","Exemplo0100 - Programa = v0.5");
    printf("%s\n","Autor: Rafael Sampaio ");
    printf("\n");

do{
    printf("\n%s\n","Opcoes:");
    printf("\n%s","0 - Terminar");
    printf("\n%s","1 - 0100");
    printf("\n%s","2 - 0101");
    printf("\n%s","3 - 0102");
    printf("\n%s","4 - 0103");
    printf("\n%s","5 - 0104");
    printf("\n%s","6 - 0105");
    printf("\n");

    printf("\n%s","Opcao = ");
    scanf("%d",&opcao);
    getchar();

    printf("\n%s%d","Opcao = ", opcao);

    switch (opcao){
        case 0:
        break;
        case 1: 
            ex0100();
            break;
        case 2: 
            ex0101();
            break;
        case 3:
            ex0102();
            break;
        case 4:
            ex0103();
            break;
        case 5:
            ex0104();
            break;
        case 6:
            ex0105();
            break;

        default: printf("\nERRO: Opcao invalida.\n");
        break;
    }
}while (opcao != 0);

    printf("\n\nApertar ENTER para terminar.");
    getchar();
}