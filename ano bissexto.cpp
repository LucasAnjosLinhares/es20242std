#include <stdio.h>

int main() {
    int ano;
    char nome[100]; 
    printf("Digite seu nome: ");
    scanf("%99s", nome);
    printf("Digite o ano de seu nascimento: ");
    scanf("%d", &ano);
    if (ano % 4 == 0) {
        if (ano % 100 == 0) {
            if (ano % 400 == 0) {
                printf("Ola %s, seu ano de nascimento e bissexto.\n", nome);
            } else {
                printf("Ola %s, seu ano de nascimento não e bissexto.\n", nome);
            }
        } else {
            printf("Ola %s, seu ano de nascimento e bissexto.\n", nome);
        }
    } else {
        printf("Ola %s, seu ano de nascimento nao e bissexto.\n", nome);
    }

    return 0;
}
