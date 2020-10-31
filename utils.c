#include "type.h"
#include <unistd.h>

unsigned int get_strlen(char *str)
{
    unsigned int c;

    c = 0;
    while (str[c])
        c++;
    return (c);
}

void put_nbr(unsigned int nbr)
{
    char ch;
    if (nbr >= 10)
        put_nbr(nbr / 10);
    ch = (nbr % 10) + '0';
    write(1, &ch, 1);
}

void put_str(char *str)
{
    unsigned int c;

    c = 0;
    while (str[c])
        write(1, &str[c++], 1);
}

void print_sudoku(unsigned int *arr)
{
    unsigned int id;
    unsigned int c;
    unsigned int i;

    id = 0;
    c = 0;
    while (c < SIZE)
    {
        i = 0;
        while(i < SIZE - 1)
        {
            put_nbr(arr[id++]);
            write(1, " ", 1);
            i++;
        }
        put_nbr(arr[id++]);
        write(1, "\n", 1);
        c++;
    }
}
