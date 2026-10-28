#include <stdio.h>

char l (char a, int b ) {
    int resultado = (a - 'A')+ b;
    int resto = resultado % 26;
    return 'A' + resto;
}

int main() {
    char letra;
    int shift = 3;
    
    printf("Insira a letra: ");
    scanf(" %c", &letra);
    
    letra = l(letra,shift);
    
    printf("%c\n", letra);
    
    return 0;
}