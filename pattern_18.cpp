//pattern :-)
// 1 
// 0 1 
// 0 1 0 
// 1 0 1 0 
// 1 0 1 0 1

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter the number : ";
    cin>>n;

 // for every even row it starts with 1 ; 
 
 int start =1 ;

// loop for rows : 
 for(int i=0;i<n;i++){
    if(i%2==0){
        start=1;
    }
    else{
        start=0;
    }
 }

 // now we want to print pattern in right angle triangle format 
 for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        cout<<start<<" ";
        start=1-start;  // this will help to print alternate 1 and 0

    }
    cout<<endl;

}

    return 0;
}
