//quick_sort
#include <bits/stdc++.h>
using namespace std;

void display(vector<int> &a, int size) {
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int partition(vector<int> &a, int low, int high) {
    int pivot = a[high]; // Choose the last element as pivot
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (a[j] <= pivot) {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[high]);
    return i + 1;
}

void quick_sort(vector<int> &a, int low, int high) {
    if (low < high) {
        int pivot_index = partition(a, low, high);
        quick_sort(a, low, pivot_index - 1);
        quick_sort(a, pivot_index + 1, high);
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    quick_sort(a, 0, n - 1);
    display(a, n);

    return 0;
}