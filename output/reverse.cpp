#include <iostream>
using namespace std;
int main() {
    int revD,num,oldnum;
    cout<<"Enter any positive number = ";
    cin>>num;
    oldnum=num;
    while (num>0)
    {
        revD=revD*10+(num%10);
        num=num/10;
    }
    cout<<"The reverse of "<<oldnum<<" is "<<revD<<endl;
    if(revD==oldnum){
        cout<<"The number is a palindrome "<<endl;

    }
    else{
        cout<<"The number is not a palindrome"<<endl;
    }
    return 0;
}