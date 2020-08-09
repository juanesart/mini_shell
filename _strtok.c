#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *_strtok(char *str, const char *delim)
{
	static char *aux;/*aux string var*/
	int ch;/* character in ASCII*/

	if (str == 0)/*1. if str position is 0*/
	str = aux;/*2. str gets stored in aux var */
	do {
	if ((ch = *str++) == '\0') /*3. Do if (ch is equal to position of *str and after increment by 1) == to '\0' return 0*/
		return 0;
	} while (strchr(delim, ch));/*4. while ch has an ocurrence in delim*/
	--str;/*5. str goes back so it will get the entire chunk of string*/
	aux = str + strcspn(str, delim); /*6. aux pointer will change position to the number returned by strcspn */
	if (*aux != 0) /*7. asks if aux pointer is different than NULL*/
		*aux++ = 0; /*8.assings NULL to current position and increments after*/
		return str; /*9. returns chunk of string*/
}
