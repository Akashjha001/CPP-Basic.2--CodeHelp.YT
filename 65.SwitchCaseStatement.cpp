#include<iostream>
using namespace std;
int main(){
    char ch= 'a';
    int num=1;
    switch(ch){
        case 1: cout<< "first" <<endl;
        break;
        case 'a': switch(num){
            case 1: cout<< "i am first" <<endl;
                    cout<< "i am king" <<endl;
        }
        break;
        default: cout<< "i am boss" <<endl;
    }
}