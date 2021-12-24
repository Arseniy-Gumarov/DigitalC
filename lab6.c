#include <stdio.h>
#include <malloc.h>

int main() {
    char arr[5], *m;
    m = arr;
    m[0] = 'H';
    m[1] = 'e';
    m[2] = 'l';
    m[3] = 'l';
    m[4] = 'o';
    printf("%c %c %c %c %c", *m, *(m + 1), *(m + 2), *(m + 3), *(m + 4));
    #Removed unnecessary line

    char *a;
    a = (char *) malloc(9 * sizeof(char));
    for (int i = 0; i < 9; i++) {
        scanf("%c", &a[i]);
    }
    for (int i = 0; i < 9; i++) {
        printf("%c", *a++);
    }
    free(a);
    return 0;
}
