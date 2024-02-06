#include <iostream>
#include <string>
using namespace std;

void isComment(string line)
{
	if (line.size()>=2 && line[0] == '/' && line[1] == '/') {

		cout << "It is a single-line comment";
		return;
	}
	if (line.size()>=4 && line[line.size() - 2] == '*'
		&& line[line.size() - 1] == '/' && line[0] == '/' && line[1] == '*') {

		cout << "It is a multi-line comment";
		return;
	}
	cout << "It is not a comment";
}
int main()
{
	string line = "//nothing to say";
	isComment(line);

	return 0;
}
