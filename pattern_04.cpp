// program for 
// * 
// * * 
// * * * 
// * * * * 


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter your number: ";
    cin>>n;

//logic :-)


for(int i=1; i<=n;i++){         //for rows
    for(int j=1; j<=i; j++){     //for columns 
        cout<<"*"<<" ";
    }
    cout<<endl;
}

   return 0;
}