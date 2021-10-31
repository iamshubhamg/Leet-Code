//https://leetcode.com/problems/number-of-1-bits/

#include <bits/stdc++.h>
using namespace std;

int hammingWeight(unsigned int n) {
	int numOfBits = 0;
	while (n) {
		n = (n & (n - 1));
		++numOfBits;
	}
	return numOfBits;
}

int main() {
	unsigned int n;
	cin >> n;
	cout << hammingWeight(n);
	return 0;
}
