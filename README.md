# HashMap Implementation in C

This project implements a simple hash map in C using a hash table with separate chaining for collision handling.

## Features
- Creates a hash map with a fixed table size
- Inserts key-value pairs
- Removes existing keys
- Checks whether a key exists
- Displays all stored entries
- Frees all allocated memory

## Project Files
- `main.c` - Demonstrates basic usage of the hash map
- `hashMap.c` - Implements the hash map functions
- `header.h` - Declares the structures and function prototypes

## How to Build
Compile the program with GCC:

```bash
gcc main.c hashMap.c -o hashmap
```

## How to Run

```bash
./hashmap
```

## Example Behavior
The sample program adds several key-value pairs, displays them, removes some entries, and then deletes the hash map.

## Notes
- The hash table size is defined as `1009` in the header file.
- This implementation stores integers and uses linked lists at each table index to handle collisions.

