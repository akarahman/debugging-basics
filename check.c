#include "externs.h"

void check_prime(int k) {
	int j;

	/* the plan:  see if j divides k, for all values j which are

	   (a) themselves prime (no need to try j if it is nonprime), and
	   (b) less than or equal to sqrt(k) (if k has a divisor larger
	   than this square root, it must also have a smaller one,
	   so no need to check for larger ones) */

	j = 2;
	while (1)  {
		if (is_prime[j] == 1)
			if (k % j == 0)  {
				is_prime[k] = 0;
				return;
			}
		j++;
	}

	// if we get here, then there were no divisors of k, so it is prime
	is_prime[k] = 1;
}

