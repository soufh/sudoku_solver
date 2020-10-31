# sudoku_solver
Sudoku game made for the past Rush 01 of 42 Born2Code

# How to use this
1. First you need to compile it using makefile
2. Then a binary named "sudoku" will be created for you for which you give input from the standard input.

The input format are such :
example : "9...7...." "2...9..53" ".6..124.." "84...1.9." "5.....8.." ".31..4..." "..37..68." ".9..5.741" "47......."
Its nine strings in which container nine character between 1 to 9 plus dot (.).

the output format is Such:
example :

9 1 4 3 7 5 2 6 8
2 8 7 4 9 6 1 5 3
3 6 5 8 1 2 4 7 9
8 4 6 5 2 1 3 9 7
5 2 9 6 3 7 8 1 4
7 3 1 9 8 4 5 2 6
1 5 3 7 4 9 6 8 2
6 9 8 2 5 3 7 4 1
4 7 2 1 6 8 9 3 5

if none solution are found a message will be printed.
