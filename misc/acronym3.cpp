#include <iostream>
#include <vector>
using namespace std;

vector<string> word_count(string s)
{
    vector<string> str;
    string temp;
    for (int i = 0; s[i]; i++)
    {
        if (s[i] != ' ')
            temp += s[i];

        else
        {
            str.push_back(temp);
            temp = "";
        }
    }
    
    if (!temp.empty())
        str.push_back(temp);

    return str;
}

void acronym(string s)
{
    vector<string> st = word_count(s);
    for (int i=0;i<st.size()-1;i++)
        cout << st[i][0];
    cout << " " << st[st.size()-1] << endl;
}

int main()
{
    acronym("Satyam Kumar Prajapati");
    return 0;
}