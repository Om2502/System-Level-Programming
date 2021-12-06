#include <stdio.h>

int main() {
    int n1, n2, n3;
    printf("Enter phone number [(999)999-9999]: ");
    scanf("(%d)%d-%d", &n1, &n2, &n3);
    printf("You entered %d-%d-%d\n", n1, n2, n3);
    return 0;
}
