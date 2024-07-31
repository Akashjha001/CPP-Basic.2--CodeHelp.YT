#include<iostream>
using namespace std;
 int main(){
    int n;
    cin>>n;   //Number input
    int nth_term = 3*n+7;  // Calculating nth term with AP formula
    // Output the nth term
    cout<< "The nth term of a arithmetic progression is :" << nth_term <<endl;
    return 0;
}