#include "type.h"

unsigned int is_valid_line(unsigned int *arr, unsigned int id)
{
    unsigned int start;
    unsigned int end;

    start = (id / SIZE) * SIZE;
    end = start + SIZE;
    while (start < end)
    {
        if (start != id && arr[start] == arr[id])
            return (!VALID);
        start++;
    }
    return (VALID);
}

unsigned int is_valid_col(unsigned int *arr, unsigned int id)
{
    unsigned int i;

    i = (id % SIZE) ;
    while (i < (SIZE * SIZE))
    {
        if (i != id && arr[i] == arr[id])
            return (!VALID);
        i += SIZE;
    }
    return (VALID);
}

unsigned int is_valid_grid(unsigned int *arr, unsigned int id)
{
    unsigned int start;
    unsigned int x;
    unsigned int c;

    c = 0;
    start = (id - (id % 3)) - (SIZE * ((id / SIZE) % 3));
    while (c < 3)
    {
        x = 0;
        while (x < 3)
        {
            if ((start + x) != id && arr[start + x] == arr[id])
                return (!VALID);
            x++;
        }
        start += SIZE;
        c++;
    }
    return (VALID);
}

unsigned int is_valid_entry(unsigned int *arr, unsigned int id)
{
    return (is_valid_col(arr, id) && is_valid_line(arr, id) && is_valid_grid(arr, id));
}
