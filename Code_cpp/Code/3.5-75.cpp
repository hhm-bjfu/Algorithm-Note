//
// Created by hhm on 22-11-25.
//
//
// Created by hhm on 22-11-25.
//
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    int res = 0;
    int tmp = 1;
    for (int i = str.size() - 1; i >= 0; i --) {
        res += (str[i] - '0') * tmp;
        tmp *= 2;
    }

    cout << res << endl;

    return 0;
}