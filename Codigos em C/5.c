#include <stdio.h>
#include <string.h>

int main() {

    char string[500];
    
    scanf("%s", string);

    for (int i = strlen(string)-1; i >= 0; i--) {
        printf("%c", string[i]);
    }
    printf("\n");

    return 0;
}