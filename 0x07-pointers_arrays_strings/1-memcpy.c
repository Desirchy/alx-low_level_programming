#include "main.h"                                                                                                                             

/**                                                                                                                                           
 *
 *  *_memset - fills memory with a constant byte.                                                                                                
 *
 *   * @s: source string                                                                                                                          
 *
 *    * @b: the constant byte for filling                                                                                                          
 *
 *     * @n: length of buffer                                                                                                                       
 *
 *      * Return: new string                                                                                                                         
 *
 *       */                                                                                                                                                                                                                 

char *_memcpy(char *dest, char *src, unsigned int n);                                                                                                
{                                                                                                                                             
	                unsigned int i = 0;

			while (i < n)
			{
				*(dest + i) = *(scr + i);
				i++
			}
			return (dest);
}
