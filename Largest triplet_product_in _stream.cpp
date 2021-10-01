// A C++ program to find the count of distinct substring
// of a string using trie data structure
#include <bits/stdc++.h>
#define MAX_CHAR 26
using namespace std;

// A Suffix Trie (A Trie of all suffixes) Node
class SuffixTrieNode
{
public:
	SuffixTrieNode *children[MAX_CHAR];
	SuffixTrieNode() // Constructor
	{
		// Initialize all child pointers as NULL
		for (int i = 0; i < MAX_CHAR; i++)
		children[i] = NULL;
	}

	// A recursive function to insert a suffix of the s
	// in subtree rooted with this node
	void insertSuffix(string suffix);
};

// A Trie of all suffixes
class SuffixTrie
{
	SuffixTrieNode *root;
	int _countNodesInTrie(SuffixTrieNode *);
public:
	// Constructor (Builds a trie of suffies of the given text)
	SuffixTrie(string s)
	{
		root = new SuffixTrieNode();

		// Consider all suffixes of given string and insert
		// them into the Suffix Trie using recursive function
		// insertSuffix() in SuffixTrieNode class
		for (int i = 0; i < s.length(); i++)
			root->insertSuffix(s.substr(i));
	}

	// method to count total nodes in suffix trie
	int countNodesInTrie() { return _countNodesInTrie(root); }
};

// A recursive function to insert a suffix of the s in
// subtree rooted with this node
void SuffixTrieNode::insertSuffix(string s)
{
	// If string has more characters
	if (s.length() > 0)
	{
		// Find the first character and convert it
		// into 0-25 range.
		char cIndex = s.at(0) - 'a';

		// If there is no edge for this character,// C++ implementation of largest triplet
// multiplication
#include <bits/stdc++.h>
using namespace std;

// Prints the product of three largest numbers
// in subarray arr[0..i]
void LargestTripletMultiplication(int arr[], int n)
{
	// call a priority queue
	priority_queue<int> q;

	// traversing the array
	for (int i = 0; i < n; i++) {
		// pushing arr[i] in the array
		q.push(arr[i]);

		// if less than three elements are present
		// in array print -1
		if (q.size() < 3)
			cout << "-1" << endl;
		else {
			// pop three largest elements
			int x = q.top();
			q.pop();
			int y = q.top();
			q.pop();
			int z = q.top();
			q.pop();

			// Reinsert x, y, z in priority_queue
			int ans = x * y * z;
			cout << ans << endl;
			q.push(x);
			q.push(y);
			q.push(z);
		}
	}
	return;
}

// Driver Function
int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int n = sizeof(arr) / sizeof(arr[0]);
	LargestTripletMultiplication(arr, n);
	return 0;
}

	SuffixTrie sTrie(str);

	// Return count of nodes in Trie of Suffixes
	return sTrie.countNodesInTrie();
}

// Driver program to test above function
int main()
{
	string str = "ababa";
	cout << "Count of distinct substrings is "
		<< countDistinctSubstring(str);
	return 0;
}
