#include <stdio.h>

int main (){
    float nota1, nota2, nota3,nota4, media;

    //Solicita ao usuário que insita as quatro notas

    printf("Digita a primeira nota:");
    scanf("%f", &nota1);

    printf("Digita a segunda nota:");
    scanf("%f", &nota2);

    printf("Digita a terceira nota:");
    scanf("%f", &nota3);

    printf("Digita a quarta nota:");
    scanf("%f", &nota4);


    // Calcula a média
    media= (nota1 + nota2 + nota3 + nota4) / 4;

    //Exibir o valor da média

    printf("A média das notas é: %.2f\n", media);
    return 0;
}