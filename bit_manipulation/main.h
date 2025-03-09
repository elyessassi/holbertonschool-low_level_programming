#ifndef BIT
#define BIT

unsigned int binary_to_uint(const char *b);
int power(int x, int y);
int strlength(const char *s);
void print_binary(unsigned long int n);
int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);
int binary_length(unsigned long int n);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);


#endif
