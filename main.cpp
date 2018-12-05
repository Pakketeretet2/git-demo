#include <iostream>
#include <sstream>

// Calculates Fibonacci numbers
// f(n) = f(n-1) + f(n-2), f(1) = f(0) = 1.
int fib( int n )
{
	if (n < 2) return 1;
	return fib(n-1) + fib(n-2);
}


// Room for improvement:
// 1. Efficiency of fib.
// 2. Generalize Fibonacci sequence to any Lucas sequence
// 3. Add a Makefile
int main(int argc, char **argv)
{
	if (argc < 2) {
		std::cerr << "Provide a number!\n";
		return -1;
	}
	
	char *number = argv[1];
	std::stringstream ss(number);
	int n;
	ss >> n;
	std::string number2 = std::to_string(n);
	if (number2 != number) {
		std::cerr << "Could not unambiguously convert \"" << number << "\" to an int!\n";
		return -2;
	}

	std::cout << "fib(" << n << ") = " << fib(n) << "\n";
	
	return 0;
}
