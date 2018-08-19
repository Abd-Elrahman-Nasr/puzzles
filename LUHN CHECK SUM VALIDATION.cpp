#include <iostream>

using namespace std;

int doubleDigit(int n) {
    int sum;

    n *= 2;

    if(n > 9) sum = 1 + n%10;
    else sum = n;

    return sum;
}

int main() {

    char digit;
    int evenSumCounter=0, oddSumCounter=0, checksum=0;
    int pos=1;

    digit = cin.get();

    while(digit != 10) {
        if(pos%2 == 0) {
            evenSumCounter += digit - '0';
            oddSumCounter += doubleDigit(digit - '0');
        } else {
            oddSumCounter += digit - '0';
            evenSumCounter += doubleDigit(digit - '0');
        }

        digit = cin.get();
        pos++;
    }

    if((pos-1) % 2 == 0) checksum = evenSumCounter;
    else checksum = oddSumCounter;

    cout << "CHECKSUM = " << checksum << endl;

    if(checksum % 10 == 0) cout << "SUCCESS! :)" << endl;
    else cout << "FAILED! :(";

    return 0;
}
