# Programming assignment in C: Linked-List Xtensions

Second programming assignment for learning C as a second programming language. 

## Requirements
1. C language.
   The assignment consists of writing a working program in the C programming language.
   
2. Linked list.
   Use your code from the [C pointer exercises assignment](https://github.com/ivogeorg/c-pointer-exercises.git) as a basis. It's assumed that you have a linked list of integers, that is, the data in each node is a single `int`. Then, choose **ONE** of the following extensions (difficulty level in square brackets):
   - [2] Doubly-linked list of integers with insert function 

     Convert the singly-linked list into a doubly-linked list. The elements of a doubly-linked list are connected in both directions, so it can be traversed from the `head` toward the `tail` and from the `tail` toward the `head`. Modify the `list_insert` function to match.

   - [2] Delete for singly-linked list of integers
   
     Extend your singly-linked `int` list with a `list_delete` function, which deletes the first node which matches the data argument.

   - [3] Structure data base type with comparison function for structure type
   
     Create a singly- or doubly-linked list with a `struct` data type. Provide as an argument a `node_compare` function that works for this `struct` type the way the numerical comparison operators (`<`, `<=`, `>=`, `>`, `==`, and `!=`) work for numeric primitive types. Provide a `list_insert` function that preserves the order of the list.
     
   - [4] Structure of strings data base type with comparison function
   
     Create a singly- or doubly-linked list with a `struct` data type. The `struct` should contain *C-style strings*. Provide as an argument a `node_compare` function that works for this `struct` type the way the numerical comparison operators (`<`, `<=`, `>=`, `>`, `==`, and `!=`) work for numeric primitive types. Provide a `list_insert` function that preserves the order of the list.

3. Github.
   1. Fork this repository.
   2. Clone the remote to your local development environment.
   3. Implement and ensure your program is working correctly.
   4. Commit your changes.
   5. Push your commits to the remote, to submit your assignment.
   
4. Project description.
   You need to state which extension you picked and describe your implementation, in the provided section below.
   
   
## Project description

### Extension

Structure of strings data base type with comparison function

### Implementation notes
struct person:
    Defining the struct as a persons name (c-style string) and their age type int

struct Node:
    Define the Node singly linked and with a ddata type person

new_node
    take the data as an argument (name, age) make space in memory. add the data to the
    node and set the next pointer to NULL

print_list function
    takes a pointer to the head of the list as an argument and iterates through
    the list printing the name and age. loops while the pointer does not point to null

compare_nodes
    functions takes a two pointers to nodes as arguments and compares the name in each node
    by using the strcmp(). the function just adds to the strcmp() function by doing the same with
    two nodes and returning in the same manor.

 list_insert
    (*head_ptr == NULL || compare_nodes(*head_ptr, new_ptr) > 0)
    first check is if the list is empty or if the new node name is first alphabetically
    if so the head pointer is set to point to the new node.
    if the list has more then node the it will traverse the list while the next node is
    before the current node alphabetically once it get to the node the is after the current
    node it inserts by making the current node point to the new node then points the new
    node to the next node.

 Main
    uses the List_Node header file to build a linked list. prints the list and
    frees up the memory used to build the list




