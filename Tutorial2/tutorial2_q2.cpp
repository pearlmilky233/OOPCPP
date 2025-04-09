#include <iostream>
using namespace std;
double multi = 1.5;
int perh = 50;
double t;

double totalpay (double t){
    double over = t - 40.0;
    if (over <= 0) return t * perh;
    else return 40.0 * perh + over * perh * multi;
}

int main(){
    cout << "Work hours = ";
    cin >> t;
    cout << "The gross pay = " << totalpay(t) <<endl;

    return 0;
}