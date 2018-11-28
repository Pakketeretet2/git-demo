#include <iostream>

// Calculates Fibonacci numbers
// f(n) = f(n-1) + f(n-2), f(1) = f(0) = 1.
int fib( int n )
{
	if (n < 2) return 1;
	return fib(n-1) + fib(n-2);
}



int main()
{
	
	std::cout << "fib(5) = " << fib(5) << ".\n";
	for (int i = 0; i < 10; ++i) {
		std::cout << "fib(" << i << ") = " << fib(i) << "\n";
	}
	
	return 0;
}
