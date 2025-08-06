#include <iostream>
#include <vector>
using namespace std;

int main () {
    int house_start, house_end;
    int apple_tree_pos, orange_tree_pos;
    int apples_number, oranges_number;
    int apples_in_house = 0, oranges_in_house = 0;

    cin >> house_start >> house_end;
    cin >> apple_tree_pos >> orange_tree_pos;
    cin >> apples_number >> oranges_number;

    int num;
    for (int i = 0; i < apples_number; i++) {
        cin >> num;
        if ((num + apple_tree_pos >= house_start) && (num + apple_tree_pos <= house_end))
            apples_in_house ++;
    }

    for (int i = 0; i < oranges_number; i++) {
        cin >> num;
        if ((num + orange_tree_pos >= house_start) && (num + orange_tree_pos <= house_end))
            oranges_in_house ++;
    }

    cout << apples_in_house << endl;
    cout << oranges_in_house << endl;
    
    return 0;
}