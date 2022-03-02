#include <stdio.h>

int main(void)
{
	int a = 0x01020304;
	printf("%02x %02x %02x %02x\n",
		*((char*) &a),
		*((char*) &a + 1),
		*((char*) &a + 2),
		*((char*) &a + 3));

	return 0;
}
