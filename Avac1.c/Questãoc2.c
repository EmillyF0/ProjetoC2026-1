// Implemente aqui:
    // 1. Ler as 10 vendas e armazenar no vetor vendas
    // 2. Ler se cada venda foi especial
    // 3. Usar if com OR para classificar
    // 4. Somar o total vendido
    // 5. Contar vendas com destaque e comuns

#include <stdio.h>

int main() {
    float vendas[10];
    int vendaEspecial;
    int i;

    float totalVendido = 0;
    int destaque = 0;
    int comum = 0;
    
    for (i=1;i<=10;i++) {
        printf ("Digite o valor da %d° venda:\n", i);
        scanf ("%f", &vendas[i]);
        printf ("Venda especial? (1-Sim/0-Não) \n");
        scanf ("%d", &vendaEspecial);
        
        if (vendas[i] >= 100 || vendaEspecial == 1) {
            printf ("Venda com destaque!\n");
            destaque++;
        }
        else {
            printf ("Venda comum!\n");
            comum++;
        }
        
        totalVendido += vendas[i];
    }
     printf ("Total das vendas: %2.f\n", totalVendido);
     printf ("Vendas com destaque: %d\n", destaque);
     printf ("Vendas comuns: %d\n", comum);
    

    return 0;
}