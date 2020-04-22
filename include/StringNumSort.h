//
// Created by xunxun on 2020/4/22.
//

#ifndef YANACM_STRINGNUMSORT_H
#define YANACM_STRINGNUMSORT_H
/**
 * Problem C

给出一个含有N (0 < N < 200000)个数字的数列，请你对它排序，每个数的范围均处于[−1050,1050]
。负数前有负号‘-’，正数前没有+号，每个数字不含前导0，零用一个0表示。
输入：
2行，第1行有1个数字N，表示数列中数据的个数
第2行有N个数字，表示待排序的数列，数字间用空格分隔，题目保证每个数字在[−1050,1050]
范围内。
输出：
1行，将N个数字从小到大排序后的结果，数字间用空格分隔。

Sample Input :
    5
    991 -31 -1 5 -10000000000000000000000000000000000000000000000000

Sample Output:
    -10000000000000000000000000000000000000000000000000 -31 -1 5 991

 */
using namespace  std;
int stringNumSort() {
    cout << "<<StringNumSort>>" << endl;

    int length, *numArr;
//    string *strNumArr;
    cout << "input array length:";
    cin >> length;

    numArr = new int[length];
//    strNumArr = new string[length];
    for (int i = 0; i < length; i++) {
        string tmp;
        cin >> tmp;
        numArr[i] = stoi(tmp);
    }

    sort(numArr, numArr+length);
    for (int i = 0; i < length; i++) {
        cout << numArr[i] << " ";
    }



    return 0;
}

#endif //YANACM_STRINGNUMSORT_H
