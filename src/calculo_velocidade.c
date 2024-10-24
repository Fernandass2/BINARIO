#include <stdio.h>

int main (){
    float km_inicial, km_final, tempo_inicial, tempo_final, distancia,tempo, velocidade_media;

    // Solicita ao usuário que insira os dados

    printf("Digite a quilometragem inicial (km): ");
    scanf("%f", &km_inicial);

    printf("Digite a quilometragem final (km): ");
    scanf("%f", &km_final);

    printf("Digite o tempo inicial (em horas): ");
    scanf("%f", &tempo_final);

    printf("Digite a tempo final(em horas): ");
    scanf("%f", &tempo_final);

    //Calcula  a distância e o tempo

    distancia = km_final - km_inicial;
    tempo = tempo_final - tempo_inicial;

    //Calcula a velocidade média

    if (tempo > 0){
        velocidade_media = distancia / tempo;

    //Exibir o resultado

    printf("A velocidade média é: %2.f km/h\n", velocidade_media);

    } else {
        printf("Erro: O Tempo final deve ser maior que o tempo inicial.\n");
    }
    return 0;
}