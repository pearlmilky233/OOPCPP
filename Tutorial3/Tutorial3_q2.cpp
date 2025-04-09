#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> acc = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
    8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
    1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
int input = 0;

int main(){
    cout << "Enter an account number: ";
    cin >> input;

    sort(acc.begin(), acc.end());
    bool found = binary_search(acc.begin(), acc.end(), input);
    if (found) cout << "The number is valid";
    else cout << "The number is invalid";

    return 0;
}