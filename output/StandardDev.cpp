#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double n,sum,stdDev,sumDev=0,x[1000],var;
    std::cout<<"Let's calculate for the standard deviation of an ungrouped data"<<endl;
    std::cout<<"How many numbers are you operating on : ";
    std::cin>>n;
    std::cout<<"Enter Your values :";
    for(int i=1 ; i<=n ; i++){
        std::cin>>x[i];
        sum = sum +x[i];
    }
    double mean=sum/n;
    for (int i = 1; i <= n; i++)
    {
        sumDev=sumDev+pow(x[i]-mean,2);
        
    }
    var=sumDev/n;
    stdDev=pow(var,0.5);
    std::cout<<"The standard deviation of the numbers is = "<<stdDev<<endl;
    
    return 0;
}