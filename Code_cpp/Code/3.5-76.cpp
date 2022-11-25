//
// Created by hhm on 22-11-25.
//
//
// Created by hhm on 22-11-25.
//
#include <cstdio>

char num[15];
int cnt = 0;

int main() {
    int n, k;
    scanf("%d%d", &n, &k);

    while (n) {
        int tmp = n % k;
        if (tmp > 9)
            num[cnt ++] = char(n % k - 10 + 'A');
        else num[cnt ++] = char(n % k + '0');
        n /= k;
    }

    for (int i = cnt - 1; i >= 0; i --)
        printf("%c", num[i]);
    printf("\n");

    return 0;
}