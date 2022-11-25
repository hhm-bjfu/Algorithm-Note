//
// Created by hhm on 22-11-25.
//
#include <cstdio>

struct Point {
    int x, y;
    Point() {};
    Point(int _x, int _y) {
        x = _x;
        y = _y;
    }
};

int main() {
    int x, y;
    scanf("%d%d", &x, &y);

    Point point;
    point = Point(x, y);

    printf("%d %d\n", point.x, point.y);


    return 0;
}