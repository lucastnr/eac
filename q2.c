#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Scan do número
void get_number(char number[100]) {
    printf("[-] Digite um número: ");
    scanf("%[^\n]s", number);
}

// Faz a verificação do número
void number_type(double number) {
    int number_int = (int)number;

    printf("[-] Esse é um número ");

    if (number == number_int) {
        if (number >= 0) 
            printf("natural\n");
        else
            printf("inteiro\n");
    }

    else printf("real\n");
}

// Verifica se algum caractére da string não é um número
int not_number (char name[100]) {
    for (int i = 0; i < strlen(name); i++) {
        char letter = name[i];
        if ((letter < '0' || letter > '9') && letter != '-' && letter != '.') {
            printf("[!] Número inválido.\n");
            if (letter == ',') {
                printf("[!] Utilize ponto no lugar de vírgula para marcar casa decimal.\n");
            }

            // Retorna verdade se for inválido
            return 1;
        }
    }

    // Retorna falso se for válido
    return 0;
}


int main() {
    char number[100];

    get_number(number);

    if (not_number(number)) {
        return 1;
    }

    double number_double = strtod(number, NULL);

    number_type(number_double);

    return 0;
}