#include <stdio.h>;
#include <string.h>;

int main()

{

    int idade;
    char nome [40];

    printf("Digite o valor da idade: ");
    scanf("%d", &idade);
    getchar();
    printf("Digite o nome da pessoa: ");
    fgets(nome, 40, stdin);

    printf("Idade : %d\n", idade);
    printf("Nome : %s", nome);

    return 0;
}