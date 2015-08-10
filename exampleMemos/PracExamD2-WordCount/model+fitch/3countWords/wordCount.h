#ifndef WORDCOUNT_H
#define WORDCOUNT_H
#include <string>
#include <vector>

struct WordCount {
	std::string word; //a word
	int times;  //how many times it has been found (counted) so far
};

bool stringMatch(std::string s1, std::string s2);
void incrementWord(std::vector<WordCount> &counters, std::string word);
void sortCounters(std::vector<WordCount> &counters);
std::vector<WordCount> countWords(std::string text);

#endif

