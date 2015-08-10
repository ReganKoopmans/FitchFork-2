#include "wordCount.h"

#include <iostream>
#include <string>
#include <vector>

void modelSortCounters(std::vector<WordCount> &counts)
{
	for (size_t i=0; i<counts.size()-1; i++) {
		size_t largestIndex = i;
		for (size_t j=i+1; j<counts.size(); j++)
			if (counts[j].times > counts[largestIndex].times)
				largestIndex = j;
		if (largestIndex != i)
			std::swap(counts[i], counts[largestIndex]);
	}
}

int main()
{
	using namespace std;
	string content;
	getline(cin, content, '\0');
	vector<WordCount> counts
		= countWords(content);
	modelSortCounters(counts);
	int wrote=0;
	for (vector<WordCount>::iterator i=counts.begin(); i!=counts.end(); i++) {
		cout << i->word << " % " << i->times << endl;
		if (++wrote>10) break;
	}
	return 0;
}
