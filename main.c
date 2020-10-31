#include "type.h"
#include "utils.h"
#include <stdlib.h>
#include <stdio.h>

unsigned int solve(unsigned int *arr, unsigned id)
{
    unsigned int val;

    if (id >= (SIZE * SIZE))
        return (VALID);
    else if(arr[id] > 0)
        return (solve(arr, id + 1));
    val = 1;
    while (val < (SIZE + 1))
    {
        arr[id] = val;
        if (is_valid_entry(arr, id) && solve(arr, id + 1))
                return (VALID);
        val++;
    }
    arr[id] = 0;
    return (!VALID);
}

int main(int argc, char **argv)
{
    unsigned int *sudoku;
    unsigned int c;
    unsigned int *line;
    unsigned int i;
    unsigned int id;

    if (argc != (SIZE + 1))
    {
        put_str(NUMBER_ARG_ERR);
        return (0);
    }
    if (!(sudoku = malloc(sizeof(unsigned int) * (SIZE * SIZE))))
        return (0);
    c = 0;
    id = 0;
    while (c < SIZE)
    {
        if (!(line = arg_parser(argv[c + 1])))
            return (0);
        i = 0;
        while (i < SIZE)
            sudoku[id++] = line[i++];
        free(line);
        c++;
    }
    if(solve(sudoku, 0))
        print_sudoku(sudoku);
    else
        put_str("No solution found\n");
    return (0);
}
