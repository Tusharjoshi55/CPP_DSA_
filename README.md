## [CPP_DSA_ ](https://tusharjoshi55.github.io/DSA_/)
A complete code log of my journey mastering C++ fundamentals and transitioning into advanced Data Structures &amp; Algorithms (DSA).


### CPP style formate
snake_case - used for exclusively for standard libraby and Namespace. (C++ official guidelines)
camelCase - used for local variable, functions and methodes name. 
PascalCasse - used for Classes, struct, enums and so on.
SCREAMING_SNAKE_CASE - used for constraint and macros.


### Google C++ Style Guide
Uses **PascalCase** for classes, **camelCase** for regular variables, snake_case for a few specific things, and trailing underscores for member variables (variable_).

```prerequisite basic knowledge of Cpp, Operators, Contitional Statements, Loops.```

### 1. String
> String is a sequence of character that represent character.
> C++ std::string defined in <string> header
> It wraps a dynamic array of characters, meaning it automatically handles memory management, resizing, and provides a rich set of built-in methods.  

```
#include<iostream>
#include<string>

int main(){
    // Initilization
    string greeting = "Hello, Wolrd !";


    // Concatanation
    string first = "Tushar";
    string last = "Joshi";
    string name = first + " " + last; // "Tushar Joshi"


    // Accessing Character by Index []
    char firstLetter = greeting[0] ;


    // Getting Length
    int len = greeting.length() 

return 0

}
```

#### String Function
* Size and capacity Function
    1. var.size() and var.length() = return length
    2. .empty() = return true and false
    3. .clear() = make string empty. ""
    4. .capacity() = return the allocated size
* Element accessing Function