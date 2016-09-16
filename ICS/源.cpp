#include <iostream>
using namespace std;

//2.60
unsigned replace_byte(unsigned x, unsigned char b, int i)
{
	return (x & ~(0xFF << (i << 3))) | (b << (i << 3));
}

//2.61
int func(int x)
{
	return (!(~x)) | !x | !~(x >> ((sizeof(int) - 1) << 3)) | !(x & 0xFF);
}

//2.65
int even_ones(unsigned x)
{
	int a = (x >> 16) ^ x;
	x = (a >> 8) ^ a;
	a = (x >> 4) ^ x;
	x = (a >> 2) ^ a;
	a = (x >> 1) ^ x;
	return (a & 1);
}

int main()
{
	cout << hex << replace_byte(0x12345678, 0xAB, 2);
	system("pause");
	return 0;
}