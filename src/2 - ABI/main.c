#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <assert.h>

#include "../test-utils.h"
#include "ABI.h"

int main() {
	/* Acá pueden realizar sus propias pruebas */
	//assert(alternate_sum_4_using_c(8, 2, 5, 1) == 6);

	//assert(alternate_sum_4_using_c_alternative(8, 2, 5, 1) == 6);
	uint32_t *destination = (uint32_t*)malloc(sizeof(uint32_t));
	double *destination2 = (double *)malloc(sizeof(double));

	assert(alternate_sum_8(100, 2, 3, 4, 5, 6, 7, 8) == 95);
	product_2_f(destination,32,0.25);
	assert(*destination == 8);

	//multiply all floats 3.6342450144000006e-06
	//multiply all ints 33522128640
	product_9_f(destination2, 11,0.21,12,0.22,13,0.23,14,0.24,15,0.25,16,0.26,17,0.27,18,0.28,19,0.29);
	assert(*destination2 == 121827.628881995452416);

	free(destination);
	free(destination2);
	destination = NULL;

	return 0;
}
