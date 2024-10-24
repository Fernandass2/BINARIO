#include <stdio.h>

    int main(){
    int num1;
    int num2;
    int somar;
    int subtrair;
    int multiplicar;
    int dividir;
    int resto;
    
    printf("Digite um número:\n");
    scanf("%d,&num1");

    printf("Digite outro número:\n");
    scanf("%d,&num2");

    somar = num1 + num2;
    subtrair = num1 - num2;
    multiplicar = num1 * num2; 
    dividir = num1 / num2;
    resto = num1 % num2;

    printf("A soma entre %d e %d é igual a %d\n", num1,num2,somar);
    printf("A subtração entre %d e %d é igual a %d\n", num1,num2,subtrair);
    printf("A multiplicação entre %d e %d é igual a %d\n",num1,num2,multiplicar);
    printf("A divisão entre %d e %d é igual a %d\n",num1,num2,dividir);
    printf("O resto da divisão entre %d e %d é igual a %d\n",num1,num2,resto);

    return 0;


}

