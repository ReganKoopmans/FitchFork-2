#include "wordCount.h"

#include <iostream>
#include <string>
#include <vector>

int main()
{
	using namespace std;
	vector<WordCount> counts;
	while (!cin.eof()) {
		WordCount t;
		cin >> t.word >> t.times;
		if (!cin.good())
			break;
		counts.push_back(t);
	}
	sortCounters(counts);
	int wrote=0;
	for (vector<WordCount>::iterator i=counts.begin(); i!=counts.end(); i++) {
		cout << i->word << " % " << i->times << endl;
		if (++wrote>10) break;
	}
	return 0;
}
