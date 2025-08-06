#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cmath>
using namespace std;

int main () {
    int size;
    cin >> size;
    cin.ignore();

    vector<int> numbers;
    int num;

    int matrix [size][size];
    string line;

    for (int i = 0; i < size; i++) {
        getline(cin, line);
        stringstream split_line (line);
        while (split_line >> num) {
            numbers.push_back(num);
        }
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix[i][j] = numbers.at(i*size + j);
        }
    }

    int Left_diag = 0, right_diag = 0;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j)
                Left_diag += matrix[i][j];
            if(j == size - 1 -i)
                right_diag += matrix[i][j];
        }
    }

    cout << abs(Left_diag - right_diag);

    return 0;
}