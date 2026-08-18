# include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter two numbers : ";
    cin>>a>>b;

    int choice;
    cout<<"enter your choice (1-5) : ";
    cin>>choice;
    
    switch(choice){
    case 1:
        cout<<"sum of two numbers is:"<<a+b;
        break;
    case 2:
        cout<<"substraction of two numbers is :"<<a-b;
        break;
    case 3:
        cout<<"multiplication of two numbers is :"<<a*b;
        break;
    case 4:
        cout<<"division of two numbers is :"<<a/b;
        break;
    case 5:
        cout<<"modulas of two numbers is :"<<a%b;
        break;
    default:
        cout<<"invalid input";
        break;
}
return 0;
}