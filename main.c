#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]){
    setlocale(LC_ALL, "Portuguese");
    int x, y;

    printf("Digite o valor inteiro de X para saber o(s) ponto(s) ganho(s) = ");
    scanf("%d",&x);
    printf("Digite o valor de Y: ");
    scanf("%d",&y);

    if ((x > 10 || x < -10) || (y > 10 || y < -10)) {
        printf("Voce errou o alvo!!!");
    } else if ((x >= -1 && x <= 1) && (y >= -1 && y <= 1)) {
        printf("Voce acertou no alvo de 10 pontos");
    } else if ((x >= -5 && x <= 5) && (y >= -5 && y <= 5)) {
        printf("Voce acertou no alvo de 05 pontos");
    } else if ((x >= -10 && x <= 10) && (y >= -10 && y <= 10)) {
        printf("Voce acertou no alvo de 01 ponto");
    }

    return 0;
}
