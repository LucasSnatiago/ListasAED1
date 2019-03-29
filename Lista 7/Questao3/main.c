#include <stdlib.h>
#include <stdio.h>

int main(void){
    int user;
    float votos1 = 0, votos2 = 0, nulos = 0, brancos = 0, porcentagem;

    printf("Contador de votos");

    do{
        printf("\nDigite: ");
        printf("\n0 - Sair do programa");
        printf("\n1 - Chapa 1");
        printf("\n2 - Chapa 2");
        printf("\n3 - Voto em branco");
        printf("\n4 - Voto nulo\n");

        scanf("%d", &user);

        switch (user)
        {
            case 0:
                break;
            case 1:
                votos1 ++;
                break;
            case 2:
                votos2 ++;
                break;
            case 3:
                brancos ++;
                break;
            case 4:
                nulos ++;
                break;
            case 5:
                break;
        
            default:
                printf("\nVoce digitou algo errado!");
                printf("\nTente novamente!\n");
                break;
        }
    }while(user != 0);

    printf("\nOs resultados são: ");
    printf("\nChapa 1 [%.0f votos]", votos1);
    printf("\nChapa 2 [%.0f votos]", votos2);
    printf("\nBranco [%.0f votos]", brancos);
    printf("\nNulos [%.0f votos]\n", nulos);

    if(votos1 > votos2){
        porcentagem = votos1 / (votos1 + votos2 + brancos + nulos);
        porcentagem *= 100;
        printf("\nA chapa 1 é a vencedora!\nCom %.2f%c dos votos", porcentagem, '%');

    }
    else if(votos2 > votos1){
        porcentagem = votos2 / (votos1 + votos2 + brancos + nulos);
        porcentagem *= 100;
        printf("\nA chapa 2 é a vencedora!\nCom %.2f%c dos votos", porcentagem, '%');
    }
    else{
        printf("Empate!");
    }

    printf("\nObrigado por usar esse programa\n");

}

/*
    Foram inscritas duas chapas. 
    Construa um programa que leia os votos de cada aluno do Curso e anuncie a chapa vencedora. 
    Para isto, para cada aluno, deverá ser apresentado um menu com as seguintes funcionalidades:
		0 – Sair do Programa
		1 – Chapa 1
		2 – Chapa 2
		3 – Voto em branco
		4 – Voto nulo
	Ao final, 
        o programa deverá apresentar o número de votos de cada chapa e o número de votos brancos e o de nulos.
        Deverá ainda anunciar qual a chapa vencedora seguida do percentual de votos que ela obteve.
        Caso ocorra empate das chapas, exibir uma mensagem comunicando o fato.
            Caso seja lido um valor fora do domínio da opção do menu, deverá ser exibida uma mensagem de alerta ao usuário e repetir a leitura.

*/