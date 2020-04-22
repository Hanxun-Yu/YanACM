//
// Created by xunxun on 2020/4/22.
//

#ifndef YANACM_FRACTAL_H
#define YANACM_FRACTAL_H


/**
 * Problem B

现在小学生也在学习基本的编程，课程目标是让小学生能够有基本的算法思想，并不涉及复杂的数据和实现细节与原理。
 LOGO语言就非常适合小学生学习，它通过绘图的方式来直观的表现出如何用程序代码控制事物。
 例如控制台上初始给出一个点，
 使用语句FD 1/1 表示将控制台上的点Forward 1/1的距离，即，向当前方向移动1的距离，这样就画出一条线段。
 语句LT 60则表示当前朝向向左转60度，接着再使用语句FD 1/1就画出一条与之前的直线夹角为120度的一条线段，这时控制台上就有绘制出了一条折线段。
现在的任务是输出一段能绘制分形的LOGO语言的程序代码。
如果你还对分形不了解，下面我们先介绍一下分形：
分形(Fractal) 是一个几何形状可以分成数个部分，且每一部分都（至少近似地）是整体缩小后的形状，即具有自相似的性质。自然界中一定程度上具有分形的性质的事物有云朵、闪电、植物根系、雪花等等。著名的科赫曲线就是一种分形，它绘制的是形态类似雪花的图案。
以下是0阶到3阶的科赫曲线：

 * @param distance
 * @param level
 */
void draw(int totalLevel, int curLevel);

int fractal() {
    cout << "<<Fractal>>" << endl;
    cout << "input level:";
    int level = 0;
    cin >> level;
    draw(level, level);


    return 0;
}

void draw(int totalLevel, int curLevel) {
    int p = pow(3, totalLevel);
    if (curLevel == 1) {
        cout << "FD 1/" << p << endl;
        cout << "LT 60" << endl;
        cout << "FD 1/" << p << endl;
        cout << "LT 240" << endl;
        cout << "FD 1/" << p << endl;
        cout << "LT 60" << endl;
        cout << "FD 1/" << p << endl;
    } else {
        draw(totalLevel, curLevel - 1);
        cout << "LT 60" << endl;
        draw(totalLevel, curLevel - 1);
        cout << "LT 240" << endl;
        draw(totalLevel, curLevel - 1);
        cout << "LT 60" << endl;
        draw(totalLevel, curLevel - 1);
    }
}

#endif //YANACM_FRACTAL_H
