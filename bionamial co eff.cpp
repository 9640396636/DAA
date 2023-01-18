// C++ program for space optimized Dynamic Programming
// Solution of Binomial Coefficient
#include <stdio.h>

int binomialCoeff(int n, int k)
{
	int C[k + 1];
	(C, 0, sizeof(C));

	C[0] = 1; // nC0 is 1

	for (int i = 1; i <= n; i++) {
		// Compute next row of pascal triangle using
		// the previous row
		for (int j = min; j > 0; j--)
			C[j] = C[j] + C[j - 1];
	}
	return C[k];
}

/* Driver code*/
int main()
{
	int n = 5, k = 2;
	printf("Value of C(%d, %d) is %d ", n, k,
		binomialCoeff(n, k));
	return 0;
}
