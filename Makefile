# The += syntax says to add to the existing variable. If the variable did not
# previously exist, then += creates an empty CFLAGS variable and adds -g to it
CFLAGS += -g

prime: prime.c check.c externs.h defines.h
	$(CC) $(CFLAGS) prime.c check.c -o prime

clean:
	rm -f *.o prime

.PHONY: clean
