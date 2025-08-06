#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string line;
    getline(cin, line);

    stringstream split_line(line);

    vector<int> digits;
    int digit;

    while (split_line >> digit) {
        digits.push_back(digit);
    }

    int sum = 0;

    // minimum of 2, 5, or 6
    int min = ((digits.at(0) < digits.at(2)) && (digits.at(0) < digits.at(3))) ? digits.at(0) : (digits.at(2) < digits.at(3)) ? digits.at(2) : digits.at(3);
    
    digits.at(0) -= min;
    digits.at(2) -= min;
    digits.at(3) -= min;

    // sum of all possible 256
    sum = min * 256;

    // minimum of 2 or 3
    min = (digits.at(0) < digits.at(1)) ? digits.at(0) : digits.at(1);

    // sum + all possible 32
    sum += min * 32;

    cout << sum;

    return 0;
}