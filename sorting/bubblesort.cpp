#include <bits/stdc++.h>
#include "functions.h"

using namespace std;

vector<int> bubbleSort(vector<int> vi) {
    for (int i = 0; i < vi.size(); i++) {
        for (int j = 0; j < vi.size() - 1; j++) {
            if (vi[j] > vi[j + 1]) {
                swap(vi[j], vi[j + 1]);
            }
        }
    }
    return vi;
}

int main() {
    vector<int> nums = readGetArray();
    vector<int> sortedNums = bubbleSort(nums);
    printArray(sortedNums);
}