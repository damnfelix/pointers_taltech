//#include <iostream>
//#include <conio.h>
//#include <stdlib.h>
//
//char* Reverse(char*);
//char* CreateRandomString(int n);
//int LengthString(char*);
//
//int main()
//{
//
//	char* pc = CreateRandomString(30);
//	printf("Before formating: %s\n", pc);
//	pc = Reverse(pc);
//	printf("After formating: %s", pc);
//
//
//    return 0;
//}
//
//
//
//char* Reverse(char* string) {
//	int length = LengthString(string) + 1;
//	
//	
//	char *pResult = (char*) malloc(length);
//
//	
//	for (int i = 0, j = length - 2; i < length - 1; i++, j--) {
//		*(pResult + i) = *(string + j);
//	 }
//	*(pResult + length-1) = '\0';
//	return pResult;
//
//}
//
//char* CreateRandomString(int n) {
//	const char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
//	char* pResult = (char*)malloc(n + 1);
//	for (int i = 0; i < n; i++) {
//		*(pResult + i) = alphabet[rand() % 26];
//	}
//	*(pResult + n) = 0;
//	return pResult;
//}
//
//int LengthString(char* string) {
//	int k = 0; 
//	while (*(string + k) != '\0') {
//		k++;
//	}
//	return k;
//}
//
