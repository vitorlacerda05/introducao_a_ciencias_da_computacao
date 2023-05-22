#include <stdio.h>

int main() {
    float preco, precototal;
    char comida;
    int quantidadeComida, quantidadeCapucino;

    printf("Qual comida?: ");
    scanf("%c", &comida);   

    if (comida == 'B') {
        preco = 5.0;
    } else if (comida == 'S') {
        preco = 4.0;
    }

    printf("Qnt comida: ");
    scanf("%d", &quantidadeComida);

    printf("Qnt capucino: ");
    scanf("%d", &quantidadeCapucino);

    precototal = (preco * quantidadeComida) + (7.5 * quantidadeCapucino);
    printf("%.1f", precototal);

    return 0;
}

