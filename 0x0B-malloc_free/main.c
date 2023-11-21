#ifndef MAIN_H
#define MAIN_H

/* Creates an array of size 'size' initialized with char 'c' */
char *create_array(unsigned int size, char c);

/* Writes the character 'c' to stdout */
int _putchar(char c);

/* Duplicates a string 'str' */
char *_strdup(char *str);

/* Concatenates two strings 's1' and 's2' */
char *str_concat(char *s1, char *s2);

/* Allocates a 2D array of integers with 'width' and 'height' */
int **alloc_grid(int width, int height);

/* Frees a 2D grid with 'grid' having 'height' rows */
void free_grid(int **grid, int height);

/* Concatenates all the strings in 'av' with a newline between each string */
char *argstostr(int ac, char **av);

#endif
