#include "include/check.h"
#include "include/multiply.h"

// Main code
int main(int argc, char **argv)
{

    if (argc < 3 || argc >= 4)
    {
		puts("Please Provide Two Unsigned Integers as arguments");
		return 1;
	}

    if (check(argv[1]) == 0 || check(argv[2]) == 0 )
    {
		puts("Wrong Data - Please Provide Only Unsigned Integers as arguments");
		return 1;
	}

    multiply(argv[1], argv[2]);

	return 0;
}
