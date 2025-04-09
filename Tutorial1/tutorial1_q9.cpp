#include <iostream>
using namespace std;
double Actual = 0;
double AssessRate = 0.6;
double TaxRate = 0.0075;
double AssessValue = 0;
double Tax = 0;

double Compute (double p, double rate){
    return p * rate;
}

int main(){
    cout << "The actual value of the property:";
    cin >> Actual;

    AssessValue = Compute(Actual, AssessRate);
    Tax = Compute(AssessValue, TaxRate);

    cout << "The assessment value = " << AssessValue << endl;
    cout << "The property tax = " << Tax << endl;

    return 0;
}