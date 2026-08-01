// pattern 23 :-)
// E
// DE
// CDE
// BCDE
// ABCDE


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number : ";
    cin>>n;

    for(int i=1; i<=n; i++){
        char start='A'+(n-i);   // starting character 
        for(int j=0; j<i; j++){
            cout<< char (start+j);
        }
        cout<<endl<<"" ;
    }
   return 0;
}