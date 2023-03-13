#include <unistd.h> 
 
/** 
 * 0_putchar: writes the character c to stdout 
 * c: The character to print 
 * Return: 1 (success) 
 * Return -1 on error and errno succesfully
 *
 */ 
int _putchar(char c) 
{ 
 return (write(1, &c, 1)); 
} 

