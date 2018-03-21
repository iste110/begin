#include <iostream>
using namespace std;

int main() 
{
    int exponent;
    float base, results = 1;

    cout << "Enter base and exponent respectively:  ";
    cin >> base >> exponent;

    cout << base << "^" << exponent << " = ";

    while (exponent != 0) {
        results *= base;
        --exponent;
    }

    cout << results;
    
    return 0;
}
