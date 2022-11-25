#include <cstdio>

void swap(int *pa, int *pb) {
    int tmp = *pa; // tmp为pa这个指针变量指向内存所存的值
    *pa = *pb;
    *pb = tmp;
}

int main() {
    int a, b;
    scanf("%d%d", &a, &b);

    // int *pa = &a, *pb = &b;
    swap(&a, &b); // 直接传入地址

    printf("%d %d\n", a, b);

    return 0;
}