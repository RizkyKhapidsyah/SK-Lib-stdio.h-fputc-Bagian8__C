#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
	Source by Microsoft (https://docs.microsoft.com/en-us/cpp)
	Modified For Learn by RK
	I.D.E : VS2022
*/

int main() {
	char strptr1[] = "Ini adalah program percobaan dari fputc!!\n";
	char* p;

	p = strptr1;

	while ((*p != '\0') && fputc(*(p++), stdout) != EOF);

	_getch();
	return 0;
}