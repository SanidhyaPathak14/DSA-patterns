//Pattern 09
// A A A A 
// B B B B 
// C C C C 
// D D D D 

#include<iostream>
using namespace std;
int main()
{
   
    int n;
    cout<<"enter the number : ";
    cin>>n;

    char ch='A';

for(int i=1; i<=n; i++){
    for(int j=1; j<=n;j++){
        cout<<ch<<" ";
    }
    cout<<endl;
    ch++;
}    


   return 0;
}