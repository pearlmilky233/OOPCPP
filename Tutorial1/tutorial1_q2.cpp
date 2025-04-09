#include <iostream>
using namespace std;
double purchase = 95;
double StateRate = 0.04;
double CountyRate = 0.02;

double ComputeTax (double p, double rate){
    return p * rate;
}

int main(){
    cout << "The total sales tax on a $95 purchase is " <<
    ComputeTax(purchase, StateRate) + ComputeTax(purchase, CountyRate) << endl;
    return 0;
}