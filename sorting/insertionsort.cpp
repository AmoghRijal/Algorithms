#include <bits/stdc++.h>
#include "functions.h"

using namespace std;

vector<int> insertionSort(vector<int> vi) {
    for (int i = 1; i < vi.size(); i++) {
        int k = i;
        for (int j = i - 1; j >= 0; j--) {
            if (vi[k] < vi[j]) {
                swap(vi[k], vi[j]);
                k--;
            } else {
                break;
            }
        }    
    }
    return vi;
}

int main() {
    vector<int> nums = readGetArray();
    vector<int> sortedNums = insertionSort(nums);
    printArray(sortedNums);
}

