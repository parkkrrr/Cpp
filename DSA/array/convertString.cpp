/**
 * You are given a string 'STR'. You have to convert the first alphabet of each word in a string to UPPER CASE.
For example:
If the given string 'STR' = ”I am a student of the third year” so you have to transform this string to ”I Am A Student Of The Third Year"

*/

#include <bits/stdc++.h> 
string convertString(string str) 
{
	str[0]=toupper(str[0]);
	for(int i=0; i<str.length(); i++)
		if(str[i]==' ')
			str[i+1]=toupper(str[i+1]);

	return str;
}