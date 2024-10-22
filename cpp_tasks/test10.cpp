// quick_sort
#include <bits/stdc++.h>
using namespace std;

void display(const vector<int>& a) {
    for (int num : a) {
        cout << num << " ";
    }
    cout << endl;
}

int partition(vector<int>& a, int low, int high) {
    int pivot = a[low]; 
    int i = low + 1;
    int j = high;

    while (i <= j) {
        while (i <= j && a[i] <= pivot) i++;
        while (i <= j && a[j] > pivot) j--;

        if (i < j) {
            swap(a[i], a[j]); 
        }
    }

    swap(a[low], a[j]);
    return j; 
}

void quick_sort(vector<int>& a, int low, int high) {
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

    quick_sort(a,0,n-1);  

    display(a);  
    return 0;
}
