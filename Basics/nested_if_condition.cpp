#include<iostream>
using namespace std;


// Among two no. which is greater
int main(){
    int n1, n2, n3;
    cout<<"Enter no. one :";
    cin>>n1;
    cout<<"Enter no. Two :";
    cin>>n2;
    cout<<"Enter no. Three :";
    cin>>n3;

    //Logic of checking which no. is greater
    if(n1>n2){
        if(n1>n3){
             cout<<"Greater no : "<<n1;
        }
        else{
             cout<<"Greater no : "<<n3;
        }
    }
    else{
        if(n2>n3){
             cout<<"Greater no : "<<n2;
        }
        else{
             cout<<"Greater no : "<<n3;
        }
    }

    return 0;
}