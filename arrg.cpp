// runme.cpp
// coder: alex
// purpose: to run quick code tests

#include<iostream>
#include<cctype>
#include<string>
using namespace std;

string uppify_me(const string& s)
{
	string input_text = s;
	input_text = static_cast<string>(input_text);
	string inverted = " ";
	int count_limit = input_text.length();

	cout << "input text length is: " << input_text;
	cout << "count limit is: " << count_limit;

	for (int i = 0; i < count_limit; i++)
	{
		char cur = input_text[i];
		cout << cur << endl;
		
		if (islower(cur))
		{
			cout << "lower";
			inverted[i] = toupper(cur);
		}
		else if (isupper(cur))
		{
			cout << "upper";
			inverted[i] = tolower(cur);
		}

	}

	return inverted;
}

int main() {

	cout << "Enter some text, yo: ";
	string user_input = " ";

	getline(cin, user_input);

	cout << uppify_me(user_input);

	return 0;

}

