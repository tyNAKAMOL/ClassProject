#include <stdio.h>

int main() {
    double arr[11], sum1 = 0, max = -1000000000.00, min = 1000000000.00;
    int k,j;
    printf("Enter Numbers : ");

    for (k = 0; k < 10; k++) {
        scanf_s("%lf", &arr[k]);
        sum1 += arr[k];
        if (arr[k] > max)max = arr[k];
        if (arr[k] < min)min = arr[k];
    }
        k = 0;
        while (k < 10) {
            printf("%.0lf ", arr[k]);
            k++;
        }
    printf("\nMAX: %.2lf\n", max);
    printf("MIN: %.2lf\n", min);
    printf("SUM: %.2lf\n", sum1);
    printf("AVG: %.2lf\n", sum1 / 10);
    return 0;
}