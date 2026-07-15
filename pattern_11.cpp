//Pattern 11
// A B C D 
// B C D E 
// C D E F 
// D E F G 


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number : ";
    cin>>n;

    for(int i=0; i<=n; i++){
        char ch='A'+i;
        for(int j=0; j<=n; j++){
            cout<<ch<<" ";
            ch++;

        }
        cout<<endl;
    }
   return 0;
}