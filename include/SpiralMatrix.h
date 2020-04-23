//
// Created by xunxun on 2020/4/23.
//

#ifndef YANACM_SPIRALMATRIX_H
#define YANACM_SPIRALMATRIX_H

/**
 *Problem E

所谓“螺旋矩阵”，是指从左上角第1个格子开始，按顺时针螺旋方向从外圈向内逐个填充。给出一个数字N，将1至N^2填入一个N行N列的螺旋矩阵。
例如当N=4时，螺旋矩阵为

   1   2   3   4
  12  13  14   5
  11  16  15   6
  10   9   8   7

当N=5时，螺旋矩阵为

   1   2   3   4   5
  16  17  18  19   6
  15  24  25  20   7
  14  23  22  21   8
  13  12  11  10   9

我现在想知道每一行的蛇形矩阵的和，希望你能通过编写程序求解。

输入：
1行，1个数字N (1<N<2×105)

输出：
N行，第i行表示蛇矩阵第i行的总和。

 *
 */
int getSpiralMatrixAij(int n, int i, int j);

/**
 * 思路
 * 我们只有每一行元素的下标
 * 1.确定该元素所在层(第几圈)
 * 2.确定该圈首元素值(累加外圈)
 * 3.计算该元素与首元素距离
 * @return
 */
int spiralMatrix() {

    getSpiralMatrixAij(6, 1, 4);
    getSpiralMatrixAij(6, 2, 2);
    getSpiralMatrixAij(6, 4, 2);
    getSpiralMatrixAij(6, 4, 3);
    getSpiralMatrixAij(6, 2, 5);
    getSpiralMatrixAij(6, 5, 5);
    getSpiralMatrixAij(6, 3, 3);
    getSpiralMatrixAij(6, 2, 4);

    //这里把第n行的,所有下标带入getSpiralMatrixAij 再累加返回值即可

    return 0;
}

/**
 * 返回n阶螺旋矩阵(i,j)位置的值aij
 * @param n 矩阵阶数 >= 1
 * @param i 矩阵下标i >= 1
 * @param j 矩阵下标j >= 1
 * @return
 */
int getSpiralMatrixAij(int n, int i, int j) {
    int ret = 0;
    int layerI = i <= n / 2 ? i : (n - i + 1);
    int layerJ = j <= n / 2 ? j : (n - j + 1);
    //层号
    int layer = min(layerI, layerJ);
    //基准点aii(第layer层)的值 = layer-1层累加和+1
    int aii = 1;
    for (int tmpIndex = 0; tmpIndex < layer - 1; tmpIndex++) {
        //层周长 = (阶数-(层数-1)*2)*4 - 4
        aii += (n - tmpIndex * 2) * 4 - 4;
    }
    //层边长
    const int LAYER_SIDE = n - 2 * (layer - 1);
    //计算 距离基准点aii距离
    ret += aii;
    if (layer == i) {
        //上边
        ret += j - layer;
    } else if (n - layer + 1 == j) {
        //右边
        ret += LAYER_SIDE - 1;
        ret += i - layer;
    } else if (n - layer + 1 == i) {
        //下边
        ret += LAYER_SIDE - 1;
        ret += LAYER_SIDE - 1;
        ret += j - layer;
    } else if (layer == j) {
        //左边
        ret += LAYER_SIDE - 1;
        ret += LAYER_SIDE - 1;
        ret += LAYER_SIDE - 1;
        ret += n - layer + 1 - i;
    }
    cout << "[" << i << "," << j << "] -> " << ret << endl;
    return ret;
}

#endif //YANACM_SPIRALMATRIX_H
