/* Hannes JvV 2015 UP CS Dept */
#include "wordCount.h"
#include <sstream>
#include <cctype>

using namespace std;

bool stringMatch(string s1, string s2)
{
	if (s1.size()!=s2.size())
		return false;
	for (size_t i=0; i<s1.size(); i++)
		if (tolower(s1[i])!=tolower(s2[i]))
			return false;
	return true;
}

void incrementWord(vector<WordCount> &counts, string word)
{
	for (size_t i=0; i<counts.size(); i++)
		//if (counts[i].word == word) {
		//ooh wait, let's make it case insensitive!
		if (stringMatch(word, counts[i].word)) {
			counts[i].times++;
			return;
		}
	//else, not found:
	WordCount newcounter;
	newcounter.word = word;
	newcounter.times = 1;
	counts.push_back(newcounter);
}

void sortCounters(vector<WordCount> &counts)
{
	for (size_t i=0; i<counts.size()-1; i++) {
		size_t largestIndex = i;
		for (size_t j=i+1; j<counts.size(); j++)
			if (counts[j].times > counts[largestIndex].times)
				largestIndex = j;
		if (largestIndex != i)
			swap(counts[i], counts[largestIndex]);
	}
}

vector<WordCount> countWords(string text)
{
	vector<WordCount> counters;
	istringstream s(text);
	while (!s.eof()) {
		string word;
		s >> word;

		if (word.size()==0) continue;
		bool allwhite=true;
		for (size_t i=0; i<word.size();i++)
			if (!isspace(word[i]))
				allwhite = false;
		if (allwhite) continue;

		incrementWord(counters, word);
	}
	sortCounters(counters);
	return counters;
}

