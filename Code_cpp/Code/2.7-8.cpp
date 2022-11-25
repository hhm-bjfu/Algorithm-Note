#include <cstdio>

void increase(int &x) {
    x ++;
}

int main() {
    int x;
    scanf("%d", &x);

    increase(x);

    printf("%d\n", x);

    return 0;
}