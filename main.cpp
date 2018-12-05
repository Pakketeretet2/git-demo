#include <iostream>

// Calculates Fibonacci numbers
// f(n) = f(n-1) + f(n-2), f(1) = f(0) = 1.
int fib( int n )
{
	if (n < 2) return 1;
	return fib(n-1) + fib(n-2);
}


// Room for improvement:
// 1. Efficiency of fib.
// 2. Take the nth fibonacci number from the command line
// 3. Generalize Fibonacci sequence to any Lucas sequence
// 
int main()
{
	std::cout << "fib(5) = " << fib(5) << ".\n";
	for (int i = 0; i < 40; ++i) {
		std::cout << "fib(" << i << ") = " << fib(i) << "\n";
	}
	
	return 0;
}
