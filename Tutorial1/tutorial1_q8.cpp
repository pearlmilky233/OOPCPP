#include <iostream>
using namespace std;
double sugar = 1.5 / 48.0;
double butter = 1.0 / 48.0;
double flour = 2.75 / 48.0;
double n = 0;

int main(){
    cout << "The number of cookies:";
    cin >> n;

    cout << "number of cups of sugar: " << n * sugar <<endl;
    cout << "number of cups of butter: " << n * butter <<endl;
    cout << "number of cups of flour: " << n * flour <<endl;

    return 0;
}