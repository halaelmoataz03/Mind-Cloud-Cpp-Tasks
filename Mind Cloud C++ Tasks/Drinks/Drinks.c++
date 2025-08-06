#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
    int DrinksNumber;
    cin >> DrinksNumber;
    cin.ignore();
    
    string line;
    getline(cin, line);
    
    stringstream split_line(line);
    
    vector<int> percentages;
    int percentage;
    
    
    while(split_line >> percentage) {
        percentages.push_back(percentage);
    }
    
    float sum_percentages = 0;
    for (int n = 0; n <DrinksNumber; n++) {
        sum_percentages += percentages.at(n);
    }
    
    cout << sum_percentages/DrinksNumber;
    
    return 0;
}