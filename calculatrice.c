#include <stdio.h>

int main() {
    char op;
    double num1, num2;

    printf("Entrez une opération (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Entrez deux nombres: ");
    scanf("%lf %lf", &num1, &num2);

    switch(op) {
        case '+':
            printf("Résultat: %.2lf\n", num1 + num2);
            break;
        case '-':
            printf("Résultat: %.2lf\n", num1 - num2);
            break;
        case '*':
            printf("Résultat: %.2lf\n", num1 * num2);
            break;
        case '/':
            if(num2 != 0)
                printf("Résultat: %.2lf\n", num1 / num2);
            else
                printf("Erreur : division par zéro !\n");
            break;
        default:
            printf("Opérateur non valide !\n");
    }

    return 0;
}// Projet Calculatrice en C
