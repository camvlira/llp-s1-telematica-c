#include <stdio.h>
#include <math.h>

int main() {
    int numero;

printf("Digite um número inteiro: ");
scanf("%i", &numero);

if(numero < 0) {
    printf("Número inválido. \n");
} else{
    double logaritmo = log10(numero);
    printf("O logaritmo do numero digitado é %.2f\n", numero, logaritmo);
}
    return 0;
}