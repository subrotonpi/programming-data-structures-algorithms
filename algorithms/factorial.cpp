#include <iostream>
using namespace std;
long long factorial(int n);

int main() {
    cout<<"value of n = 5\n";
    long long n=5;
    //cout<<"Enter a number: ";
    //cin>>n;
    cout<<"\n"<<factorial(n)<<"\n";
}

long long  factorial(int n){
    if(n<1) return 1;
    else return n*factorial(n-1);
}