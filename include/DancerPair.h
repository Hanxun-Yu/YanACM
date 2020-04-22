//
// Created by xunxun on 2020/4/22.
//

#ifndef YANACM_DANCERPAIR_H
#define YANACM_DANCERPAIR_H

/**
 * 1.6 F. 庙会-跳舞配对-循环输出
Problem
假设在周末舞会上，男士们和女士们进入舞厅时，各自排成一队。跳舞开始时，依次从男队和女队的队头上各出一人配成舞伴。规定每个舞曲能有一对跳舞者。若两队初始人数不相同，则较长的那一队中未配对者等待下一轮舞曲。现要求写一个程序，模拟上述舞伴配对问题。

Input
三个整数 m, n, k (1≤m,n≤150,1≤k≤4000)，分别表示男士人数、女士人数、几轮舞曲。
Output
输出各轮舞曲的配对方案。

Example
input
2 4 6

output
1 1
2 2
1 3
2 4
1 1
2 2

 */
 /**
  * 思路
  * 谁先数完就从头数, 运用余数的机制
  * @return
  */
int dancerPair() {
    cout << "<<DancerPair>>" << endl;
    cout << "input ManCount WomanCount DanceCount:";

    int manCount, womanCount, danceCount;
    cin >> manCount >> womanCount >> danceCount;
    for (int i = 0; i < danceCount; i++) {
        cout << (i % manCount) + 1 << " " << (i % womanCount) + 1 << endl;
    }

    return 0;
}

#endif //YANACM_DANCERPAIR_H
