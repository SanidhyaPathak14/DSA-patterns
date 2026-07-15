//Pattern :-)
// D 
// C D 
// B C D 
// A B C D 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;

    for(int i=0; i<=n; i++){
        char ch='D'-i;
        for(int j=0; j<=i; j++){
            cout<<ch<<" ";
            ch++;

        }
        ch++;
        cout<<endl;
    }

   return 0;
}