#include  <stdio.h>
int main (){

    float salario=0;
    float desconto=0;
    float salarioAlterado=0;
    float porcentagem =0;

    printf ("Digite o valor do salario: \n");
    scanf ("%f" , &salario );
    //printf ("O salario é %.2f ", salario); teste 
    if (salario <1903.98)  {
        printf ("O salario nao tera desconto, seu salario é %.2f" ,salario );    
    }

    else if (salario >= 1903.99 && salario <=2826.65  ){
        desconto =salario*0.075;
        porcentagem = 7.5;

    }
    else if (salario >=2826.65 && salario <=3751.55){
         desconto =salario*0.15;
         porcentagem = 15;
    }
    else if (salario >=3751.06 && salario <=4664.68){
        desconto =salario*0.225;
        porcentagem = 22.5;
    }
    else if (salario >4664.68){
         desconto =salario*0.275;
         porcentagem = 27.5;
    }
        salarioAlterado= salario-desconto;
        printf ("\nO desconto do inss: %.2f percentual: %.2f %%" , desconto, porcentagem);
        printf ("\nO salario liquido: %.2f ", salarioAlterado);


}