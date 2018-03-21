
#include <iostream>
using namespace std;
int main()
{
    int n, sums = 0;
    cout << "Enter a positive integer: ";
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        sums += i;
    }
    cout << "Sum = " << sums;
    return 0;
}
