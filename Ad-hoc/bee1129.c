#include <stdio.h>

int main() {
    int arr[5], count, markedIndex;
    char ans[5] = {'A', 'B', 'C', 'D', 'E'};
    int test;

    while (1) {
        scanf("%d", &test);

        if (test == 0) {
            break;
        }

        for (int k = 0; k < test; k++) {
            count = 0;

            for (int i = 0; i < 5; i++) {
                scanf("%d", &arr[i]);
                if (arr[i] <= 127) {
                    count++;
                    markedIndex = i;  
                }
            }

            if (count == 1) {
                printf("%c\n", ans[markedIndex]);
            } else {
                printf("*\n");
            }
        }
    }

    return 0;
}
