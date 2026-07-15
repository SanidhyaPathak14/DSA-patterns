//Pattern :-)
// 1
// 23
// 456


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;


int value=1;    
 for(int i=1;i<=n; i++){
    for(int j=1;j<=i;j++){
        cout<<value;
        value++;
    }
    cout<<endl;
 }   

   return 0;
}