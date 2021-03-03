#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define STRING_MAX 10

void print_extensive(char extensives[][STRING_MAX], int number_string, int capitalize) {
    int number = number_string - '0';

    if (capitalize) {
        extensives[number][0] = toupper(extensives[number][0]);
    }

    printf("%s", extensives[number]);
}

void tens(char number, int capitalize) {
    char extensives[][STRING_MAX] = {
        "dez",
        "vinte",
        "trinta",
        "quarenta",
        "cinquenta",
        "sessenta",
        "setenta",
        "oitenta",
        "noventa"
    };

    print_extensive(extensives, number - 1, capitalize);
}

void char_to_algarism(char number, int capitalize) {
    char extensives[][STRING_MAX] = {
        "zero",
        "um",
        "dois",
        "três",
        "quatro",
        "cinco",
        "seis",
        "sete",
        "oito",
        "nove"
    };

    print_extensive(extensives, number, capitalize);
}

int decimals(char input[100]) {
    int decimals_index;
    for (int i = 0; i < strlen(input); i++) {
        if (input[i]) {
            decimals_index = i;
        }
    }
}

int main() {
    char input[100];
    scanf("%[^\n]s", input);
    decimals(input);

    tens(input[0], 1);
}