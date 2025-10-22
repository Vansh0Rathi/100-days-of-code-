Q84: Convert a lowercase string to uppercase without using built-in functions.

/*
Show Sample Test Cases
Input 1:
hello
Output 1:
HELLO
*/

input:

#include <stdio.h>

void to_uppercase(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');
        }
        i++;
    }
}

int main() {
    char str[100];
    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);

    to_uppercase(str);

    printf("Uppercase string: %s", str);
    return 0;
}
