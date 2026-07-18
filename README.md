# HashSet Implementation in C

This project implements a simple hash set in C using a hash table with separate chaining for collision handling.

## Features

- Creates a hash set
- Adds elements to the set
- Removes elements from the set
- Checks whether an element exists
- Displays all stored elements
- Deletes the hash set and frees memory

## Project Files

- `HashSet.c` - Contains the implementation of the hash set operations
- `header.h` - Declares the structures and function prototypes
- `main.c` - Demonstrates basic usage of the hash set

## How to Build

Compile the program with GCC:

```bash
gcc main.c HashSet.c -o hashset_demo
```

## How to Run

```bash
./hashset_demo
```

## Example Behavior

The sample program adds several integers to the set, displays them, removes one value, adds it again, and then deletes the set.

## Notes

- The hash table size is defined as `1009` in the header file.
- This implementation stores integers and uses linked lists at each table index to handle collisions.
