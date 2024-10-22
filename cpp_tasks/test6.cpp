//merge sort
#include <bits/stdc++.h>
using namespace std;

// Function to merge two sorted subarrays
void merge(vector<int> &a, int low, int mid, int high) {
    // Calculate sizes of two subarrays
    int n1 = mid - low + 1;
    int n2 = high - mid;

    // Create temporary arrays to hold the data of two subarrays
    vector<int> L(n1), R(n2);

    // Copy data to temporary arrays L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = a[low + i];
    for (int j = 0; j < n2; j++)
        R[j] = a[mid + 1 + j];

    // Merge the two arrays back into a[low..high]
    int i = 0, j = 0, k = low;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            a[k] = L[i];
            i++;
        } else {
            a[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if any
    while (i < n1) {
        a[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if any
    while (j < n2) {
        a[k] = R[j];
        j++;
        k++;
    }
}

// Function to perform merge sort recursively
void merge_sort(vector<int> &a, int low, int high) {
    if (low < high) {
        // Find the middle point
        int mid = low + (high - low) / 2;

        // Recursively sort first and second halves
        merge_sort(a, low, mid);
        merge_sort(a, mid + 1, high);

        // Merge the sorted halves
        merge(a, low, mid, high);
    }
}

int main() {
    // Input the size of the array
    int n;
    cin >> n;

    // Input the array elements
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Sort the array using merge sort
    merge_sort(a, 0, n - 1);

    // Output the sorted array
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
