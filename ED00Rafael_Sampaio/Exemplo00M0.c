#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define PI 3.14 // definicao de macro (nome para substituir valor)

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
{// definicao de constante
const float LOCAL_PI = 3.14; // com nome e tipo (melhor)
    printf ( " 7 - PRIMEIRO EXEMPLO EM C" );
    printf ( "\nMATRICULA: ______ ALUNO : __________________" );
    printf ( "\nEXEMPLOS DE VALORES : " );
    printf ( "\nCARACTERE : %c", 'A' ); // letra ou simbolo
    printf ( "\nINTEIRO : %d", 10 ); // valor sem parte fracionaria
    printf ( "\nREAL : %f" , LOCAL_PI ); // constante real
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar( ); // para esperar
}
void eight (void)
{
    // definicao de constante
const float LOCAL_PI = 3.14; // com nome e tipo (melhor)
// definicao de variavel real
float X = 10.01; // com atribuicao de valor inicial
    printf ( " 8 - PRIMEIRO EXEMPLO EM C" );
    printf ( "\nMATRICULA: ______ ALUNO : __________________" );
    printf ( "\nEXEMPLOS DE VALORES : " );
    printf ( "\nCARACTERE : %c", 'A' ); // letra ou simbolo
    printf ( "\nINTEIRO : %d", 10 ); // valor sem parte fracionaria
    printf ( "\nREAL : %f", LOCAL_PI ); // constante real
    printf ( "\nREAL : %f", X ); // variavel real
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
}

void nine (void){

    const float LOCAL_PI = 3.14;
    float X = 10.01;
    int I = 10;
    printf ( " 9 - PRIMEIRO EXEMPLO EM C" );
    printf ( "\nMATRICULA: ______ ALUNO : __________________" ); 
    printf ( "\nEXEMPLOS DE VALORES : " );
    printf ("\nINTEIRO : %i", I );
    printf ("\nREAL : %f", X );
    printf ("\nReal : %f", LOCAL_PI);
    printf ("\n PRESSIONAR <ENTER> PARA TERMINAR.");
    getchar( );
    }

void ten (void)
{
    const double LOCAL_PI = 3.14;
    float X = 10.01;
    int I = 10;
    char* N = "\n";
    printf ("  10 - PRIMEIRO EXEMPLO EM C");
    printf ("\nMATRICULA: ______ ALUNO : ____________");
    printf ("%c%s",    N,  "Exemplos de valores:");
    printf ("%c%s%i",  I,  "INTEIRO: ", I);
    printf ("%c%s%f",  N,  "REAL  :", X);
    printf ("%c%s%lf", N,  "REAL :", LOCAL_PI);
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