#include <iostream>
using namespace std;
// Function to count the number of set bits in an integer
int countSetBits(int n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
        return count;
}
int main(){
    int a, b; // Input values for a and b
    cout << "Enter value for a: ";
    cin >> a;
    cout << "Enter value for b: ";
    cin >> b;
    // Count set bits for a and b
    int setBitsA = countSetBits(a);
    int setBitsB = countSetBits(b);
    // Output the results
    cout << "Number of set bits in a: " << setBitsA << endl;
    cout << "Number of set bits in b: " << setBitsB << endl;
    return 0;
}