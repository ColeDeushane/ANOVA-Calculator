/*
 * Author: Cole Deushane
 * Date: 13 November 2019
 * Program: ANOVA Calculator (Analysis of Variance)
 */

// ANOVA is used to compare more than two groups at a time.
// Test Statistic = F-score
// This program will work for up to five levels of data

#include <iostream>
#include <string>
#include "anova.h"
int main() {

    int N, n, k;

    std::cout << "ANOVA Calculator\n" << std::string(50, '-') << std::endl;
    std::cout << "N = total number of variables in every group\n";
    std::cout << "n = total number of variables in one group\n";
    std::cout << "K = number of levels in a factor\n" << std::string(50, '-') << std::endl;

    std::cout << "Enter Scores for N, n and k respectively: ";
    std::cin >> N >> n >> k;
    std::cout << std::string(50, '-') << std::endl;

    calculator calc(N, n, k);

    std::cout << "Total Columns of Data: " << k << '\n';
    std::cout << "Total Rows of Data: " << n << '\n';
    std::cout << std::string(50, '-') << std::endl;
    std::cout << "*** Note: enter a space between each entry. ***\n";

    int num;

    for(int i = 1; i <= k; i++) {
        std::cout << "Enter Data for Column " << i << ':' << "(should be " << n << " numbers)\n";
        for(int j = 0; j < n; j++) {
            std::cin >> num;
            switch(i) {
                case 1:
                    calc.set_Column1(j, num);
                    break;
                case 2:
                    calc.set_Column2(j, num);
                    break;
                case 3:
                    calc.set_Column3(j, num);
                    break;
                case 4:
                    calc.set_Column4(j, num);
                    break;
                case 5:
                    calc.set_Column5(j, num);
                    break;
                default:
                    break;
            }
        }
    }

    return 0;
}