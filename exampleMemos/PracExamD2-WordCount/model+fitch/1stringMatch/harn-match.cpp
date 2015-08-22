#include <iostream>
#include <string>
#include "wordCount.h"
int main()
{
	using namespace std;
	while (!cin.eof()) {
		string s1, s2;
		cin >> s1 >> s2;
		if (!cin.good())
			break;
		cout << s1 << " and " << s2 << ' ';
		if (stringMatch(s1, s2))
 			cout << "MATCH" << endl;
		else
			cout << "DIFFER" << endl;
	}
	return 0;
}

