#include <bits/stdc++.h>
string removeVowels(string inputString)
{
    string empty = "";
    for (int i = 0; i < inputString.size(); i++)
        if (inputString[i] != 'a' and
            inputString[i] != 'e' and
            inputString[i] != 'i' and
            inputString[i] != 'o' and
            inputString[i] != 'u' and
            inputString[i] != 'A' and
            inputString[i] != 'E' and
            inputString[i] != 'I' and
            inputString[i] != 'O' and
            inputString[i] != 'U')
            empty += inputString[i];
    return empty;
}
