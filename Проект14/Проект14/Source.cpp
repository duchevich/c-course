#include <iostream>
#include <string>

using namespace std;

void main()
{
	string word1 = "";
	string word2 = "";
	cout << "Enter word 1: ";
	cin >> word1;
	cout << "Enter word 2: ";
	cin >> word2;

	if (word1 > word2) {
		cout << "word1 > word2" << endl;
	}
	if (word1 < word2) {
		cout << "word1 < word2" << endl;
	}
	if (word1 == word2) {
		cout << "word1 = word2" << endl;
	}
	system("pause");
}