#include<iostream>

using namespace std;

int main(){
    int arr[2][3];
    //Because you wrote (*ptr)[3], it knows a row has 3 integers and it jumps exactly 3 * sizeof(int) bytes forward. because it is the size of a row.
    int (*ptr)[3];

    ptr= arr;

    cout<<ptr<<"\n";



    return 0;
}