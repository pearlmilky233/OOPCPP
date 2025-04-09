#include <iostream>
#include <iomanip>
using namespace std;
int n1 = 0;
int n2 = 0;

void Swap (int &n1, int &n2){
    int m = n1;
    n1 = n2;
    n2 = m;

    return;
}

int main(){
    cout << "Swap two numbers:" << endl;
    cout << setfill('-') << setw(23) << " " << endl;
    
    cout << "Input 1st number:";
    cin >> n1;
    cout << "Input 2nd number:";
    cin >> n2;

    Swap(n1, n2);

    cout << "After swapping, the 1st number is: " << n1 << endl;
    cout << "After swapping, the 2nd number is: " << n2 << endl;

    return 0;
}