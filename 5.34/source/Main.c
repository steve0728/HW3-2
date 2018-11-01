#include<stdio.h>
#include<stdlib.h>

int integerPower(int base, int exponent);

int main(){
	int x, y;
	scanf_s("%d %d", &x, &y);

	printf("%d", integerPower(x, y));

	system("pause");
	return 0;


}
int  integerPower(int a, int b)
{
	if (b<0) return 0;
	return (b == 0) ? 1 : a*integerPower(a, b - 1);
}
