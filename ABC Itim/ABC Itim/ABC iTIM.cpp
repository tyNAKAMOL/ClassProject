#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> 

int main() {
    int i, j, x = 0;
    char arr[3];
    scanf("%s",&arr);
    for (i = 0; arr[i] != '\0'; i++) {
        if (arr[i] >= 'a' && arr[i] <= 'z' || arr[i] >= 'A' && arr[i] <= 'Z' && arr[i] != '!')
            x++;
    }
    if (strlen(arr) == 3 && x == 3) {
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 5; j++) {
                if (i == 1 && j == 1)printf("%c", arr[0]);
                else if (i == 1 && j == 2)printf("%c", arr[1]);
                else if (i == 1 && j == 3)printf("%c", arr[2]);
                else printf("*");
            }printf("\n");
        }
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 5; j++) {
                if (j == 2)printf("*");
                else printf(" ");
            }printf("\n");
        }
    }
    else  printf("Error");
    return 0;
}