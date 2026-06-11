#include<iostream>

int main(){
    int num, i=0;
    std::cout<<"Enter number for table : ";
    std::cin>>num;

    while(i<=10){
        std::cout<< i+1 << " * "<< num <<" = "<< (i+1)*num<<"\n";
        ++i;
    }
    return 0;
}