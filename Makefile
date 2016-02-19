# The += syntax says to add to the existing variable. If the variable did not
# previously exist, then += creates an empty CFLAGS variable and adds -g to it
CFLAGS += -g

# Turn off all optimizations so we can more easily match any behavoir with code
CFLAGS += -O0

# The -w option says omit all warnings. This is rarely a good idea, but we want
# to use the debugger to catch bugs at first, not the compiler
CFLAGS += -w

prime: prime.c check.c externs.h defines.h
	$(CC) $(CFLAGS) prime.c check.c -o prime

clean:
	rm -f *.o prime

.PHONY: clean
