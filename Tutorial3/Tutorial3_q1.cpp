#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> score;
int input = 0;
double sum = 0.0;

int main(){
    cout << "-1 to end input" << endl;
    while (true){
        cout << "Test score = ";
        cin >> input;
        if (input == -1) break;
        score.insert(score.end(), input);
        sum += input;
    }

    sort(score.begin(), score.end(), greater<int>());
    cout << "The score sorted in descending order: ";
    for (size_t i = 0; i < score.size(); i++){
        cout << score[i] << " ";
    }
    cout << endl;
    cout << "The average score of the vector is " << sum / (double)score.size() << endl;

    return 0;
}