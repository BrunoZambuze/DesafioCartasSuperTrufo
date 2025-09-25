#include <stdio.h>

int main() {
    // Cartas fixas
    char pais1[] = "Brasil";
    char pais2[] = "Argentina";

    int populacao1 = 214000000, populacao2 = 45000000;
    int area1 = 8516000, area2 = 2780000;
    int pib1 = 1800000, pib2 = 500000;
    int pib_per_capita1 = 8400, pib_per_capita2 = 11000;
    float dens1 = 25.1, dens2 = 16.2;

    int escolha1, escolha2;

    // Primeiro atributo
    printf("Escolha o primeiro atributo:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - PIB per capita\n5 - Densidade\n");
    scanf("%d", &escolha1);

    // Segundo atributo
    printf("Escolha o segundo atributo (diferente do primeiro):\n");
    if (escolha1 != 1) printf("1 - População\n");
    if (escolha1 != 2) printf("2 - Área\n");
    if (escolha1 != 3) printf("3 - PIB\n");
    if (escolha1 != 4) printf("4 - PIB per capita\n");
    if (escolha1 != 5) printf("5 - Densidade\n");
    scanf("%d", &escolha2);

    // Pegar valores dos atributos escolhidos
    float v1c1=0, v1c2=0, v2c1=0, v2c2=0;

    if (escolha1 == 1) { v1c1 = populacao1; v1c2 = populacao2; }
    if (escolha1 == 2) { v1c1 = area1; v1c2 = area2; }
    if (escolha1 == 3) { v1c1 = pib1; v1c2 = pib2; }
    if (escolha1 == 4) { v1c1 = pib_per_capita1; v1c2 = pib_per_capita2; }
    if (escolha1 == 5) { v1c1 = dens1; v1c2 = dens2; }

    if (escolha2 == 1) { v2c1 = populacao1; v2c2 = populacao2; }
    if (escolha2 == 2) { v2c1 = area1; v2c2 = area2; }
    if (escolha2 == 3) { v2c1 = pib1; v2c2 = pib2; }
    if (escolha2 == 4) { v2c1 = pib_per_capita1; v2c2 = pib_per_capita2; }
    if (escolha2 == 5) { v2c1 = dens1; v2c2 = dens2; }

    // Somar valores
    float soma1 = v1c1 + v2c1;
    float soma2 = v1c2 + v2c2;

    // Resultado
    printf("\n%s -> Soma: %.2f\n", pais1, soma1);
    printf("%s -> Soma: %.2f\n", pais2, soma2);

    if (soma1 > soma2) printf("Vencedor: %s\n", pais1);
    else if (soma2 > soma1) printf("Vencedor: %s\n", pais2);
    else printf("Empate!\n");

    return 0;
}
