#include <iostream>
#include <vector>
using namespace std;
vector<double> prices = {15.95, 24.95, 6.95, 12.95, 3.95};
double TaxRate = 0.07;
double subtotal = 0;
double tax = 0;

double ComputeTax (double price, double rate){
    return price * rate;
}

int main(){
    for (int i = 0; i < 5; i++){
        cout << "Price of item " << i+1 << " = $" << prices[i] << endl;
    }
    
    for (int i = 0; i < 5; i++){
        subtotal += prices[i];
    }
    cout << "The sale subtotal = " << subtotal << endl;

    for (int i = 0; i < 5; i++){
        tax += ComputeTax(prices[i], TaxRate);
    }
    cout << "The sales tax amount = " << tax << endl;

    cout << "The total = " << tax + subtotal << endl;

    return 0;
}