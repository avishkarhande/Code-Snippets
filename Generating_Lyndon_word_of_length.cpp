// C++ implementation of
// the above approach
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n = 2;
	char S[] = {'0', '1', '2' };
	int k = 3;
	sort(S, S + 3);
	
	// To store the indices
	// of the characters
	vector<int> w;
	w.push_back(-1);
	
	// Loop till w is not empty	
	while(w.size() > 0)
	{
		
		// Incrementing the last character
		w[w.size()-1]++;
		int m = w.size();
		if(m == n)
		{
			string str;
			for(int i = 0; i < w.size(); i++)
			{
				str += S[w[i]];
			}
			cout << str << endl;
		}
	
		// Repeating w to get a
		// n-length string
		while(w.size() < n)
		{
			w.push_back(w[w.size() - m]);
		}
	
		// Removing the last character
		// as long it is equal to
		// the largest character in S
		while(w.size() > 0 && w[w.size() - 1] == k - 1)
		{
			w.pop_back();
		}
	}
	return 0;
}

// This code is contributed by AdeshSingh1

