/*
Given a string of lowercase letters. Find minimum characters to be inserted in the string so that
 it can become palindrome. We can change the positions of characters in the string.
 Input : geeksforgeeks
Output : 2
geeksforgeeks can be changed as:
geeksroforskeeg
geeksorfroskeeg
and many more

Input : aabbc
Output : 0
aabbc can be changed as:
abcba
bacab
*/

// CPP program to find minimum number
// of insertions to make a string
// palindrome
#include <bits/stdc++.h>
using namespace std;

// Function will return number of
// characters to be added
int minInsertion(string str)
{
	// To store string length
	int n = str.length();

	// To store number of characters
	// occurring odd number of times
	int res = 0;

	// To store count of each
	// character
	int count[26] = { 0 };

	// To store occurrence of each
	// character
	for (int i = 0; i < n; i++)
		count[str[i] - 'a']++;

	// To count characters with odd
	// occurrence
	for (int i = 0; i < 26; i++)
		if (count[i] % 2 == 1)
			res++;

	// As one character can be odd return
	// res - 1 but if string is already
	// palindrome return 0
	return (res == 0) ? 0 : res - 1;
}

// Driver program
int main()
{
	string str = "cheeksforcheeks";
	cout << minInsertion(str);

	return 0;
}
