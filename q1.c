#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Scan do nome
void get_name (char name[100]) {
    printf("[-] Digite seu nome: ");
    scanf(" %[^\n]s", name);
}

// Verifica se a primeira letra é minúscula
int not_valid_letter (char letter) {
    int invalid_letter = letter < 'A' || letter > 'Z' || letter == ' ';

    if (invalid_letter)
        printf("[!] Nome precisa começar com letra maiúscula\n");

    return invalid_letter;
}

// Verifica se algum caractére da string não é uma letra
int not_alpha (char name[100]) {
    for (int i = 0; i < strlen(name); i++) {
        char letter = name[i];
        if (!isalpha(letter) && letter != ' ' && letter != '\n') {
            // Retorna verdade se for inválido
            printf("[!] Apenas letras e espaços são permitidos\n");
            return 1;
        }
    }

    // Retorna falso se for válido
    return 0;
}

int main() {
    char name[100];

    get_name(name);

    // Continua pedindo o número, até que ele seja válido
    while (not_alpha(name) || not_valid_letter(name[0])) {
        get_name(name);
    }

    printf("\n[-] %s\n", name);

    return 0;
}