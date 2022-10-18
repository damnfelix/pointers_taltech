#include <iostream>
#include <conio.h>
#include <stdlib.h>

char* ReformatName(char*);
char* CreateRandomName(int n1, int n2);
int LengthString(char*);


int main() {
	char* pc = CreateRandomName(11, 6);
	printf("Before: %s\n", pc);
	pc = ReformatName(pc);
	printf("After: %s\n", pc);
}

char* ReformatName(char* string)
{
	int length = LengthString(string) + 1;
	char* pResult = (char*)malloc(length + 2);
	for (int i = 0, k = 0, l = 0;  k<length; i++, k++)
	{
		if (*(string + i) == 32) {
			k = 0;
			i++;
		}
		*(pResult + k) = *(string + i);
		if (*(string + i) == '\0') {
			i = 0;
			*(pResult + k) = ',';
			*(pResult + k + 1) = ' ';
			k+=2;
		}
		*(pResult + k) = *(string + i);
		

		
	}
	
	

	
	
	*(pResult + length) = '\0';

	return pResult;
}

char* CreateRandomName(int n1, int n2)
{ // n1 – length of given name, n2 – length of family name
	if (n1 <= 0 || n2 <= 0)
	{
		return 0;
	}
	const char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	char* pResult = (char*)malloc(n1 + n2 + 2); // names + space + terminating 0
	for (int i = 0; i < n1; i++)
	{
		*(pResult + i) = alphabet[rand() % 26]; // given name
	}
	*pResult = toupper(*pResult); // must start with uppercase letter
	*(pResult + n1) = ' ';
	for (int i = 0; i < n2; i++)
	{
		*(pResult + n1 + 1 + i) = alphabet[rand() % 26]; // family name
	}
	*(pResult + n1 + 1) = toupper(*(pResult + n1 + 1)); // must start with uppercase letter
	*(pResult + n1 + n2 + 1) = 0; // terminating zero
	return pResult;
}
int LengthString(char* string) {
	int k = 0; 
	while (*(string + k) != '\0') {
		k++;
	}
	return k;
}