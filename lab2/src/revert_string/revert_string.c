#include "revert_string.h"
#include <string.h>
#include <stdlib.h>

void RevertString(char *str)
{
	char *buf = malloc(sizeof(char) * (strlen(str) + 1));
	strcpy(buf, str);
	for(int i = 0; i < strlen(buf); i++)
	{
		str[i] = buf[strlen(buf) - i - 1];
	}
	str[strlen(str)] = '\0';
}

