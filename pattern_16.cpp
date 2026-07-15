//Pattern :-)

// A 
// B C 
// C D E 
// D E F G 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ente the number : ";
    cin>>n;

for(int i=0; i<=n; i++){
    char ch='A'+i;
    for(int j=0; j<=i; j++){
        cout<<ch<<" ";
        ch++;
    }
    cout<<endl;
}    

   return 0;
}