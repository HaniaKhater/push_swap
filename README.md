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

## Credits

This program was implemented by Hania Khater. The project instructions were provided by 42 School.
