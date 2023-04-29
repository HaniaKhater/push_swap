# Push Swap

This is an implementation of the push swap sorting algorithm in C for the 42 School curriculum. The program receives a list of integers as input, and its goal is to sort it using two stacks (stack A and stack B) and a limited set of operations:

- `sa`: swap the first two elements of stack A.
- `sb`: swap the first two elements of stack B.
- `ss`: do `sa` and `sb` simultaneously.
- `pa`: take the first element from stack B and put it on top of stack A.
- `pb`: take the first element from stack A and put it on top of stack B.
- `ra`: rotate stack A (send top element to bottom).
- `rb`: rotate stack B (send top element to bottom).
- `rr`: do `ra` and `rb` simultaneously.
- `rra`: reverse rotate stack A (send bottom element to top).
- `rrb`: reverse rotate stack B (send bottom element to top).
- `rrr`: do `rra` and `rrb` simultaneously.

The program should output a list of instructions that can be used to sort the input list using the above operations.

## Installation

`git clone https://github.com/HaniaKhater/push_swap.git`<br>
`cd push_swap`<br>
`make`<br>


## Usage

`./push_swap [integer list]`

Example:
```
./push_swap "4 67 -1 3 99"
```

The program will output the list of instructions that can be used to sort the input list.

## Implementation

The program uses two stacks, stack A and stack B, to sort the input list. The algorithm has two phases: the first phase consists of pushing a part of the input list to stack B in a way that stack B is sorted in descending order. The second phase consists of pushing the elements back to stack A in ascending order using stack B as an intermediary.

### Phase 1

1. The program starts by finding the median value of the input list.
2. It then pushes all values greater than or equal to the median to stack B, and all values less than the median to stack A.
3. It then repeats step 1 and 2 for the remaining unsorted parts of the input list until all values are on stack B and the stack is almost sorted in descending order.

### Phase 2

1. The program starts by finding the smallest value on stack B and rotating stack B until that value is at the top.
2. It then pushes that value to stack A.
3. It repeats step 1 and 2 until stack B is empty.
4. It then rotates stack A until the smallest value is at the top, and repeats steps 2 and 3 until stack A is sorted in ascending order.

## Code Flow

The `push_swap` program consists of several functions distributed over multiple files. Here is the flow of the program in terms of functions:

* `main()` (push_swap.c): This is the entry point of the program. It reads the input arguments, validates them, and calls the `push_swap()` function to sort the stack.

* `push_swap()` (push_swap.c): This function takes the input stack as an argument and sorts it using the appropriate algorithm. It uses a series of helper functions to perform the sorting operations, including `sort_three()`, `sort_five()`, and `sort_stack()`.

* `sort_three()` (sort_three.c): This function is used to sort a stack of three elements using the appropriate set of operations.

* `sort_five()` (sort_five.c): This function is used to sort a stack of five elements using the appropriate set of operations. It calls `sort_three()` internally to sort subsets of the stack.

* `sort_stack()` (sort_stack.c): This function is used to sort a stack of any size using the appropriate set of operations. It breaks down the sorting process into a series of sub-problems and calls various helper functions to perform the necessary operations.

* `apply_operation()` (apply_operation.c): This function takes an operation (such as "sa" or "rra") and applies it to the given stack.

* `stack_ops()` (stack_ops.c): This file contains a collection of functions that perform various stack operations, such as rotating or swapping the top elements of the stack.

* `stack_utils()` (stack_utils.c): This file contains a collection of utility functions used throughout the program, such as functions for initializing, printing, or checking the state of the stack.

* `error_handling()` (error_handling.c): This file contains functions used for error handling, such as reporting invalid input or memory allocation errors.

Overall, the program flow consists of reading the input, validating it, sorting the stack using appropriate algorithms based on its size, and outputting the sorted stack to standard output.

## Credits

This program was implemented by Hania Khater. The project instructions were provided by 42 School.
