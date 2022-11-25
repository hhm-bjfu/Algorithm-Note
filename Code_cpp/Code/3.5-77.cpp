//
// Created by hhm on 22-11-25.
//
//
// Created by hhm on 22-11-25.
//
//
// Created by hhm on 22-11-25.
//
#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;


int main() {
    string str;
    int k;
    cin >> str >> k;

    int res = 0, tmp = 1;
    for (int i = str.size() - 1; i >= 0; i --) {
        if (str[i] >= '0' && str[i] <= '9')
            res += (str[i] - '0') * tmp;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            res += (str[i] - 'A' + 10) * tmp;
        tmp *= k;
    }

    cout << res << endl;

    return 0;
}