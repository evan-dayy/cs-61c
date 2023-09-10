#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include <string.h>


int x2 (int n) { return 2*n; }
int x10(int n) { return 10*n; }
void mutate_map(int A[], int n, int(*fp)(int)) {
    for (int i = 0; i < n; i++)
        A[i] = (*fp)(A[i]);
}
void print_array(int A[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ",A[i]);
    printf("\n");
}

int main(void) {
    int A[] = {3,1,4};
    int *p = A;
    printf("A: %p, &A: %p\n", A, &A);
    printf("p: %p, &p: %p\n", p, &p);
    printf("%d\n", *A);
    printf("%d\n", p[2]);
    printf("%d", 'a' - 'a');

}

