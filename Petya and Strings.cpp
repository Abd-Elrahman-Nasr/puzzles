#include <iostream>
#include <cstring>

using namespace std;

int main() {

    char first_str[100]; cin >> first_str;
    char second_str[100]; cin >> second_str;

    for(int i=0; i < strlen(first_str); i++) {
        first_str[i] = tolower(first_str[i]);
        second_str[i] = tolower(second_str[i]);
    }

    cout << strcmp(first_str, second_str) << endl;

    return 0;
}
