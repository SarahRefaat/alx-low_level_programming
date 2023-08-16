#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * this is the function to check the c if it is a char or not
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
