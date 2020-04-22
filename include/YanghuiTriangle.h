//
// Created by xunxun on 2020/4/20.
//

#ifndef YANACM_YANGHUITRIANGLE_H
#define YANACM_YANGHUITRIANGLE_H

/**
 * 1.2 B. 梵高先生-杨辉三角-签到题

Problem
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
…
现在给你一个正整数 n，请你给出形式的前 n 行。

Input
输入文件共一行，包含一个正整数 n (1≤n≤20)。
Output
输出文件共 n 行，即星空的前 n 行。每行包含若干正整数，这些正整数之间用一个空格隔开（不能有多余的空格），最后一个正整数后面没有空格。

Example
input
4

output
1
1 1
1 2 1
1 3 3 1

 */
using namespace std;

/**
 * 思路
 * 若N阶杨辉三角
 * 1.建立二维数组 arr2d[N][X] (X大小根据所在行N来定)
 * 2.二重循环来填充数组,同时打印出值(填充数组是为了让下一行来读取并相加)
 * 3.外侧循环,新建一维数组arr[i+1],除第一行以外,头尾都要打1,第一行只需要打一次,而且放在尾部来打(题目要求尾部不允许空格)
 * 4.内侧循环,j=1 j<i(这样内侧只会从第三行开始),取上一行的前一个[i-1][j-1] + [i-1][j]
 * @return
 */
int yanghuiTiangle() {
    cout << "<<YangHuiTriangle>>"<<endl;

    int N;
    cout << "input the N of YanghuiTriangle:";
    cin >> N;

    int **arr2d = new int *[N];
    for (int i = 0; i < N; i++) {
        int *arr = new int[i + 1];
        if (i > 0) {
            cout << "1" << " ";
            arr[0] = 1;
        }
        for (int j = 1; j < i; j++) {
            int targetNum = arr2d[i - 1][j - 1] + arr2d[i - 1][j];
            cout << targetNum << " ";
            arr[j] = targetNum;
        }

        cout << "1" << endl;
        arr[i] = 1;

        arr2d[i] = arr;
    }


    return 0;
}

#endif //YANACM_YANGHUITRIANGLE_H
