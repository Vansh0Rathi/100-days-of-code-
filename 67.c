Q67: Insert an element in an array at a given position.

input:

#include <stdio.h>
int main() {
    int arr[100], n, i, num, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to insert: ");
    scanf("%d", &num);

    printf("Enter position (0 to %d): ", n);
    scanf("%d", &pos);

    for(i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos] = num;
    n++;
    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
