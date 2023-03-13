#include <stdio.h>

int fibonacci(int num) {
    if (num <= 0) 
        return -1;
    else if (num == 1 || num == 2) 
        return 1;
    else {
        int a = 1, b = 1, c;
        for (int i = 2; i < num; i++) {
            c = a + b;
            a = b;
            b = c;
            if (c == num) 
                return 1;
        }
        return 0;
    }
}

int main() {
    // Informe o número que deseja verificar se pertence à sequência de Fibonacci aqui:
    int num = 4;
    int resultado = fibonacci(num);
    if (resultado == 1) 
        printf("O numero %d pertence a sequencia de Fibonacci.\n", num);
    else if (resultado == -1) 
        printf("O numero informado nao pertence a sequencia de Fibonacci.\n");
    else 
        printf("O numero informado nao pertence a sequencia de Fibonacci.\n");
    
    return 0;
}
