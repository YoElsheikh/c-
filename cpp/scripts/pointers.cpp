#include <stdio.h>
#include <stdlib.h>

void update(int* a, int* b) {
    int result_abs;
    result_abs = abs(*a - *b); // we need this intermidiate value because otherwise the pointer of b will be used
    *a = *a + *b;               // in the following calculation in its updated format
    *b = result_abs;
}

int main() {
    int a, b;
    int* pa = &a, * pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}