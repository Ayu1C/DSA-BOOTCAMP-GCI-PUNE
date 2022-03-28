#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char **argv){
    int t;
    cin >> t;

    //write your code here
    int n;
    bool is_prime = 1;
    for(int i=1;i<=t;i++)
    {
       cin>>n;
       for(int j=2;j<=sqrt(n);j++)
       {
           if(n%j==0)
           {
               is_prime=0;
           }
           
       }
       if(is_prime == 1)
       {
           cout<<"prime"<<endl;
       }
       else if(is_prime == 0)
       {
           cout<<"not prime"<<endl;
       }
       is_prime = 1;
    }
}
