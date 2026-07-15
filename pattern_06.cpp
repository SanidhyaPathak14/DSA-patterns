// PATTERN :-) 

// 1 
// 2 3 
// 3 4 5 
// 4 5 6 7 


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter your number: ";
    cin>>n;

//logic :-)
int count=1;
int value=count;

for(int i=1; i<=n;i++){  
    int value=i;       //for rows
    for(int j=1; j<=i; j++){     //for columns 
        
        cout<<value <<" ";
        value=value+1;      
   
    }

    cout<<endl;
}

   return 0;
}