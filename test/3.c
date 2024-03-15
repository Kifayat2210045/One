#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Input the size of the array
    int a[n];
    int sum = 0;
    int countRemainder1 = 0, countRemainder2 = 0;

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
        if (a[i] % 3 == 1) countRemainder1++;
        else if (a[i] % 3 == 2) countRemainder2++;
    }

    int remainder = sum % 3;
    int moves = 0;

    if (remainder == 1) {
        if (countRemainder1 > 0) {
            moves = 1; // Remove one element with remainder 1
        } else {
            moves = 2; // Remove two elements with remainder 2
        }
    } else if (remainder == 2) {
        if (countRemainder2 > 0) {
            moves = 1; // Remove one element with remainder 2
        } else {
            moves = 2; // Remove two elements with remainder 1
        }
    }
    // If remainder is 0, moves is already 0

    printf("%d\n", moves); // Output the minimum number of moves

    return 0;
}
