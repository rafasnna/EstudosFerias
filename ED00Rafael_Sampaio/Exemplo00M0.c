#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#define PI 3.1415 // definicao de macro (nome para substituir valor)

void one (void)
{
    printf ( " 1 - PRIMEIRO EXEMPLO EM C" );
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar ( ); // para esperar
} // fim do programa

void two (void)
{
    system ("cls"); // limpar a tela
    //system ("clear"); // limpar a tela no Linux

    printf ( " 2 - SEGUNDO EXEMPLO EM C\n" );
    system ("pause"); // (Windows) para esperar
    // getchar ( ); // para esperar (Linux)

} // fim do programa

void tree (void){

    system("cls"); // limpar a tela no Windows
// system("clear"); // limpar a tela no Linux
    printf ( " 3 - TERCEIRO EXEMPLO EM C" );
    printf ( "\n" ); // para mudar de linha
    printf ( "MATRICULA: 866307 ALUNO : Rafael Sampaio" );
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar( ); // para esperar

} // fim do programa

void four (void){
    printf ( " 4 - PRIMEIRO EXEMPLO EM C" );
    printf ( "\n" ); // para mudar de linha (="\n")
    printf ( "MATRICULA: ______ ALUNO : __________________" );
    printf ( "\n" ); // para mudar de linha
    printf ( "PRESSIONAR <Enter> PARA TERMINAR. " );
    getchar( ); // para esperar
}

void five (void)
{
    printf ( " 5 - PRIMEIRO EXEMPLO EM C" );
    printf ( "\nMATRICULA: ______ ALUNO : __________________" );
    printf ( "\nEXEMPLOS DE VALORES : " );
    printf ( "\nCARACTERE : %c", 'A' ); // letra ou simbolo
    printf ( "\nINTEIRO : %d", 10 ); // valor sem parte fracionaria
    printf ( "\nREAL : %f", 3.1415 ); // valor com parte fracionaria
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR. " );
    getchar( ); // para esperar
}
void six (void){
 
    printf ( " 6 - PRIMEIRO EXEMPLO EM C " );
    printf ( "\nMATRICULA: ______ ALUNO : __________________" );
    printf ( "\nEXEMPLOS DE VALORES : " );
    printf ( "\nCARACTERE : %c", 'A' ); // letra ou simbolo
    printf ( "\nINTEIRO : %d", 10 ); // valor sem parte fracionaria
    printf ( "\nREAL : %f", PI ); // emprego de macro
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar( ); // para esperar
}

void seven (void)
{

    printf ( " 7 - PRIMEIRO EXEMPLO EM C" );
    printf ( "\nMATRICULA: ______ ALUNO : __________________" );
    printf ( "\nEXEMPLOS DE VALORES : " );
    printf ( "\nCARACTERE : %c", 'A' ); // letra ou simbolo
    printf ( "\nINTEIRO : %d", 10 ); // valor sem parte fracionaria
    printf ( "\nREAL : %f" , PI ); // constante real
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar( ); // para esperar
}
void eight (void){

// definicao de variavel real
float X = 10.01; // com atribuicao de valor inicial
    printf ( " 8 - PRIMEIRO EXEMPLO EM C" );
    printf ( "\nMATRICULA: ______ ALUNO : __________________" );
    printf ( "\nEXEMPLOS DE VALORES : " );
    printf ( "\nCARACTERE : %c", 'A' ); // letra ou simbolo
    printf ( "\nINTEIRO : %d", 10 ); // valor sem parte fracionaria
    printf ( "\nREAL : %f", PI ); // constante real
    printf ( "\nREAL : %f", X ); // variavel real
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
}

void nine (void){

    float X = 10.01;
    int I = 10;
    printf ( " 9 - PRIMEIRO EXEMPLO EM C" );
    printf ( "\nMATRICULA: ______ ALUNO : __________________" ); 
    printf ( "\nEXEMPLOS DE VALORES : " );
    printf ("\nINTEIRO : %i", I );
    printf ("\nREAL : %f", X );
    printf ("\nReal : %f", PI);
    printf ("\n PRESSIONAR <ENTER> PARA TERMINAR.");
    getchar( );
    }

void ten (void)
{
    float X = 10.01;
    int I = 10;
    char* N = "\n";
    printf ("  10 - PRIMEIRO EXEMPLO EM C");
    printf ("\nMATRICULA: ______ ALUNO : ____________");
    printf ("%c%s",    N,  "Exemplos de valores:");
    printf ("%c%s%i",  I,  "INTEIRO: ", I);
    printf ("%c%s%f",  N,  "REAL  :", X);
    printf ("%c%s%lf", N,  "REAL :", PI);
    printf ("PRESSIONE <ENTER> PARA TERMINAR");
    getchar();
}
void eleven(void){

//Progama para ler e imprimir um valor inteiro
int X = 0;
printf(" 11 - Ler e imprimir um valor inteiro\n");
printf("Me dê um valor inteiro qualquer:");
scanf("%d, &X");
getchar();

printf("O valor que me passou é: %d", X);
printf("PRESSIONE <ENTER> PARA TERMINAR");
getchar();

}
void twelve(void){
//Programa para ler e imprimir um valor real
int X = 0.0;

printf(" 12 - Ler e imprimir um valor real\n");
printf("Me dê um valor real qualquer:");  
scanf("%lf", &X); 
getchar();

printf ("O Valor Digitado foi: %lf", X);
printf ("PRESSIONE <ENTER> PARA TERMINAR");
getchar();
}

void thirteen(void){

char X = 0;

printf (" 13 - Atividade de leitura e impressao do caractere");
printf ("Qualquer caractere:");
scanf("%c", &X);
getchar();
printf ("\n O Valor digitado foi: %c", X);
printf("\n Pressione <enter> para finalizar o programa");
getchar();

}

void fourteen (void){

char X [10];

printf (" 14 - Ler e imprimir , no maximo 9 caracteres");
printf ("digite no maximo, 9 caracteres quaisquer:");
scanf ("%s", X);
getchar();

}

void fifiteen (void){

int X=0, Y=0, Z=0;

printf ("\n15 - Ler e Somar dois valores inteiros");
printf ("Forneca um valor inteiro qualquer:");
scanf("%d", &X);
getchar();
printf ("Forneca agora outro valor inteiro:");
scanf("%d", Y);
getchar();
Z = X + Y;
printf ("A soma dos valores fornecidos é = %d", Z);
printf (" Pressione <ENTER> para finalizar");
getchar();
}

void sixteen (void){

float X=0.0, Y=0.0, Z=0.0;

printf ("16 - Ler e subtrair dois valores:");
printf ("nos dê o primeiro numero:");
scanf ("%f", &X);
getchar();
printf ("nos de o segundo numero:");
scanf ("%f", &Y);
Z = X - Y;
printf (" A diferença entre os dois é de = %f", Z);
printf ("Pressione <ENTER> parafinalizar o programa");
getchar();
}

void seventeen (void){

bool X=false, Y=false, Z=false;

printf (" 17 - Operar Valores Logicos");
X = true;
Y = false;
Z = X || Y; 
printf ("\n A disjunção entre verdadeiro e falso = %d, Z");
Z= X && Y;
printf ("\n A conjunção entre verdadeiro e falso = %d, Z");
printf ("\n Pressione <ENTER> para finalizar.");
getchar();
}

void eighteen (void){

double D = 0.0, //D = DISTANCIA
       T = 0.0, //T = TEMPO
       V = 0.0; //V = VELOCIDADE

printf (" 18 - Calcular a velocidade de um veiculo");
printf ("\n Fornecer uma distancia qualquer em METROS: ");
scanf ("lf", &D);
getchar();
printf ("\n Fornecer o tempo para percorre-la em segundos: ");
scanf ("lf", &T);
getchar();

}

void nineteen (void){

const char SENHA[5] = "XXXX";
char S [10];

printf(" 19 - Comparar caracteres com uma senha");
printf ("\nFornecer uma cadeia de caracteres qualquer:");
scanf ("%s", S); //OBS: NAO USAR & PARA VETORES/CHAR
getchar();
printf ("\nA comparaçao com a senha = %d", (strcmp(S,SENHA)==0)?1:0);
/// strcmp = comparação de strings (S1, S2)
// igual a 0 se S1 = S2 => retorna 1, senão retorna 0
printf ("\nPressione <ENTER> para finalizar.");
getchar();

}

void twenty (void){

double ARCO  = 0.0,
       COSSENO = 0.0,
       SENO = 0.0,
       TANGENTE = 0.0;

       printf (" 20 - Calcular o Arco Trigonometrico de um SENO");
       printf("\nFornecer valor de SENO");
       scanf("%lf", &SENO);
       getchar();
       COSSENO = sqrt( 1.0 - pow(SENO,2));
       TANGENTE = SENO / COSSENO;
       ARCO     = atan(TANGENTE);
       printf("\n O Arco trigonometrico em graus = %lf", (ARCO*180.0/PI));
       printf("\nPressionar <Enter> Para Terminar.");
       getchar();


}

void twentyone (void){

int X = 0;

printf (" 21 - ler e ver se um numero é igual a zero");
printf ("\nme de um valor qualquer:");
scanf ("%d", &X);
getchar();
if (X==0){
printf("\nO valor fornecido é igual a 0");
}else{
printf("\nO valor fornecido não é igual a 0");
printf("\nPressione <ENTER> para finalizar."); 
getchar();
}
}

void twentytwo (void){

float X= 0.0;

    printf ("\n 22 - Ler e testar um valor real");
    printf ("\nFornecer um valor real diferente de zero");
    scanf("%f", &X);
    getchar();
    if (X != 0.0){
        printf ("\nO Valor digitado foi diferente de zero");
        printf ("PRESSIONE <Enter> para finalizar");
        getchar();

    }

}

void twentythree (void){

char X= '0';

    printf ("23 - Ler e testar um caractere");
    printf ("\nFornecer um algarismo qualquer: ");
    scanf("%c", &X);
    getchar();
    if(X>='0' && X<= '9'){

        printf("\n O valor digitado foi um algarismo");
        printf("\nO algarismo digitado foi: %c", X);
    }// if algarismo
    printf("\nPressione <ENTER>para finalizar.");
    }

void twentyfour (void){

char X='0';

    printf (" 24 - Ler e testar caractere");
    printf("\nFornecer um caractere qualquer");
    scanf ("%c", &X);
if (!(X >='0' && X <= '9')){

    printf ("\nNao foi digitado um algorismo");
    printf ("\nFoi digitado o caractere: %c", X);
}// if Nao algarismo
    printf("\n Pressionar <ENTER> para terminar");
    getchar();
}

void twentyfive(void){

int X=0, Y=0;

    printf (" 25 - Ler e testar dois valores inteiros");
    printf("\nFornecer um valor inteiro qualquer: ");
    scanf("%d", &X);
    getchar();

    printf("\nFornecer um valor inteiro qualquer: ");
    scanf("%d", &Y);
    getchar();

if (X == Y){
    printf("\nDois valores iguais");
}else{
    printf("\n%d", X);
    printf("Diferente de");
    printf("%d", &Y);
}
    printf ("\nPressionar <ENTER> para finalizar.");
    getchar();
}

void twentysix (void){

double X=0.0, Y=0.0;

    printf(" 26 - Ler e testar dois valores reais");

    printf("\nFornecer valor real qualquer: ");
    scanf ("%lf", &X);
    getchar();

    printf("\nFornecer outro valor real qualquer: ");
    scanf ("%lf", &Y);
    getchar();
if(!(X == Y)){

    printf("\n%lf", X);
    printf("Difente de");
    printf ("%lf", Y);
}else{
    printf("Valores Iguais");
}
printf("\nPressione <ENTER> para finalizar.");
getchar();
}

void twentyseven (void){

int X=0, Y=0;
bool Z=false;

    printf (" 27 - Tratar valores logicos");
    printf("\nFornecer um valor inteiro qualquer: ");
    scanf("%d", &X);
    getchar();

    printf("\nFornecer outro valor inteiro qualquer:");
    scanf ("%d",&Y);
    getchar();
    Z = (X==Y);
if(Z){
    printf("Valores iguais");
}else{
    printf("Valores diferentes");
    }
    printf("\nPressione <ENTER> para finalizar");
    getchar();

}

void twentyeight (void){

char X='0';

    printf(" 28 - Ler e testar uma letra");
    printf("\nFornecer uma letra qualquer: ");
    scanf("%c", &X);
    getchar();
if(X >='A' && X <= 'Z'){
    printf("Foi digitada uma letra MAIUSCULA");
}else{
    if(X >= 'a' && X <= 'z'){
        printf("Foi digitada uma letra MINUSCULA");
    }else{
        printf("Nao foi digitada uma letra");
    }
}
printf ("\nPressionar <ENTER> para terminar.");
getchar();

}

void twentynine (void){

char X='0';

    printf(" 29 - Comparar caracteres <,=,>");
    printf("\nFornecer um dos caracteres citados: ");
    scanf("%c", &X);
    getchar();
    switch(X){

        case '>':printf ("Foi digitado o sinal de maior");
        break;
        case '=': printf ("Foi digitado o sinal de igual");
        break;
        case '<':printf("Foi digitado o sinal de menor");
        break;
        default: printf("Foi digitado um outro caractere qualquer");   
    }
    printf("\nPressione <ENTER> para finalizar.");
    getchar();

}

void thirty (void){

char X='0';

    printf(" 30 - Indentificar caracteres");
    printf("\nFornecer um caractere qualquer: ");
    scanf ("%c", &X);
    getchar();

switch (X){
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U': printf ("Foi digitado uma vogal");
    break;

    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9': printf("Foi digitado um algarismo");
              printf("\nO numero correspondente = %d", (X-48));
    break;

    default:  printf("Foi digitado um outro caractere qualquer"); 
    break;
}
    printf("\nPressione <ENTER> para finalizar.");
    getchar();
}

void thirtyone (void){

int X =0, contador =0;

while (contador <= 3){
    printf("\n");
    printf("%d. Fornecer um valor inteiro: ", contador);
    scanf("%d", &X);
    getchar();
    printf("\nO valor digitado foi: %d\n", X);
    contador = contador + 1;
    }
    printf ("\nPressionar <ENTER> para terminar.");
    getchar();
}

void thirtytwo (void){

int X =0, N =0, contador =0;

    printf (" 32 - ler e imprimir (N) valores inteiros");
    printf ("\nFornecer o numero de vezes(N): ");
    scanf("%d", &N);
    getchar();

    contador = 1;
while (contador <= N){

    printf ("\n%d", contador);
    printf ("fornecer um valor inteiro qualquer: ");
    scanf("%d", &X);
    getchar();
    printf ("\nO Valor digitado foi: %d\n", X);
    contador = contador + 1;
}
printf ("\nPressione <ENTER> para continuar");
getchar();
}

void thirytree (void){

int X=0, N=0;

    printf(" 33 - Ler e imprimir (N) valores inteiros\n");
    printf("\nFornecer o numero de vezes (N): ");
    scanf ("%d", &N);
    getchar();
while ( N > 0){
    printf ("\n%d", N);
    printf ("Fornecer um valor inteiro qualquer: ");
    scanf ("%d", &X);
    getchar();
    printf("\nO Valor digitado foi: %d\n", X);
    N = N - 1;
}
    printf ("\nPressionar <ENTER> para terminar");
    getchar();
}

void thirtyfour (void){

int X = 0, contador = 0;

    printf (" 34 - Ler e Imprimir 3 valores inteiros");
for (contador = 1; contador <=3; contador = contador + 1){

    printf ("\nNos de um valores inteiro: ", contador);
    scanf("%d", &X);
    getchar();
    printf ("\nO valor digitado foi: %d\n", X);
}
printf("\nPressione <ENTER> para finalizar");
getchar();

}

void thirtyfive (void){

int X = 0, N = 0, contador = 0;

    printf(" 35 - Ler e imprimir (N) valores inteiros\n");
    printf("\nFornecer o numero de vezes(N): ");
    scanf ("%d", &N);
    getchar();
for (contador = 1; contador <= N; contador++){

    printf("\n%d. fornecer um valor inteiro: ", contador);
    scanf ("%d", &X);
    getchar();
    printf("\nO valor digitado foi: %d", X);
}
    printf("\nPressione <ENTER> para terminar.");
    getchar();
}

void thirtysix (void){

int X =0, contador =0;

    printf (" 36 - Ler e imprimir 03 valores inteiros\n");
    contador= 1;
do{
    printf ("\n%d. Fornecer um valor inteiro: ", contador);
    scanf ("%d", &X);
    getchar();
    printf ("\nO valor digitado foi: %d\n", X);
}
while (contador <=3);
    printf("\nPressione <ENTER> para finalizar.");
    getchar();
}

void thirtyseven (void){

int X =0, contador= 0;

    printf (" 37 - Ler e imprimir (N) valores inteiros\n");
    printf ("\n Fornecer o numero de vezes (N): ");
    scanf ("%d", contador);
    getchar();
do{

    printf ("\n%d. fornecer um valor inteiro: ", contador);
    scanf ("%d", &X);
    getchar();
    printf ("\nO valor digitado foi: %d\n", X);
    contador = contador - 1;

}
while (contador > 0);
    printf ("\nPressione <ENTER> para finalizar.");
    getchar();
}

void thirtyeight (void){

int X = 0;

    printf (" 38 - Ler e imprimir inteiro nao nulos\n");
    printf ("\nFornecer um valor inteiro (0 = PARAR): ");
    scanf ("%d", &X);
    getchar();
while (X != 0){
    printf("\nO valor digitado foi: %d\n", X);
    printf("\nDigite um valor inteiro qualquer: ");
    scanf ("%d", &X);
    getchar();
}
    printf("\nPressione <ENTER> para finalizar.");
    getchar();
}

void thirtynine (void){

int X = 0;

    printf(" 39 - Para ler um inteiro nao nulo\n");
    printf ("\nForneer um valor diferente de zero: ");
    scanf ("%d", &X);
    getchar();
while (X == 0){
    printf ("\nFornecer um valor diferente de zero: ");
    scanf ("%d", &X);
    getchar();
}
    printf ("\nDigitado um numero diferente de zero\n");

    printf ("\nPressione <ENTER> para finalizar.");
    getchar();
}

void fourty (void){

int X = 0;

    printf(" 40 - Ler um inteiro nao nulo");
do{
    printf("\nDigite um numero diferente de zero: ");
    scanf("%d", &X);
    getchar();
}
while (X == 0);
    printf("\n DIGITADO UM NUMERO DIFERENTE DE ZERO\n");

    printf ("\nPressione <ENTER> para finalizar.");
    getchar();

}

void P1 (void){

    printf("\n");
    printf("\nchamado o procedimento P1 sem paramentros");
    printf("\n");

}

void fourtyone(void){

    printf(" 41 - chamada a um  procedimento");
    P1();

    printf ("\n");
    printf ("\nPressionar <ENTER> para terminar.");
    getchar();

}

void fourtytwo (void){



}

void fourtytree (void){



}

void fourtyfour (void){



}

void fourtyfive (void){



}

void fourtysix (void){



}

void fourtyseven (void){



}

void fourtyeight (void){



}

void fourtynine (void){



}

void fifity (void){



}


int main (int argc, char* argv [ ]) {

int opcao = 0;

printf ( "%s\n", "Teste de 50 Exemplos - Programa = v0.0" );
printf ( "%s\n", "Autor: Rafael Sampaio" );
printf ( "\n" );

//repetir
do
{


    printf ("\n%s\n", "Opcoes:");
    printf ("\n%s","0 - Terminar");
    printf ("\n%s","1 - Metodo 01");
    printf ("\n%s","2 - Metodo 02");
    printf ("\n%s","3 - Metodo 03");
    printf ("\n%s","4 - Metodo 04");
    printf ("\n%s","5 - Metodo 05");
    printf ("\n%s","6 - Metodo 06");
    printf ("\n%s","7 - Metodo 07");
    printf ("\n%s","8 - Metodo 08");
    printf ("\n%s","9 - Metodo 09");
    printf ("\n%s","10 - Metodo 10");
    printf ("\n%s","11 - Metodo 11");
    printf ("\n%s","12 - Metodo 12");
    printf ("\n%s","13 - Metodo 13");
    printf ("\n%s","14 - Metodo 14");
    printf ("\n%s","15 - Metodo 15");
    printf ("\n%s","16 - Metodo 16");
    printf("\n%s", "17 - Metodo 17");
    printf ("\n%s","18 - Metodo 18");
    printf ("\n%s","19 - Metodo 19");
    printf ("\n%s","20 - Metodo 20");
    printf ("\n%s","21 - Metodo 21");
    printf ("\n%s","22 - Metodo 22");
    printf ("\n%s","23 - Metodo 23");
    printf ("\n%s","24 - Metodo 24");
    printf ("\n%s","25 - Metodo 25");
    printf ("\n%s","26 - Metodo 26");
    printf ("\n%s","27 - Metodo 27");
    printf ("\n%s","28 - Metodo 28");
    printf ("\n%s","29 - Metodo 29");
    printf ("\n%s","30 - Metodo 30");
    printf ("\n%s","31 - Metodo 31");
    printf ("\n%s","32 - Metodo 32");

    printf ("\n");

    //ler opcoes do teclado
    printf("\n%s","opcao = "); 
    scanf("%d",&opcao); 
    getchar(); 

    //para mostrar a opcao lida
    printf("\n%s%d","Opcao = ", opcao);

    //escolher acao dependente da opcao
    switch (opcao){

    case 0: // nao fazer nada
    break;
    case 1: //executar metodo 01
        one();
        break;
        case 2: //executar metodo 02
        two();
        break;
        case 3: //executar metodo 03
        tree();
        break;
        case 4: //executar metodo 04
        four();   
        break;
        case 5: //executar metodo 05
        five();
        break;
        case 6: //executar metodo 06
        six();
        break;
        case 7: //executar metodo 07
        seven();
        break;
        case 8: //executar metodo 08
        eight();
        break;
        case 9:
        nine();
        break;
        case 10:
        ten();
        break;
        case 11:
        eleven();
        break;
        case 12:
        twelve();
        break;
        case 13:
        thirteen();
        break;
        case 14:
        fourteen();
        break;
        case 15:
        fifiteen();
        break;
        case 16:
        sixteen();
        break;
        case 17:
        seventeen();
        break;
        case 18:
        eighteen();
        break;
        case 19:
        nineteen();
        break;
        case 20:
        twenty();
        break;
        case 21:
        twentyone();
        break;
        case 22:
        twentytwo();
        break;
        case 23:
        twentythree();
        break;
        case 24:
        twentyfour();
        break;
        case 25:
        twentyfive();
        break;
        case 26:
        twentysix();
        break;
        case 27:
        twentyseven();
        break;
        case 28:
        twentyeight();
        break;
        case 29:
        twentynine();
        break;
        case 30:
        thirty();
        break;
        case 31:
        thirtyone();
        break;
        case 32:
        thirtytwo();
        break;
    
        default: // comportamento padrão
        printf("\n Erro: Opcao invalida.\n");
        break;
} // end switch
}
while (opcao != 0);

// encerrar 
printf ( "\n\nApertar ENTER para terminar." );
getchar( ); 
return ( 0 ); 
} // end main ( )