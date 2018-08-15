#include <iostream>

using namespace std;

int main() {

    int n,h, counter=0;

    cin >> n >> h;

    for(int i=0; i < n; i++) {
        int x;

        cin >> x;
        if (x <= h) counter += 1;
        else counter += 2;
    }

    cout << counter << endl;

    return 0;
}
