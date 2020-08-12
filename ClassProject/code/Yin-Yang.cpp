#include <stdio.h>

int main() {
    int n, i, j, k, l;
    printf("Enter Input : ");
    scanf_s("%d", &n);

    i = 1;
    while (i <= n + 1) {
        j = i;
        while (j <= n + 1) {
            printf(".");
            j++;
        }
        k = 1;
        while (k <= i) {
            printf("#");
            k++;
        }
        l = 1;
        while (l <= n + 2) {
            if ((i == 1 || i == n + 2) || (l == 1 || l == n + 2))printf("+");
            else printf("#");
            l++;
        }
        i++;
        printf("\n");
    }
    i = 1;
    while (i <= 2 * n + 4) {
        if (i <= n + 2)printf("#");
        else printf("+");
        i++;
    }printf("\n");
    i = 1;
    while (i <= 2 * n + 4) {
        if (i <= n + 2)printf("#");
        else printf("+");
        i++;
    }printf("\n");
    i = n + 1;
    while (i >= 1) {
        j = 1;
        while (j <= n + 2) {
            if ((i == 1 || i == n + 2) || (j == 1 || j == n + 2))printf("#");
            else printf("+");
            j++;
        }
        k = 1;
        while (k <= i) {
            printf("+");
            k++;
        }
        l = i;
        while (l <= n + 1) {
            printf(".");
            l++;
        }
        i--;
        printf("\n");
    }
    return 0;
}