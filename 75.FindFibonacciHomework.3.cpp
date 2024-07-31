#include <iostream>
using namespace std;
void fibonacciSeries(int n) {
    int a = 0, b = 1, nextTerm;
    cout << "Fibonacci Series: " << a << " " << b;
    for (int i = 1; i <= n-2; ++i) {
        nextTerm = a + b;
        cout << " " << nextTerm;
        a = b;
        b = nextTerm;
    }
    cout << endl;
}
int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    if(n < 1) {
        cout << "Please enter a positive integer greater than 0" << endl;
    } 
    else {
        fibonacciSeries(n);
    }
    return 0;
}