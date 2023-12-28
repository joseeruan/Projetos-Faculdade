#include <stdio.h>
#include <stdlib.h>

int main() {
    char *p = (char *)malloc(2 * sizeof(char));
    p[0] = 'a';
    p[1] = 'b';

    p = (char *)realloc(p, 3 * sizeof(char)); 
    p[2] = 'c';

    for (int i = 0; i < 3; i++) {
        printf("%c\n", p[i]);
    }

    return 0;
}
