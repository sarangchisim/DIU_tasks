#include <bits/stdc++.h>
using namespace std;

using ll = long int;

int main() {
    int t;
    cin >> t;

    for (int j = 0; j < t; j++) {
        ll n;
        cin >> n;
        string s;
        cin >> s;

        for (char& c : s) {
            c = tolower(c);
        }

        unordered_set<char> us;

        ll q;
        cin >> q;
        vector<ll> x(q);

        for (int i = 0; i < q; i++) {
            cin >> x[i];
            x[i] -= 1;

            us.clear();

            for (int j = x[i]; j < n; j++) {
                if (us.count(s[j]) == 0) {
                    us.insert(s[j]);
                }
            }
            if (i == 0) {
                cout << "Case " << j + 1 << ":";
            }
            cout << " " << us.size();
        }

        cout << endl;
    }

    return 0;
}