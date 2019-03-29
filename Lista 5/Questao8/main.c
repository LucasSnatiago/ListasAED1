#include <stdio.h>
#include <stdlib.h>

int main(){
    int escolha;
    float peso, pesoFinal,
     mercurio = 0.37, venus = 0.88, marte = 0.38, jupiter = 2.64,saturno = 1.15, urano = 1.17;
   

    printf("Calculadora de peso em planetas do sistema solar");
    printf("\nEscreva seu peso (terrestre) em kg: ");
    scanf("%f", &peso);

    printf("\nEscolha um planeta:");
    printf("\n[1] Mercurio");
    printf("\n[2] Venus");
    printf("\n[3] Marte");
    printf("\n[4] Jupiter");
    printf("\n[5] Saturno");
    printf("\n[6] Urano\n");
    scanf("%i", &escolha);

    switch (escolha)
    {
        case 1:
            pesoFinal = peso * mercurio;
            printf("O seu peso em mercurio seria %.2f!", pesoFinal);
            break;
        case 2:
            pesoFinal = peso * venus;
            printf("O seu peso em venus seria %.2f!", pesoFinal);
            break;
        case 3:
            pesoFinal = peso * marte;
            printf("O seu peso em marte seria %.2f!", pesoFinal);
            break;
        case 4:
            pesoFinal = peso * jupiter;
            printf("O seu peso em jupiter seria %.2f!", pesoFinal);
            break;
        case 5:
            pesoFinal = peso * saturno;
            printf("O seu peso em saturno seria %.2f!", pesoFinal);
            break;
        case 6:
            pesoFinal = peso * urano;
            printf("O seu peso em urano seria %.2f!", pesoFinal);
            break;
        
        default:
            printf("Voce digitou alguma coisa incorretamente!");
            break;
    }
    printf("\n");
}
