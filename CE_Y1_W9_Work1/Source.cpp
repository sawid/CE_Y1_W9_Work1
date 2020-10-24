#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char str[1000];
	int i = 0;
	scanf("%s", str);
	while (str[i] != '\0')
	{
		if ( (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '1' && str[i] <= '9'))
		{
			printf("%c", str[i]);
		}
		i++;
	}
}