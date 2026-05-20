// Implemente aqui:
    // 1. Ler as 7 temperaturas e armazenar no vetor temperaturas
    // 2. Usar if com AND para verificar a faixa segura
    // 3. Contar temperaturas seguras e fora da faixa
    // 4. Calcular a média
    

#include <stdio.h>

int main() {
    float temperaturas[7];
    int i;

    int seguras = 0;
    int foraFaixa = 0;

    float soma = 0;
    float media;
    
    for (i=1;i<=7;i++) {
        printf ("Digite a %d° temperatura: ", i);
        scanf ("%f", &temperaturas[i]);
        
        if (temperaturas[i] >= 20 && temperaturas[i] <= 30) {
            printf ("Temperatura segura!\n");
            seguras++;
        }
        else {
            printf ("Temperatura fora da faixa!\n");
            foraFaixa++;
        }
        
        soma += temperaturas[i];
        
    }
    media = soma / 7;
    
    printf ("Temperaturas seguras: %d\n", seguras);
    printf ("Temperaturas fora da faixa: %d\n", foraFaixa);
    printf ("Média das temperaturas: %2.f\n", media);

    return 0;
}