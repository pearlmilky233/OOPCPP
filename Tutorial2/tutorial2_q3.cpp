#include <iostream>
using namespace std;
double income;
int A = 5000, B = 20000, C =35000, D = 50000, E = 70000, 
    F = 100000, G = 400000, H =600000, I = 2000000;
double Bp = 0.01, Cp = 0.03, Dp = 0.06, Ep = 0.11,
    Fp = 0.19, Gp = 0.25, Hp = 0.26, Ip = 0.28, Jp = 0.30;
int allB = 150, allC = 600, allD = 1500, allE = 3700,
    allF = 9400, allG = 84400, allH = 136400, allI = 528400;  


double Tax(double income){
    if (income <= A) return 0;
    else if (income <= B) return Bp * (income - A) + 0;
    else if (income <= C) return Cp * (income - B) + allB;
    else if (income <= D) return Dp * (income - C) + allC;
    else if (income <= E) return Ep * (income - D) + allD;
    else if (income <= F) return Fp * (income - E) + allE;
    else if (income <= G) return Gp * (income - F) + allF;
    else if (income <= H) return Hp * (income - G) + allG;
    else if (income <= I) return Ip * (income - H) + allH;
    else return Jp * (income - I) + allI;
}

int main(){
    cout << "The total chasrgable income = ";
    cin >> income;
    cout << "The total payable tax = " << Tax(income) <<endl;

    return 0;
}