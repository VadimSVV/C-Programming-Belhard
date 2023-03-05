#include <windows.h>

char *rus(char *text);
char bufrus[255];

char *rus(char *text)
{
	CharToOemA(text, bufrus);
	return bufrus;
}
