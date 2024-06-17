#include <iostream>
using namespace std;
int main(){
    double n,sum,mean;
    sum=0;
    std::cout<<"Enter the number of individual data : ";
    std::cin>>n;
    std::cout<<"Enter your values : "<<endl;
   

    double x[1000];
    for (int i = 0; i <=n; i++)
    {
       std::cin>>x[i];
        sum=sum+x[i];
    }
    mean=sum/n;
    std::cout<<"The mean of the values you entered is = "<<mean<<endl;




    
    return 0;
}