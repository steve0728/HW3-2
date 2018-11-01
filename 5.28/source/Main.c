#include <stdio.h> 
#include<stdlib.h>	


int main() {
	char a = ' ', b = ' ';
	printf("input letters:");
	scanf_s("%c", &a);

	if (a < 91) {
		b = a + ('a' - 'A');
		printf("%c\n", b);
	}
	else if (a > 96) {
		b = a - ('a' - 'A');
		printf("%c\n", b);
	}
	system("pause");
	return 0;

}