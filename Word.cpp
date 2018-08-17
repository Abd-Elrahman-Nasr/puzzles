#include <iostream>
#include <cstring>

using namespace std;

int main() {

    char s[100]; cin >> s;
    int lowerchars = 0, upperchars = 0;

    for(int i=0; i<strlen(s); i++) {
        if( islower(s[i]) ) lowerchars++;
        else upperchars++;
    }

    for(int j=0; j<strlen(s); j++) {
        if(lowerchars >= upperchars) s[j] = tolower(s[j]);
        else s[j] = toupper(s[j]);
    }

    cout << s << endl;

    return 0;
}
