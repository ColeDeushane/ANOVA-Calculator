#include <iostream>
#include <string>
#include "anova.h"

// default constructor
calculator::calculator() {
    k = 0;
    n = 0;
    N = 0;
}

// custom constructor
calculator::calculator(int N1, int n1, int k1) {
    N = N1;
    n = n1;
    k = k1;
}

void calculator::set_K(int x) {k = x;}
void calculator::set_n(int x) {n = x;}
void calculator::set_N(int x) {N = x;}

int calculator::get_k() {return k;}
int calculator::get_n() {return n;}
int calculator::get_N() {return N;}

void calculator::set_Column1(int index, int number) {
    column1[index] = number;
}
void calculator::set_Column2(int index, int number) {
    column1[index] = number;
}
void calculator::set_Column3(int index, int number) {
    column1[index] = number;
}
void calculator::set_Column4(int index, int number) {
    column1[index] = number;
}
void calculator::set_Column5(int index, int number) {
    column1[index] = number;
}


