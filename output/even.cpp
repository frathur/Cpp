#include <iostream>
using namespace std;
int main(){
    int even,n;
    
    std::cout<<"All positive even numbers of your choice"<<endl;
    std::cout<<"Enter the nth position of the last even number = ";
    std::cin>>n;
    std::cout<<"The first "<<n<<" even numbers are..."<<endl;
    for(int i=1 ; i<=n ; i++){
        even=2*i;
        
      std:: cout<<"{"<<even;
    
       std:: cout<<"}";
        
    }
    
    return 0;
}