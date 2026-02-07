#include <stdio.h> // printf, scanf_s, fopen, FILE, stdin/stdout/stderr etc.
#include <stdlib.h> // malloc, free, exit, atoi, qsort etc.

int main(void) {
	// vis == FOR ILLUSTRATION ONLY; DOES NOT REPRESENT REAL-TIME ALLOCAITON
	// vis (conceptual): allocator stores metadata before pi/pd and
	// malloc returns address of allocated memory

	malloc(4); // reserves 4 bytes in the heap
	//vis |00|00|00|08|(8 bytes saved following number), |00|00|00|00| (4 Bytes reserved), |EE|EE|EE|EE| (memory remaining | 4 bytes to display | random hex as example)

	malloc(5); // reserves 8 bytes in the heap (only multiples of 4)
	//vis 00 00 00 0C (12 bytes saved following number) , 00 00 00 00 00 00 00 00 (8 Bytes reserved), EE EE EE EE (memory remaining | 4 bytes to display | random hex as example)

	printf("int is %zu bytes\n", sizeof(int));
	printf("double is %zu bytes\n", sizeof(double));

	malloc(sizeof(int)); // allocates just enough space for int (4 bytes)
	// vis |00|00|00|08|, |00|00|00|00|, |EE|EE|EE|EE| (indivudual sim)

	malloc(sizeof(double)); // allocates just enough space for double (8 bytes)
	// vis |00|00|00|0C|, |00|00|00|00|00|00|00|00|, |EE|EE|EE|EE| (individual sim)

	// incorporating both into same call
	malloc(2*sizeof(int));
	// vis |00|00|00|0C|, |00|00|00|00|00|00|00|00|, |EE|EE|EE|EE|

	malloc(2*sizeof(double)); // combined below
	// vis |00|00|00|0C|, |00|00|00|00|00|00|00|00|, |00|00|00|18|, |00|00|00|00|00|00|00|00|00|00|00|00|00|00|00|00|, |EE|EE|EE|EE|

	// in order to access this memory, need to access the address location
	// good practice to cast to the correct data type to help malloc
	int* p_int = (int*)malloc(sizeof(int));
	double* p_double =(double*) malloc(sizeof(double));

	*p_int = 741;
	*p_double = 3.14;

	printf("p_int = %d\n", *p_int);
	printf("p_double = %.2lf\n", *p_double);

	return 0;
}