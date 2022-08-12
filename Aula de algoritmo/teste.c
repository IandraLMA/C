#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main( ) {
    
    char nome[30];
    char endereco[100];
    int idade= 5;
    char cpf [14];
    
    printf("digite seu nome: \n");
    scanf("%s", &nome);
    
    printf("digite seu endereço: \n");
    scanf("%s", &endereco);
    
    printf("digite sua idade: \n");
    scanf("%d", &idade);
    
    printf ("digite seu cpf: \n");
    scanf ("%s", &cpf);

    printf("\n Nome: %s",nome );
    
    printf("\n Endereco: %s", endereco);
    
    printf("\n idade: %d", idade);

    printf("\n cpf: %s", cpf);

    return (EXIT_SUCCESS);
}
