/* Exemplo0100 - v0.0.- 22/01/2025
Rafael Sampaio

para compilar: gcc -o (nome desejado) (arquivo.c)

*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

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

void ex0106 (void){

int x = 0;
int y = 0;
int z = 0;
int *py = &y;

    printf("\n%s\n","ex0106-programa-v0.6");
    printf("%s%d\n","x = ", x);
    printf("%s%d\n","y = ", y);

    printf("Entre com um valor inteiro: ");
    scanf("%d",&x);
    getchar();

    printf("Entrar com outro valor inteiro: ");
    scanf ("%i", py);
    getchar();

    z = x * y;

    //mostrar valor resultante 
    printf("%s(%i)*(%i) = (%d)\n","z = ",x, y, z);

    printf("\n\nApertar <ENTER> para continuar.\n");
    getchar();
}

void ex0107(void){

char x [80] = "abc"; // 80 é o tamanho e abc valor
char y [80] = "def";
char z [80];
strcpy(z,"");

    printf("\n%s\n", "ex0107");

    printf("%s%s(%d)\n","x =", x, strlen(x));
    printf("%s%s(%d)\n","y =", y, strlen(y));

    printf ("Entrar com um caractere: ");
    scanf("%s", x);
    getchar();

    printf("Entrar com outras caracteres: ");
    scanf("%s", y);
    getchar();

    strcpy(z,x);
    strcat(z,y);
    printf("%s[%s]*[%s]=[%s]\n","z =",x,y,z);

    strcpy( z,strcat(strdup(x),y));
    printf("%s[%s]*[%s] = [%s]\n","z =",x,y,z);

    printf("\n\nPressione <ENTER> para finalizar");
    getchar();
}

void ex0108 (void){

double x = 0.0;
double y = 0.0;
double z = 0.0;

    printf("\n%s\n", "ex0108");

    printf ("%s%lf\n","x =", x);
    printf ("%s%lf\n","y =", y);

    printf("Entrar com um valor real: ");
    scanf("%lf", &x);
    getchar();

    printf("Entrar com outro valor real: ");
    scanf("%lf", &y);
    getchar();

    z =pow(x,y); // elevar a base (x) 'a potencia (y)

    printf("%s(%lf) elevado a (%lf) =(%lf)\n","z = ", x,y,z);
    
    x =pow(z, 1.0/y); //elevar a base (x) 'a potencia inversa de (y) (raiz)

    printf("%s(%lf) elevado a (1/%lf) =(%lf)\n","z = ", z,y,x);
    
    z =sqrt(x);

    printf("%sraiz(%lf) = (%lf)\n", "z = ", x,z);

    printf("\nPressione <ENTER> para finalizar.");
    getchar();

}

void ex0109(void){

int x=0;
double y=3.5;
char z='A';
bool w=false;

char s[80]= "";

    printf("\n%s\n","ex0109");

    printf("01. %s%d\n", "x = ", x);
    printf("02. %s%lf\n","y = ", y);
    printf("03. %s%c\n", "z = ", z);

x =(int)z;
    printf("04. %s%d -> %c\n", "x = ",x,z);

x =(int)y;
    printf("05. %s%d -> %lf\n","x = ",x,y);

x =97;
z =(char)x;
    printf("06. %s%c -> %d\n","z = ",z,x);

x =(int) '0';
z =(char) x;
    printf("07. %s%c -> %d\n","z = ",z,x);

x =w;
    printf("08. %s%d -> %d\n","x = ",x,w);

w =true;
x =w;
    printf("09. %s%d -> %d\n","x = ",x,w);

x =(w==false);
    printf("10. %s%d -> %d\n","x = ",x,w);

x =!(w==false);
    printf("11. %s%d -> %d\n","x = ",x,w);

x =(w!=false);
    printf("12. %s%d -> %d\n","x = ",x,w);


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
    printf("\n%s","7 - 0106");
    printf("\n%s","8 - 0107");
    printf("\n%s","9 - 0108");
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
        case 7:
            ex0106();
            break;
        case 8:
            ex0107();
            break;
        case 9:
            ex0108();
            break;

        default: printf("\nERRO: Opcao invalida.\n");
        break;
    }
}while (opcao != 0);

    printf("\n\nApertar ENTER para terminar.");
    getchar();
}