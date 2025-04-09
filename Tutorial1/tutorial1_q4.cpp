#include <iostream>
using namespace std;
double payAmount = 2200.0;
double payPeriods = 26;
double annualPay = 0;

double ComputePay (double payAmount, double payPeriods){
    return payAmount * payPeriods;
}

int main(){
    annualPay = ComputePay(payAmount, payPeriods);
    cout << "The total annual pay is " << annualPay << endl;

    return 0;
}