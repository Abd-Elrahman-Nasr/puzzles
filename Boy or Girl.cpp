#include <iostream>
#include <cstring>

using namespace std;

bool filter(string statment, char anchor) {

    if (statment.find(anchor) != string::npos) {
        return false;
    } else {
        return true;
    }

}

int main() {

    string username; cin >> username;
    string filter_version = "";

    for(int i=0; i < username.length(); i++) {
        if( filter(filter_version, username[i]) ) {
            filter_version += username[i];
        }
    }

    if( filter_version.length()%2 == 0 ) cout << "CHAT WITH HER!" << endl;
    else cout << "IGNORE HIM!" << endl;

    return 0;
}
