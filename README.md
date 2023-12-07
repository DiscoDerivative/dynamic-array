# Dynamic Array
C program that dynamically allocates the size of a string based on the input.

## Function
### getStringSize
Stores the size of the function argument string.

### Parameters
#### string
A pointer containing a string to be used in conjuction with the function reallocateSize.

### Return value
A program success will result in a return value of the size of the string as an integer.

## Function
### reallocateSize
Reallocates the memory of the string from the default value (30) to the actual size at runtime.

Creates a temporary pointer to hold the reallocated memory for the string. If the temporary pointer is NULL, it deletes the memory held in the heap used by string pointer.
Otherwise, the string pointer will hold the reallocated memory; the correct amount of bytes the dereferenced string pointer has.

### Parameters
#### string
A pointer that holds the string entered at runtime. 

#### size
The size of the string.

### Return Value
On success of the program, it will return the string pointer that holds the reallocated memory.

#### Author Notes

I will include support for other data types such as int, float, double and structs.
I hope to make this a C library so other people can use this as well.
