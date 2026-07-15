// program for 
//123
//456
//789

#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter the number : ";
    cin>>x;

    int number=1;

for(int i=1; i<=x; i++){
    for(int j=1; j<=x; j++){
        cout<<number <<" ";
        number++;
    }
    cout<<endl;
}



   return 0;
}