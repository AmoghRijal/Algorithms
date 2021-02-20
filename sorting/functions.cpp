#include <iostream>
#include <vector>
#include "functions.h"

using namespace std;

void printArray(vector<int> vi) {
    cout << "Sorted Elements : ";
    for (int i = 0; i < vi.size(); i++) {
        cout << vi[i] << " ";
    }
}

vector<int> readGetArray() {
    int n, tmp;
    vector <int> nums;
    cout << "Enter number of items to be sorted: ";
    cin >> n;

    cout << "Enter elements seperated by space: "; 
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        nums.push_back(tmp);
    } 
    return nums;
}