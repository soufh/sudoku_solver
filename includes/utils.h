#ifndef UTILS_H
# define UTILS_H
unsigned int get_strlen(char *str);
unsigned int is_valid_entry(unsigned int *arr, unsigned int id);
void print_sudoku(unsigned int *arr);
void put_str(char *str);
unsigned int *arg_parser(char *arg);
#endif
