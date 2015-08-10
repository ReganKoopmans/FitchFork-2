#include "wordCount.h"
#include <iostream>
#include <fstream>

int main()
{
	using namespace std;
	cout << "Word counter" << endl;
	cout << "Enter text file name: ";
	string filename;
	getline(cin, filename);
	ifstream file(filename.c_str());
	if (!file.good()) {
		cout << "Error: cannot open " << filename << endl;
		return 1;
	}

	string contents;
	getline(file, contents, '\0');  /* this can be used to read all contents of
	a text file because the null character will not be encountered,
	hence getline proceeds until the end of the file is reached */
	//can test with this: cout << contents << endl;
	
	vector<WordCount> counts = countWords(contents);
	cout << "Found " << counts.size() << " different words in the text" << endl;
	size_t words_to_show = counts.size()>10 ? 10 : counts.size();
	cout << "The " << words_to_show << " most common words are: " << endl;
	for (size_t i=0; i<words_to_show; i++)
		cout << counts[i].word << " ("
		<< counts[i].times << " times)\n";
	
	return 0;
}

