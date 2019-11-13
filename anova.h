#ifndef ANOVA_H
#define ANOVA_H

#include <iostream>
#include <vector>

class calculator {
private:
    int k;
    int n;
    int N;

    std::vector <int> column1;
    std::vector <int> column2;
    std::vector <int> column3;
    std::vector <int> column4;
    std::vector <int> column5;

public:
    calculator();
    calculator(int, int, int);

    void set_K(int);
    void set_n(int);
    void set_N(int);

    int get_k();
    int get_n();
    int get_N();

    void set_Column1(int, int);
    void set_Column2(int, int);
    void set_Column3(int, int);
    void set_Column4(int, int);
    void set_Column5(int, int);
};


#endif