#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char **argv){
    int low, high;
    cin >> low >> high;

    //write your code here
    bool is_prime = 1;
    for(int i=low;i<=high;i++)
    {
        for(int j=2;j<=sqrt(i);j++)
        {
            if(i%j == 0)
            {
                is_prime = 0;
            }
        }
        if(is_prime == 1)
        {
            cout<<i<<endl;
        }
        is_prime = 1;
    }

}