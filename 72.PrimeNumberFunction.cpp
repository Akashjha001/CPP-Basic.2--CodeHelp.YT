#include<iostream>
using namespace std;
// 1 for prime 
// 0 for not a prime
bool isPrime(int n){
    for(int i=2; i<n; i++){
        if(n%i==0){
          return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    cin>>n;
    if(isPrime(n)){    // function calling above
        cout<< " It is a prime number " <<endl;
    }
    else{
        cout<< " It is not a prime number " <<endl;
    }
    return 0;
}