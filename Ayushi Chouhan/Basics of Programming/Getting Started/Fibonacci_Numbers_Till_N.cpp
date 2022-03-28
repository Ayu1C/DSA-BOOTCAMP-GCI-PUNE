#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    
    //write your code here
    int a = 0;
    int b = 1;
    cout<<a<<endl;
    cout<<b<<endl;
    int c;
    for(int i=3;i<=n;i++)
    {
        c = a+b;
        cout<<c<<endl;
        a=b;
        b=c;
    }
}