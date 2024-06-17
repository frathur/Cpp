#include <iostream>
using namespace std;
int main(){
    int counter,sum,num;
    sum=0;
    counter=0;
    cout<<"Enter any positive number"<<endl;
    cin>>num;
    

    while (num>0)
    {
        sum=sum+(num%10);
        num=num/10;
        counter=counter +1;
    }
    cout<<"The summation of the digits within the number is = "<<sum<<endl;
    cout<<"The number of digits within the number is = "<<counter<<endl;


    return 0;
    
}