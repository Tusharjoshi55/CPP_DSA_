#include<iostream>

//Normal for Lop

void normalForLoop(){
    //Variable decleration
    int number; 

    // I/O
    std::cout << "Enter the number for Table : ";
    std::cin >> number;


    //One variable for Loop and normal for loop
    for(int i = 0; i < 10 ; ++i){
        std::cout<< number<< " X = " <<number*(i+1)<< std::endl ; 
    }
}




int main(){
    normalForLoop();

    return 0;
}