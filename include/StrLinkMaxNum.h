//
// Created by xunxun on 2020/4/21.
//

#ifndef YANACM_STRLINKMAXNUM_H
#define YANACM_STRLINKMAXNUM_H

/**
 * 1.3 C. 和你在一起-拼最大数（字符串比较）

Problem
有这么 n 个数字，联成一排拼到一起便是我爱你的时间，那么我们会在一起多久呢
例如: n=3 时，3 个整数 13，312，343 联接成的最长时间为: 34331213。
又如: n=4 时，4 个整数 7，13，4，246 联接成的最长时间为: 7424613。

Input
n (1≤n≤20)，表示 n 个数。
接下来一行 n 个正整数，大小不超过 104。
Output
拼成的最长时间。

Example
input
3
623 583 413

output
623583413
 */

/**
 * 思路
 * 2个数字字符串, A+B与B+A谁大,拼起来比大小, 取大的拼接方式, 若原来顺序AB,B+A大,则交换位置为BA
 * 类似冒泡法的思路,把大的移到前面,把小的移到后面, 最终得到的拼接方式就是最大数
 *
 */
using namespace std;

int strLinkMaxNum() {
    cout << "<<StrLinkMaxNum>>"<<endl;

    cout << "input number count:";
    int numCount;
    cin >> numCount;
    cout << "input number separate by space:";

    string *countArr = new string[numCount];
    for (int i = 0; i < numCount; i++) {
        cin >> countArr[i];
    }

    //冒泡
    for(int i=0;i<numCount;i++) {
        for(int j=i+1;j<numCount;j++) {
            if(countArr[i] + countArr[j] < countArr[j] + countArr[i]) {
                auto temp = countArr[i];
                countArr[i] = countArr[j];
                countArr[j] = temp;
            }
        }
    }

    for(int i=0;i<numCount;i++) {
        cout<<countArr[i]<<"";
    }



    return 0;

}


//int strLinkMaxNum() {
//    int n;
//    cin>>n;
//    int i,j;
//    string t;
//    string *a = new string[n];
//    for(i=0;i<n;i++){
//        cin>>a[i];
//    }
//
//
//    for(i=0;i<n;i++){
//        for(j=i+1;j<n;j++){
//            if((a[i]+a[j]) < (a[j]+a[i])){
//                t = a[i];
//                a[i] = a[j];
//                a[j] = t;
//            }
//        }
//    }
//
//    for(i=0;i<n;i++){
//        cout<<a[i];
//    }
//
//    delete[] a;
//    return 0;
//
//}
#endif //YANACM_STRLINKMAXNUM_H
