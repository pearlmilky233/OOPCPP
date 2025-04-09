#include <iostream>
using namespace std;
double Meal = 88.67;
double TaxRate = 0.0675;
double TipRate = 0.2;

double ComputeMoney (double p, double rate){
    return p * rate;
}

int main(){
    double Tax = ComputeMoney(Meal, TaxRate);
    double Tip = ComputeMoney(Meal + Tax, TipRate);
    
    cout << "The meal cost is " << Meal << endl;
    cout << "The tax amount is " << Tax << endl;
    cout << "The tip amount is " << Tip << endl;
    cout << "The total bill is " << Meal + Tax + Tip << endl;

    return 0;
}