#include <bits/stdc++.h>
using namespace std;
string longestevenword(string str) {
   int len = str.length();
   int i = 0; int currWordlen = 0;
   int maxWordLen = 0;
   int stringPointer = -1;
   while (i < len) {
      if (str[i] == ' ') {
         if (currWordlen % 2 == 0) {
            if (maxWordLen < currWordlen) {
               maxWordLen = currWordlen;
               stringPointer = i - currWordlen;
            }
         }
         currWordlen = 0;
      }
      else {
         currWordlen++;
      }
      i++;
   }
   if (currWordlen % 2 == 0) {
      if (maxWordLen < currWordlen) {
         maxWordLen = currWordlen; 
         stringPointer = i - currWordlen;
      }
   }
   if (stringPointer == -1)
      return "Not Found!";
   return str.substr(stringPointer, maxWordLen);
}
int main() {
   string str;
   getline(cin,str);
   cout<<longestevenword(str)<<"'";
   return 0;
}