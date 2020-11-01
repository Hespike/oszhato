#include <stdio.h>

int oszthato(int mit, int mivel) {
    return (mit % mivel == 0);
}

int main() {
    int m, n;
    printf("Kérek egy egész számot:");
    scanf("%d", &m);
    printf("Kérek egy másik egész számot:");
    scanf("%d", &n);
    if (n != 0) {
        if (oszthato(m, n)) {
            printf("%d osztója %d-nek.\n", n, m);
        } else {
            printf("%d nem osztója %d-nek.\n", n, m);
        }
    } else {
        printf("Nullával nem osztunk!\n");
    }
    return 0;
}