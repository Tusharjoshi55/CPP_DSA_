#include<iostream>

//Namespace are mainly used to Prevents naming conflicts and organizes code.
//Avoid using namespace std; in header files (.h) or large projects; stick to explicit prefixes (std::) or specific imports (using std::cout;).
namespace array{

//Iterate through array with help of for loop;
//focus here for array only
    void forArray(){
        int arr[5], val;
        for(int i = 0; i< 5; ++i){
            std::cout << "Enter the element of array : ";
            std::cin >> val;
            arr[i] = val;
        }
        std::cout<< "[ ";
        for(int i = 0; i< 5; ++i){
            std::cout <<arr[i]<< " ," ;
        }
        std::cout<< " ]";
    }
}




int main(){
    array::forArray();
    return 0;
}