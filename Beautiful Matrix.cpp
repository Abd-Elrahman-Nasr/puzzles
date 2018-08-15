#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int row, res=0;

    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            cin >> row;
            if(row == 1) {
                res = abs(i-2) + abs(j-2);
                break;
            }
        }
        if (res > 0) break;
    }

    cout << res << '\0';

    return 0;
}
