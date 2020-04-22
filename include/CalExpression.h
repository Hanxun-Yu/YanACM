//
// Created by xunxun on 2020/4/22.
//

#ifndef YANACM_CALEXPRESSION_H
#define YANACM_CALEXPRESSION_H

int calExpression() {
    cout << "<<CalExpression>>"<<endl;
    char a = getchar();
    char symbol = getchar();
    char b = getchar();

    int ret = 0;
    switch (symbol) {
        case '+':
            ret = a + b - '0' - '0';
            break;
        case '-':
            ret = a - b;
            break;
        case '*':
            ret = (a-'0') * (b - '0');
            break;
        case '/':
            ret = (a-'0') / (b - '0');
            break;

    }

    cout << ret << endl;

    return 0;
}
#endif //YANACM_CALEXPRESSION_H
