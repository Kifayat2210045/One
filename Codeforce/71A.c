#include <stdio.h>
#include <string.h>

int main() {
    int test;
    scanf("%d",&test);

    for (int i = 0; i < test; i++) {
        char word[101];
        scanf("%s",word);
        int len = strlen(word); 
        if (len <= 10)
        {
            printf("%s\n", word); 
        }
        else
        {
            printf("%c%d%c\n", word[0], len - 2, word[len - 1]);
        }
    }
    return 0;
}
