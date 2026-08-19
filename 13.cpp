#include<iostream>
using namespace std;
int main(){
    int num;
    long long factorial=1;
    cout<<"enter a number: ";
    cin>>num;
    for(int i=1;i<=num;i++){
        factorial=factorial*i;
    }
    cout<<"factorial of "<<num<<" is : "<<factorial;
    return 0;
}
