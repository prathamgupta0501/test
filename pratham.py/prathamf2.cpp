/*summ of all the digits */
#include<iostream>
using namespace std;
int main() {
    int n,num=0;
    cout<<"enter the number";
    cin>>n;
    while(n>0) {
        num=n%10;
        n=n/10;
        num+=num;
        


    }
    cout<<num;
}

