#include<iostream>
using namespace std;

namespace ptr{
    int *p, a;

    void changeValue(){
        
        cout <<"Enter a value : ";

        cin>>a;
        p = &a;
        cout << "\nP : " << p;      
        cout << "\n*P : " << *p;
        cout << "\nA : " << a;
        cout << "\n&A : " << &a;
    }
}

int main(){

    int val = 9, *ptr, **p;
    ptr = &val;
    p = &ptr;

    cout << "\nVal : " << val;      
    cout << "\n&val : " << &val;
    cout << "\nPtr : " << ptr;
    cout << "\n*Ptr: " << *ptr;
    cout << "\n**P : " << **p;
    cout << "\n&P : " << p;
    cout << "\n&Ptr : " << &ptr;
    


    return 0;
}