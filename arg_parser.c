#include <stdlib.h>
#include <utils.h>


unsigned int *arg_parser(char *arg)
{
    unsigned int len;
    unsigned int *arr;
    unsigned int c;

    len = get_strlen(arg);
    c = 0;
    if  (!(arr = malloc(sizeof(unsigned int) * len)))
        return (NULL);
    while (arg[c])
    {
        if (arg[c] >= '1' && arg[c] <= '9')
            arr[c] = arg[c] - '0';
        else if (arg[c] == '.')
            arr[c] = 0;
        else
        {
            free(arr);
            return (NULL);
        }
        c++;
    }
    return (arr);
}
