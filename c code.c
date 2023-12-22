#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int a;
    scanf("%d", &a);
    
    int *k = (int*)malloc(a * sizeof(int));
    for (int i = 0; i < a; ++i) {
        scanf("%d", &k[i]);
    }
    
    qsort(k, a, sizeof(int), cmpfunc);
    
    for (int i = 0; i < a; ++i) {
        printf("%d\n", k[i]);
    }

    free(k);
    return 0;
}
