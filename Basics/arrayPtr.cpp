#include<iostream>

using namespace std;


void test(int arr[]){
 cout<< "\nArray size : "<< sizeof(arr);
 cout<< "\naddress of array : "<< arr;
 cout<<"\nValue at index 0 : "<<arr[4];
   
}
int main(){


    int arr[] = {1, 2, 3, 4, 5};
    cout<< "Array size : "<< sizeof(arr);
    cout<<"\nValue at index 0 : "<<arr[4];
    cout<< "\naddress of array : "<< &arr<<"\n";
    test(arr);

    return 0;
}
//theory for array pointers
// 1. Array Decay to Pointer
// When you declare an array like int arr[] = {1, 2, 3, 4, 5};, the compiler allocates a continuous block of memory for 5 integers.
// However, C++ cannot pass an entire block of memory (an array) directly into a function by value. Instead, the array decays into a pointer.
// -The Rule: When passed to a function, the array name automatically converts into a pointer to its first element (&arr[0]).
// -The Function Signature: Even though you wrote void test(int arr[]), the compiler secretly rewrites it to void test(int* arr).

// 2. Understanding Memory Levels (The "Why")
// To understand why arr and &arr gave different results inside the function, look at how variables work at a hardware level:   
// -Inside main()arr is an identifier for the literal sequence of integers on the stack.
// -&arr means "Give me the starting memory location of this sequence." 

// Inside test(int arr[])arr is a brand-new pointer variable created on the stack just for this function.
// -This pointer variable takes up its own memory space (usually 8 bytes on 64-bit systems).
// -The Value inside it: The pointer holds the memory address of the original array from main().
//  Therefore, printing arr prints that target address.
// -The Address of it: &arr means "Give me the memory location where this pointer variable itself is sitting."
//  This is why &arr in test() gives a completely different address than main().

