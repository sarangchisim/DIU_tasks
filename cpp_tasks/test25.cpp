#include <bits/stdc++.h>
using namespace std;

int binarySearch(const vector<long long>& prices, long long target) {
    int left = 0, right = prices.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (prices[mid] == target) {
            return mid;
        } else if (prices[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1; // Not found
}

void findBooks(const vector<long long>& prices, long long money) {
    long long minDiff = LLONG_MAX;
    pair<long long, long long> result;

    for (int i = 0; i < prices.size(); ++i) {
        long long complement = money - prices[i];
        int index = binarySearch(prices, complement);
        if (index != -1 && index != i) {
            long long diff = abs(prices[i] - prices[index]);
            if (diff < minDiff) {
                minDiff = diff;
                result = make_pair(min(prices[i], prices[index]), max(prices[i], prices[index]));
            }
        }
    }

    cout << "Peter should buy books whose prices are " << result.first << " and " << result.second << "." << endl;
}

int main() {
    long long n;
    while (cin >> n) {
        vector<long long> prices(n);
        for (int i = 0; i < n; ++i) {
            cin >> prices[i];
        }
        long long money;
        cin >> money;

        sort(prices.begin(), prices.end());

        findBooks(prices, money);
        cout << endl; // Blank line after each test case
    }

    return 0;
}
