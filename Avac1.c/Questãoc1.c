// Implemente aqui:
    // 1. Ler as 8 notas e armazenar no vetor notas
    // 2. Ler a frequência de cada participante
    // 3. Usar if com AND para classificar
    // 4. Contar aprovados e reprovados
    // 5. Descobrir a maior nota
    
#include <stdio.h>

int main() {
    float notas[8];
    float frequencia;
    int i;

    int aprovados = 0;
    int reprovados = 0;

    float maiorNota = 0;
    
    for (i=1; i<=8; i++) {
        printf ("Digite sua %d° nota:\n", i);
        scanf ("%f", &notas[i]);
        printf ("Digite sua frequência nota:\n");
        scanf ("%f", &frequencia);
        
        if (notas[i] >= 7 && frequencia >= 75) {
            aprovados++;
            printf("Aprovado!\n");
        }
        else {
            reprovados++;
            printf("Reprovado!\n");
        }
        
    }
    maiorNota = notas[1];
    for (i=1;i<=8;i++) {
        if (notas[i] > maiorNota) {
            maiorNota = notas[i];
        }
    }
    
    printf ("Aprovados: %d\n", aprovados);
    printf ("Reprovados: %d\n", reprovados);
    printf ("Maior nota: %2.f\n", maiorNota);

    return 0;
}