#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int res;
    int n; cin >> n;
    int amount[n];

    for(int i=0; i<n; i++) {
        cin >> amount[i];
    }

    sort(amount, amount+n);

    for(int i=0; i<n; i++) {
        cout << amount[i];
        if (i < n-1) cout << " ";
    }

    cout << '\0';

    return 0;
}
