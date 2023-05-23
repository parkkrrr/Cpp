/*
You have been given a text message. You have to return the Run-length Encoding of the given message.
Run-length encoding is a fast and simple method of encoding strings. The basic idea is to represent repeated successive characters as the character and a single count. For example, the string "aaaabbbccdaa" would be encoded as "a4b3c2d1a2".
*/

#include <bits/stdc++.h> 
string encode(string &message)
{
    //   Write your code here.
   string newstr="";
   int count {};
   
   for(int i=0; i<message.size(); i++){
       if((i==message.size()-1) ||(message[i]!=message[i+1])){
           newstr+=message[i]+to_string(count+1);
           count=0;
       }
       else count++;
   }
   return newstr;
}