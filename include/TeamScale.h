//
// Created by xunxun on 2020/4/22.
//

#ifndef YANACM_TEAMSCALE_H
#define YANACM_TEAMSCALE_H

/**
 * Problem D

有一个研究团队，团队分成许多研究小组，每个小组的一部分成员可能再分成小组。小组的成员只知道自己的组长是谁，而在同一个组长领导下的成员之间却相互不认识。现在这个团队希望有一个程序能统计一下各组长带领小组的规模，即对每一个成员想知道自己及自己带领下的小组有多少人。
输入：
2行，第1行有1个数字N(0<N<2×105)
，代表小组的人数
第2行有N个数a1,a2,...,ai,...,aN
，表示第i个人的领导是ai
。团队的领导用0表示，说明没有人做他的组长。数据保证没有环路。单独的一个成员视为1个人的小组。
输出：
1行，N个数字，表示第i名成员的团队的规模
Sample Input:

0 1 2 1 2 2

Sample Output:

6 4 1 1 1 1

 * @return
 */

/**
 * 思路
 * 使用递归思想,递归下去
 * @return
 */

int calScale(int leaderIndex, int *leaderArr, int teamPeopleCount);

int teamScale() {
    cout << "<<TeamScale>>" << endl;
    cout << "input team number of people:";
    int teamPeopleCount;
    cin >> teamPeopleCount;
    int *leaderArr = new int[teamPeopleCount];

    cout << "input team leader:";
    for (int i = 0; i < teamPeopleCount; i++) {
        cin >> leaderArr[i];
    }

    for (int i = 0; i < teamPeopleCount; i++) {
        int peopleIndex = i + 1;
        cout << calScale(peopleIndex, leaderArr, teamPeopleCount) << " ";
    }


    return 0;
}

/**
 *
 * @param leaderIndex   >= 1
 * @param leaderArr
 * @param teamPeopleCount
 * @return
 */
int calScale(int leaderIndex, int *leaderArr, int teamPeopleCount) {

    int ret = 1;//没有组员, 那规模就是1人组
    for (int i = 0; i < teamPeopleCount; i++) {
        int tmpLeaderIndex = leaderArr[i];
        if (tmpLeaderIndex == leaderIndex) {
            //若这个人的组长是他
            //累加上这个人的小组规模,因为可能有二级小组
            int peopleIndex = i + 1;
            ret += calScale(peopleIndex, leaderArr, teamPeopleCount);
        }
    }
    return ret;
}


#endif //YANACM_TEAMSCALE_H
