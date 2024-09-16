// // Pointer:- Definition: A pointer is a variable that holds the memory address of another variable.
// // Uses:
// // Dynamic memory allocation
// // Array handling
// // Efficient passing of variables to functions
// // Data structures like linked lists, trees, etc.


// // Pointer Declaration:

// // Syntax: data_type *pointer_name;
// // Example: int *ptr;
// // Assigning the address of a variable:
// // ptr = &variable;
// // Example: If int x = 10;, then ptr = &x; will assign the address of x to ptr.



// // Pointer Dereferencing:

// // Dereferencing a pointer allows you to access the value stored at the memory location.
// // Syntax: *pointer_name;
// // Example: int x = 10; int *ptr = &x; printf("%d", *ptr); will print the value 10.



// Pointer Arithmetic:

// You can perform arithmetic operations on pointers to navigate through memory.
// Increment (ptr++), decrement (ptr--), and scaling based on data type.
// Pointer to Pointer:

// A pointer that stores the address of another pointer.
// Syntax: data_type **ptr2;
// Example: int **ptr2 = &ptr;
// Pointers and Arrays:



// Pointers can be used to iterate through arrays.
// Example: int arr[5] = {1, 2, 3, 4, 5}; int *ptr = arr;
// Pointers and Functions:



// Passing pointers to functions to modify arguments.
// Example: Swapping two values using pointers.
// Dynamic Memory Allocation:



// Use of malloc, calloc, and free to allocate and deallocate memory dynamically.
// Pointer vs Array:



// Understanding the difference between pointers and arrays.
// Void Pointers and NULL Pointers:



// Void pointers: General-purpose pointer (void *ptr), can hold the address of any data type.
// NULL pointers: Special pointer with a reserved address indicating it points to nothing.
