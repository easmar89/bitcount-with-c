#include <assert.h>
#include <stdio.h>

int bitcount(unsigned int num) {
	int count = 0;

	while(num){
		if ((num & 0x01) == 1) {
			count++;
		}
		num >>= 1;
	}

	return count;
}

int main() {

	assert(bitcount(0) == 0);
    assert(bitcount(1) == 1);
    assert(bitcount(3) == 2);
    assert(bitcount(8) == 1);
    assert(bitcount(0xffffffff) == 32);
    printf("OK\n");
}
