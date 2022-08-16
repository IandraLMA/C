#include <stdio.h>
#include <stdbool.h>

int verdade = 1;
int falso = 0;
int quantidadeDeUrsinhos=10;
float dinheiro;
int i=0;


char nome;
char feedback;
int main(){
while (i<=4  ){
i=i+1; 
printf ("te amo");



}
for (int x=0;x<=4;x++){
    printf ("\n te amo2\n");
}

    printf ("Digite seu nome:");
    scanf ("%s" , &nome );
    do
    { 
        switch(nome){
            case 'R' :{
            printf("Diguinho \n");
            break;
            }
            case 'I' :{
            printf("Iandrinha \n");
            break;
            }
            default:{
            printf("Não é o casal\n");
        
            }
       }

    }while (!(nome=='X'|| nome=='Q'));
    printf ("O programa foi legal?");
    scanf ("%s" , &feedback );
    if (feedback=='s')
    {
        printf("Obrigado");
    }
    else if (feedback=='n')
    {
        printf("Que pena");
    }
    else {
        printf ("Voce nao sabe escrever");
    }
}