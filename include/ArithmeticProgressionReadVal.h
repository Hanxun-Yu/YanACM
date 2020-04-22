//
// Created by xunxun on 2020/4/21.
//

#ifndef YANACM_ARITHMETICPROGRESSIONREADVAL_H
#define YANACM_ARITHMETICPROGRESSIONREADVAL_H

/**
 * 1.5 E. 热河路-等差数列读值

Problem
110100100010000100000……
请你找出这个无穷序列中指定位置上的数字。
Input
第一行一个正整数 n (1≤n≤1500000)，表示询问次数。
接下来的 n 行，每行一个正整数 ai (1≤ai≤109)，ai 表示在序列中的位置。
Output
输出 n 行，每行为一个 0 或 1，表示该序列第 ai 位上的数字。

Example
input
4
3
14
7
6

output
0
0
1
0

 */

#include <math.h>

using namespace std;

int arithmeticProgressionReadVal() {
    cout << "<<ArithmeticProgressionReadVal>>" << endl;
    cout << "input problem count :";
    int problemCount;
    cin >> problemCount;

    int *problemArr = new int[problemCount];
    cout << "input the index queried:";
    for (int i = 0; i < problemCount; i++) {
        cin >> problemArr[i];
    }

    for (int i = 0; i < problemCount; i++) {
        int problem = problemArr[i];
        int x = (int) sqrt(2 * (problem - 1));
        if (x * (x + 1) == 2 * (problem - 1)) {
            cout << "1" << endl;
        } else {
            cout << "0" << endl;
        }
    }


    return 0;
}

#endif //YANACM_ARITHMETICPROGRESSIONREADVAL_H
