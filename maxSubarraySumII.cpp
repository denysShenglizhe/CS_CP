#include<bits/stdc++.h>
using namespace std;

int main() {
  
    int n, a, b;
   cin>>n>>a>>b;
    vector<long long> pref(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        long long x;
        cin >> x;
        pref[i] = pref[i - 1] + x;
    }

    multiset<long long> window;
    long long ans = -1e18;

    for (int i = a; i <= n; i++) {
        window.insert(pref[i - a]);
        ans = max(ans, pref[i] - *window.begin());
        if (i - b >= 0) {
            window.erase(window.find(pref[i - b]));
        }
    }

    cout << ans << "\n";
    return 0;
}
