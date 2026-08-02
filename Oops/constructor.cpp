#include<iostream>
#include<string>
#include<sstream>

using namespace std;

class Student{
    private:
    int age, standard;
    string name;

    

    public:

    Student() // Constructoro
    {
        cout<<"This is student";
    }
    Student(string name, int age, int standard){ //paramertizer constructor 
      
        this->name = name;
        this->age =age;
        this->standard=standard;
    }


    // setter and getter function for Student class
    string get_details(){
        stringstream result;

        result << "Name : " << name << "\n"
        << "Age : " << age << "\n"
        << "Standard : " << standard;
        
        return result.str();
    }

};


int main(){
    Student s("tushar", 23, 5);
    string d = s.get_details();
    cout<<d;
    return 0;
}