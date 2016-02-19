/***
  ** ADAPTED AND UPDATED EXAMPLE FROM
  ** http://heather.cs.ucdavis.edu/~matloff/UnixAndC/CLanguage/Debug.html
  **
  **/

#include <stdio.h>

#include "defines.h"


/* prime-number finding program

   will (after bugs are fixed) report a list of all primes which are
   less than or equal to the user-supplied upper bound

   riddled with errors! */


// is_prime[i] will be 1 if i is prime, 0 otherwise
int is_prime[MAX_PRIMES];
int upper_bound;

int main() {
	int N;

	printf("Find all prime numbers between 3 and ?\n");
	scanf("%d", &upper_bound);

	is_prime[2] = 1;

	for (N = 3; N <= upper_bound; N += 2) {
		check_prime(N);
		if (is_prime[N])
			printf("%d is a prime\n",N);
	}

	return 0;
}
