#include<iostream>
using namespace std;

int main() {
    
    int num, count = 0;
    
    // Input number
    cout << "Enter a number \n";
    cin  >> num;
    
    // If number is greater than zero
    while (num > 0) {
        
        //Reduce number in each iteration
        num = num / 10;
        
        //Count number of digits
        count++;
    }
    
    cout << "Number of digitsss in a number is " << count;
    
    return 0;
}
