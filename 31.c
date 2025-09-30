Q31: Write a program to take a number as input and print its equivalent binary representation.

input:

#include <stdio.h>
int main() {
    int num, bin = 0, rem, place = 1, temp;
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while (temp > 0) {
        rem = temp % 2;
        bin = bin + rem * place;         
        place = place * 10;              
        temp = temp / 2;
    }

    printf("Binary equivalent of %d is %d\n", num, bin);
    return 0;
}
