#include <iostream>
#include <cmath>
using namespace std;
double L, Rate, Payment, AmountPaidBack,
InterestPaid, AnnualInterestRate;
int N;

double ComputePay(double Rate, double L, int N){
    return Rate * pow(1+Rate, N) / (pow(1+Rate, N) - 1) * L;
}

int main(){
    cout << "The Loan Amount is $";
    cin >> L;
    cout << "The Annual Interest Rate is:";
    cin >> AnnualInterestRate;
    cout << "The Number of Payment is:";
    cin >> N;

    Rate = (AnnualInterestRate/100.0) / 12.0;
    Payment = ComputePay(Rate, L, N);
    AmountPaidBack = Payment * N;
    InterestPaid = AmountPaidBack - L;

    cout << "Loan Amount:$" << L <<endl;
    cout << "Monthly Interest Rate:" << Rate*100 << "%" <<endl;
    cout << "Number of Payment:" << N <<endl;
    cout << "Monthly Payment:$" << Payment << endl;
    cout << "Amount Paid Back:$" << AmountPaidBack << endl;
    cout << "Interest Paid:$" << InterestPaid << endl;

    return 0;
}