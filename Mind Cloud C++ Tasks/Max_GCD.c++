#include <iostream>
#include <vector>
using namespace std;


int main() {
    int test_cases;
    cin >> test_cases;

    vector <int> range_end;
    int num ;
    
    for (int i = 0; i < test_cases; i++) {
        cin >> num;
        range_end.push_back(num);
    }

    /* The maximum GCD of a rang from 1 to n is floor(n/2) */
    for (int i = 0; i < test_cases; i++) {
        cout << range_end.at(i)/2 << endl;
    }

    return 0;
}