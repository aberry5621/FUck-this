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
    int count_limit = static_cast<int>(input_text.length());
    
    cout << "input text length is: " << input_text.length() << endl;
    cout << "count limit is: " << count_limit << endl;
    
    for (int i = 0; i < count_limit; i++)
    {
        char cur = input_text[i];
        
        if (islower(cur))
        {
            inverted += toupper(cur);
        }
        else if (isupper(cur))
        {
            inverted += tolower(cur);
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
