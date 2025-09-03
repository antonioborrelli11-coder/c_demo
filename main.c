#include <stdio.h>
#include <stdlib.h>

// Function to calculate the factorial of a non-negative integer
long long factorial(int n) {
    if (n < 0) {
        // Factorial is not defined for negative numbers.
        return -1; 
    }
    if (n == 0) {
        // Base case for the recursion.
        return 1;
    }
    // Recursive call to find the factorial.
    return (long long)n * factorial(n - 1);
}

int main(int argc, char *argv[]) {
    // Check if a number was passed as a command-line argument.
    if (argc < 2) {
        printf("Errore: devi passare un numero come argomento.\n");
        printf("Esempio di utilizzo: ./main 5\n");
        return 1;
    }

    // Convert the first argument to an integer.
    int number = atoi(argv[1]);
    
    // Calculate the factorial using the function.
    long long result = factorial(number);

    if (result == -1) {
        printf("Errore: il fattoriale non e' definito per numeri negativi.\n");
    } else {
        printf("Il fattoriale di %d e' %lld.\n", number, result);
    }

    return 0;
}
