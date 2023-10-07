#include "revert_string.h"

void RevertString(char *str)
{
	int length=strlen(str);
	for(int i=0;i<length/2;i++){
		char symbol = str[i];
		str[i]=str[length-i-1];
		str[length-i-1]=symbol;
	}
}

