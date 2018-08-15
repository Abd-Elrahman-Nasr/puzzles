#include <iostream>

using namespace std;

int main() {

    int view, res=0, total=0;

    int n; cin >> n;

    for(int i=0; i<n; i++) {
        for(int j=0; j<3; j++) {
            cin >> view;
            if(view == 1) res++;
        }

        if (res >= 2) total++;
        res=0;

    }

    cout << total << '\0';

    return 0;
}
