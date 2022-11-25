//
// Created by hhm on 22-11-25.
//
//
// Created by hhm on 22-11-25.
//
#include <cstdio>

int num[20], cnt = 0;

void reverse(int n) {
    while (n) {
        num[cnt ++] = n % 2;
        n /= 2;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    reverse(n);

    for (int i = cnt - 1; i >= 0; i --)
        printf("%d", num[i]);
    printf("\n");

    return 0;
}