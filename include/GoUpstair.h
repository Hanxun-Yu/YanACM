//
// Created by xunxun on 2020/4/21.
//

#ifndef YANACM_GOUPSTAIR_H
#define YANACM_GOUPSTAIR_H

/**
 * 1.4 D. 定西-走台阶-动态规划

Problem
一个人走年久失修的楼梯，楼梯有 k 个台阶坏了，没法走。
楼梯一共有 n 层，你一次能上一阶、两阶或三阶台阶，请问，你从楼梯底部 (0 开始) 走到楼梯顶部，共有多少种走法。

Input
输入数据共两行，第一行包含两个自然数 n (1≤n≤100) 和 k (0≤k<n)，第二行包含 k 个自然数 Xi (1≤Xi≤n)，数字之间用一个空格隔开，表示损坏的台阶的序号（从楼梯底部到楼梯顶部，台阶序号依次为 1 到 n）。
Output
输出数据仅包含一个整数，表示所有可行走法的总数。

Example
input
5 2
2 4

output
2

 */
using namespace std;

int up(int curStairIndex, int totalStairCount, int *badStairArr, int badStairCount);

/**
 * 思路
 * 每次决策都会衍生出3条新的路,有点像决策树
 * 使用递归先从决策树顶端发散出去, 然后每个节点收集递归的结果,再加和加回来,就是所有的可能
 * @return
 */
int goUpstair() {
    cout << "<<GoUpstair>>"<<endl;

    int n, k;
    cout << "input the total numbers of steps (n) and bad stair count (k):";
    cin >> n >> k;

    int *badStairArr = new int[k];
    cout << "input the bad stair index:";
    for (int i = 0; i < k; i++) {
        cin >> badStairArr[i];
    }

    cout << up(0, n, badStairArr, k) << endl;
//    up(0, n, badStairArr, k);
    return 0;

}

int up(int curStairIndex, int totalStairCount, int *badStairArr, int badStairCount) {
    if (curStairIndex == totalStairCount)
        return 1;
    else if(curStairIndex > totalStairCount)
        return 0;


    for (int i = 0; i < badStairCount; i++) {
        if (curStairIndex == badStairArr[i])
            return 0;
    }

    int ret = up(curStairIndex + 1, totalStairCount, badStairArr, badStairCount) +
              up(curStairIndex + 2, totalStairCount, badStairArr, badStairCount) +
              up(curStairIndex + 3, totalStairCount, badStairArr, badStairCount);
//    cout << "ret:" << ret << endl;
    return ret;
}

#endif //YANACM_GOUPSTAIR_H
