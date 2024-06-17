#include <iostream>

using namespace std;

int main()
{
    int a, b, sum = 0,x,y;

    cout<<"Product of two numbers.........."<<endl;
    cout<<" a = ";
    cin>>a;
    cout<<" b = ";
    cin>>b;
      x= a;

     y=b;
    while(a>=1){
        if(a%2==0){
            sum=sum+b;
        }
        a=a/2;
        b=b*2;
    }
    cout<<"The product of "<<x<<" and "<<y<<" is "<<sum<<endl;
    return 0;
}
