#include <stdio.h>

int main (){
    float salario_bruto, desconto_vale_transporte, desconto_inss, desconto_fgts;
    float total_desconto, salario_liquido;

    // Solicita ao usuário que insira o salário bruto

    printf("Digite o salário bruto do funcionário: ");
    scanf("%f", &salario_bruto);

    //Calcula os desconto 

    desconto_vale_transporte = salario_bruto * 0.06;  //6%
    desconto_inss = salario_bruto * 0.07;             //7%  
    desconto_fgts = salario_bruto * 0.08;             //8%

    //Calcula o total de descontos e o salário líquido 

    total_desconto = desconto_vale_transporte + desconto_inss + desconto_fgts;
    salario_liquido = salario_bruto - total_desconto;

    //Exibir os resultados 

    printf("Total de desconto: %.2f\n", total_desconto);
    printf("SAlário líquido: %.2f\n", salario_liquido);

    return 0;
}