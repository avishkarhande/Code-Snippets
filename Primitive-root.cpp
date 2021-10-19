// C++ program to find primitive root of a
// given number n
#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
	
	if (n <= 1) return false;
	if (n <= 3) return true;
	if (n%2 == 0 || n%3 == 0) return false;

	for (int i=5; i*i<=n; i=i+6)
		if (n%i == 0 || n%(i+2) == 0)
			return false;

	return true;
}


int power(int x, unsigned int y, int p)
{
	int res = 1;	 // Initialize result

	x = x % p; // Update x if it is more than or


	while (y > 0)
	{
		if (y & 1)
			res = (res*x) % p;

		y = y >> 1; // y = y/2
		x = (x*x) % p;
	}
	return res;
}

void findPrimefactors(unordered_set<int> &s, int n)
{
	while (n%2 == 0){
		s.insert(2);
		n = n/2;
	}

	for (int i = 3; i <= sqrt(n); i = i+2)
	{
		while (n%i == 0)
		{
			s.insert(i);
			n = n/i;
		}
	}

	if (n > 2)
		s.insert(n);
}

int findPrimitive(int n)
{
	unordered_set<int> s;

	// Check if n is prime or not
	if (isPrime(n)==false)
		return -1;

	int phi = n-1;

	// Find prime factors of phi and store in a set
	findPrimefactors(s, phi);

	// Check for every number from 2 to phi
	for (int r=2; r<=phi; r++)
	{
		
		bool flag = false;
		for (auto it = s.begin(); it != s.end(); it++)
		{
			if (power(r, phi/(*it), n) == 1)
			{
				flag = true;
				break;
			}
		}

		// If there was no power with value 1.
		if (flag == false)
		return r;
	}

	// If no primitive root found
	return -1;
}

// Driver code
int main()
{
	int n = 761;
	cout << " Smallest primitive root of " << n
		<< " is " << findPrimitive(n);
	return 0;
}
