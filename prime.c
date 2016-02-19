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
void check_prime(int k, int is_prime[]) {
	int j;

	/* the plan:  see if j divides k, for all values j which are

	   (a) themselves prime (no need to try j if it is nonprime), and
	   (b) less than or equal to sqrt(k) (if k has a divisor larger
	   than this square root, it must also have a smaller one,
	   so no need to check for larger ones) */

	for (j=2; j*j <= k; j++) {
		if (is_prime[j] == 1)
			if (k % j == 0)  {
				is_prime[k] = 0;
				return;
			}
	}

	// if we get here, then there were no divisors of k, so it is prime
	is_prime[k] = 1;
}

int main() {
	int is_prime[MAX_PRIMES];
	int upper_bound;
	int N;

	printf("Find all prime numbers between 3 and ?\n");
	scanf("%d", &upper_bound);

	for (N = 3; N <= upper_bound; N += 2) {
		check_prime(N, is_prime);
		if (is_prime[N])
			printf("%d is a prime\n",N);
	}

	return 0;
}
