# The += syntax says to add to the existing variable. If the variable did not
# previously exist, then += creates an empty CFLAGS variable and adds -g to it
CFLAGS += -g

# Turn off all optimizations so we can more easily match any behavoir with code
CFLAGS += -O0

# Turn on all the warnings we can get
CFLAGS += -Wall -Wextra -pedantic

prime: prime.c defines.h
	$(CC) $(CFLAGS) prime.c -o prime

clean:
	rm -f *.o prime

.PHONY: clean
