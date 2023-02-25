#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;

void get_string(string*);
string convert_to_tilde(string*);
int search_and_replace(char, string, string&);

int main(){

	string s = "";

	cout << "Enter a string: ";
	get_string(&s);
	cout << "The tilde version of your string is:" << endl;
	cout << s.size() << endl;
	string tilde = convert_to_tilde(&s);
	cout << tilde << endl;

	return 0;
}

void get_string(string* user_input) {
	getline(cin, *user_input);
}

string convert_to_tilde(string* s) {
	char c_array[*s.length() + 1];
	strcpy(c_array, *s.c_str());
	string tilde = "";
	for (char c : c_array)
		tilde += (c == ' ') ? ' ' : '~';

	return tilde;
}

