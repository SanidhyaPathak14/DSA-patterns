//program for 
// 1 2 3 4 
// 1 2 3 4 
// 1 2 3 4 
// 1 2 3 4



#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter the number : ";
    cin>>n;

    // logic 

for(int i=1; i<=n; i++){        // loop for rows 
    for(int j=1; j<=n;j++){     // loop for columns 
        cout<<j<<" ";
    }
    cout<<endl;
}    


   return 0;
}