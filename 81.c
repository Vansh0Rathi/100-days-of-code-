Q81: Count characters in a string without using built-in length functions.

*
Show Sample Test Cases
Input 1:
Hello
Output 1:
5
Input 2:
v
Output 2:
1

input:

#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count characters until null terminator or newline
    while (str[count] != '\0' && str[count] != '\n') {
        count++;
    }

    printf("Number of characters: %d\n", count);
    return 0;
}
