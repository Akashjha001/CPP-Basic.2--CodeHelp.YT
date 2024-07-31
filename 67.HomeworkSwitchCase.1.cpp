#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int amount = 1330;
    int noteof100=0,noteof50=0,noteof20=0,noteof1=0;
    switch(amount){
        case 0:
        break; 
        default: noteof100 = amount/100;
                amount = amount%100;
    }
    switch(amount){
        case 0:
        break;
        default: noteof50 = amount/50;
                 amount = amount%50;
    }
    switch(amount){
        case 0:
        break;
        default: noteof20 = amount/20;
                 amount = amount%20;
    }
    switch(amount){
        case 0:
        break;
        default: noteof1 = amount/1;
                 amount = amount%1;  
    }
    cout<<" noteof100 is "<<noteof100<<endl;
    cout<<" noteof50 is "<<noteof50<<endl;
    cout<<" noteof20 is "<<noteof20<<endl;
    cout<<" noteof1 is "<<noteof1<<endl;
}