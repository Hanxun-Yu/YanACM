//
// Created by xunxun on 2020/4/20.
//

#ifndef YANACM_SPANISHPIE_H
#define YANACM_SPANISHPIE_H

/**
 * 1.1 A.西班牙馅饼-每行最大数之和-签到题

Problem
把馅饼抽象成一个 N 行 M 列的正整数矩阵。每个格子有一个“美味值”，由于一些不可告人的原因我们对于这个馅饼没行只能吃一口
 港岛妹妹说如果她吃到美味值为 k 的馅饼，就会给我做出美味值为 k 的红烧肉。问红烧肉最多能有多好吃。

Input
    N，M：表示 N 行 M 列，馅饼的尺寸大小。
    以下 N 行 M 列为馅饼每个格子的美味值。
    输入中所有数是不超过 100 的正整数。
Output
    一个正整数，表示红烧肉最多能有多好吃。

Example
input
    3 2
    8 15
    11 4
    2 43

output
    69

 */
using namespace std;

/**
 * 思路
 * 遍历数组,找出每行最大数
 * sum = 每行最大数相加
 * 打印sum
 * @return
 */
int spanishPie() {
    cout << "<<SpanishPie>>"<<endl;

    int N, M;
    cout<<"input the row and col of a double dimensional array:"<<endl;
    cin >> N >> M;
    int **pie = new int *[N]();
    for (int i = 0; i < N; i++) {
        pie[i] = new int[M];
    }

    cout<<"input all the elements of the double dimensional array:"<<endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> pie[i][j];
        }
    }

    int sumMax = 0;
    for (int i = 0; i < N; i++) {
        int rowMax = 0;
        for (int j = 0; j < M; j++) {
            if (pie[i][j] >= rowMax) {
                rowMax = pie[i][j];
            }
        }
        sumMax += rowMax;
    }

    cout << sumMax << endl;

    for (int i = 0; i < N; i++) {
        delete[] pie[i];
    }

    delete[] pie;
    return 0;
}






//int spanishPie(){
//    int N,M;
//    cin>>N>>M;
//    int i,j;
//    int **pie = new int*[N];
//    for(i=0;i<N;i++){
//        pie[i] = new int[M];
//    }
//    for(i=0;i<N;i++){
//        for(j=0;j<M;j++){
//            cin>>pie[i][j];
//        }
//    }
//
//    int sum = 0;
//    for(i=0;i<N;i++){
//        for(j=1;j<M;j++){
//            if(pie[i][0] < pie[i][j])
//                pie[i][0] = pie[i][j];
//        }
//        sum = sum+pie[i][0];
//    }
//
//    cout<<sum<<endl;
//
//    for(i=0;i<N;i++){
//        delete[] pie[i];
//    }
//    delete[] pie;
//    return 0;
//
//}


#endif //YANACM_SPANISHPIE_H
