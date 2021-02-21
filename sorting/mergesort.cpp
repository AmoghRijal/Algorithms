#include <bits/stdc++.h>
#include "functions.h"

using namespace std;

vector<int> mergeArrays(vector<int> a, vector<int> b) {
    vector<int> ret;
    int ptrA = 0;
    int ptrB = 0;
    
    while (ptrA < a.size() && ptrB < b.size()) {
        if (a[ptrA] <= b[ptrB]) {
            ret.push_back(a[ptrA]);
            ptrA++;
        } else {
            ret.push_back(b[ptrB]);
            ptrB++;
        }
    }

    while (ptrA < a.size()) {
        ret.push_back(a[ptrA]);
        ptrA++;
    }

    while (ptrB < b.size()) {
        ret.push_back(b[ptrB]);
        ptrB++;
    }
    return ret;
}

vector<int> mergeSort(vector<int> vi) {
    if (vi.size() <= 1) return vi;

    vector<int> la, ra;
    int mid = vi.size() / 2;

    for (int i = 0; i < mid; i++) {
        la.push_back(vi[i]);
    }
    
    for (int i = mid; i < vi.size(); i++) {
        ra.push_back(vi[i]);
    }

    la = mergeSort(la);
    ra = mergeSort(ra);
    return mergeArrays(la, ra);
}


int main() {
    vector<int> nums = readGetArray();
    vector<int> sortedNums = mergeSort(nums);
    printArray(sortedNums);
}