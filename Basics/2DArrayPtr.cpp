#include <iostream>
#include <iterator> // Required for modern C++ std::size()

using namespace std;

// ============================================================================
// SECTION 1: 1D ARRAY DECAY DEMONSTRATION
// ============================================================================

/**
 * Crucial Lesson: Array Decay
 * Even though the parameter looks like an array 'int arr[]', the compiler 
 * secretly rewrites it to a pointer 'int* arr'. 
 */
void demonstrateArrayDecay(int arr[]) {
    cout << "--- INSIDE FUNCTION (Array Decay) ---\n";
    
    // 1. Size changes! It prints the size of the pointer (8 bytes on 64-bit systems), 
    // NOT the size of the original 5-integer array (20 bytes).
    cout << "sizeof(arr) inside function : " << sizeof(arr) << " bytes (Pointer Size)\n";
    
    // 2. 'arr' holds the address value passed from main. It points directly to the array.
    cout << "Value stored inside 'arr'   : " << arr << " (Address of actual array)\n";
    
    // 3. '&arr' gives you the stack address of this local pointer variable itself.
    // That is why this address matches nothing in main()!
    cout << "Address of local pointer &arr: " << &arr << " (Temporary stack slot)\n\n";
}


// ============================================================================
// SECTION 2: MAIN PROGRAM & 2D ARRAY MATH
// ============================================================================

int main() {
    // ------------------------------------------------------------------------
    // Part A: 1D Array Basics & Function Testing
    // ------------------------------------------------------------------------
    int array1D[] = {1, 2, 3, 4, 5};
    
    cout << "====================================================\n";
    cout << "1D ARRAY & MEMORY THEORY\n";
    cout << "====================================================\n";
    cout << "sizeof(array1D) in main     : " << sizeof(array1D) << " bytes (5 ints * 4 bytes)\n";
    cout << "Actual array address (&array1D): " << &array1D << "\n\n";
    
    // Run the decay check
    demonstrateArrayDecay(array1D);


    // ------------------------------------------------------------------------
    // Part B: 2D Array Navigation (The Core Math)
    // ------------------------------------------------------------------------
    // arr is 2 rows by 3 columns. 
    // In physical memory, this is flat: [1][2][3][4][5][6]
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    
    cout << "====================================================\n";
    cout << "2D ARRAY POINTER ARITHMETIC\n";
    cout << "====================================================\n";

    // 1. Row Jumps (Outside Parentheses)
    // 'arr' is a pointer to an array of 3 ints. Adding 1 jumps by a whole row (12 bytes).
    cout << "Address of Row 0 (arr)      : " << arr << "\n";
    cout << "Address of Row 1 (arr + 1)  : " << (arr + 1) << " <-- Jumps 12 bytes forward\n\n";

    // 2. Element Jumps (Inside Parentheses)
    // '*arr' drops the type down to a single integer pointer (int*). Adding 1 jumps by 4 bytes.
    cout << "Address of Row 0, Ele 0 (*arr)    : " << *arr << "\n";
    cout << "Address of Row 0, Ele 1 (*arr + 1): " << (*arr + 1) << " <-- Jumps only 4 bytes forward\n\n";

    // 3. Accessing Row 0 (First Row)
    // Formula: *(*(arr + row) + col)
    cout << "--- Row 0 Element Access ---\n";
    cout << "Row 0, Element 0: " << *(*(arr + 0) + 0) << "  (Shortcut: **arr)\n";
    cout << "Row 0, Element 1: " << *(*(arr + 0) + 1) << "  (Shortcut: *(*arr + 1))\n";
    cout << "Row 0, Element 2: " << *(*(arr + 0) + 2) << "  (Shortcut: *(*arr + 2))\n\n";

    // 4. Accessing Row 1 (Second Row)
    cout << "--- Row 1 Element Access ---\n";
    cout << "Row 1, Element 0: " << *(*(arr + 1) + 0) << "  (Shortcut: **(arr + 1))\n";
    cout << "Row 1, Element 1: " << *(*(arr + 1) + 1) << "\n";
    cout << "Row 1, Element 2: " << *(*(arr + 1) + 2) << "\n\n";


    // ------------------------------------------------------------------------
    // Part C: Crucial Warnings & Pitfalls
    // ------------------------------------------------------------------------
    cout << "--- Pitfall Warnings ---\n";
    
    // Warning 1: Value Arithmetic vs Pointer Arithmetic
    // **arr fetches the number 1. **arr + 1 mathematically updates it to 2. It does NOT move memory locations.
    cout << "**arr + 1 results in     : " << (**arr + 1) << " (Value 1 + 1, not index shift!)\n";
    
    // Warning 2: Double dereferencing single pointers
    // (*arr + 1) points to a single integer. You CANNOT use double asterisks (**(*arr + 1)) 
    // because you cannot dereference a normal integer variable. It causes a compilation error!
    cout << "Correct lookup format is always: *(*arr + 1) to get the value: " << *(*arr + 1) << "\n\n";


    // ------------------------------------------------------------------------
    // Part D: Automated Navigation using Loops
    // ------------------------------------------------------------------------
    cout << "--- Matrix Output Using Pointer Expressions ---\n";
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            // This maps perfectly to arr[i][j]
            cout << *(*(arr + i) + j) << " ";
        }
        cout << "\n";
    }
    cout << "====================================================\n";

    return 0;
}
