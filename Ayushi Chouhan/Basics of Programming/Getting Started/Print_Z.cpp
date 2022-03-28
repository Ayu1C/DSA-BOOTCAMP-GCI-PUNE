#include<iostream>
using namespace std;
int main(int argc, char** agrc) {
  //write your code here
  for(int i=1;i<=5;i++)
    {
        cout<<"*";
    }
    cout<<endl;
    for(int j=1;j<=3;j++)
    {
        for(int k=1;k<5-j;k++)
        {
        cout<<" ";
        }
        cout<<"*"<<endl;
    }
     for(int i=1;i<=5;i++)
    {
        cout<<"*";
    }
    

}