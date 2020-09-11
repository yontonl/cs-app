#include <stdio.h>
#include <stdlib.h>

int is_little_endian() {
    int32_t x = 0x12345678;
    return *((int8_t *)&x) == 0x78;
}

int main() {
	printf("%d", is_little_endian());
	printf("\n");
	return 0;
}
