#include <iostream>
#include <cmath>
using namespace std;
int main(){
    
    double disc,root1,root2,a,b,c,rt1,rt2;
    std::cout<<"a,b and c are the coefficient of the consecutive terms of a quadratic equation respectively"<<endl;
    std::cout<<"The values of a,b and c should be in decimal"<<endl;
    std::cout<<" a = ";
    std::cin>>a;
    std::cout<<" b = ";
    std::cin>>b;
    std::cout<<" c = ";
    std::cin>>c;
    disc=pow(b,2.0) - 4.0*(a*c);
    if (disc<0)
    {
        std::cout<<"The quadratic equation has imaginary roots"<<endl;
    }
    else if (disc==0)
    {
        std::cout<<"The quadratic equation has no real roots"<<endl;
    }
    else{
        rt1=(-b+ pow(disc,0.5));
        root1=rt1/(2.0*a);
        rt2=(-b-sqrt(disc));
        root2=rt2/(2.0*a);
    }    
      std::cout<<"The roots of the quadratic equation are "<<root1<<" and "<<root2<<endl;
    if(root1==root2){
       std:: cout<<"The roots are real and equal"<<endl;
    }
    


    return 0;
}