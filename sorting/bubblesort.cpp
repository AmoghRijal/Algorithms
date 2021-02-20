#include <bits/stdc++.h>

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
    // command line args -
    // n = number of elements in the array to be sorted 
    // a1, a2, a3 ..... n number of elements in the array to be sorted

    int n, tmp;
    vector <int> nums;

    cout << "Enter number of items to be sorted: ";
    cin >> n;

    // read elements from command line and keep it in array vector
    cout << "Enter elements seperated by space: "; 
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        nums.push_back(tmp);
    } 

    vector<int> sortedNums = bubbleSort(nums);

    // display sorted elements
    cout << "Sorted Elements : ";
    for (int i = 0; i < sortedNums.size(); i++) {
        cout << sortedNums[i] << " ";
    }
}