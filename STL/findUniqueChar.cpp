/******************************************************************

# Problem Statement

Given a string containing lowercase letters, where every character appears
twice except for one unique character, find and return that unique character.

# Example:

Case 1:
Input: "aabbcddfef"
Output: 'c'
Explanation:
    'a', 'b', 'd', 'f', and 'e' appear twice.
    'c' appears only once, so it is the answer.

Case 2:
Input: "zzxxgghhrrmmt"
Output: 't'
Explanation:
    Every character except 't' appears twice.
    The unique character is 't'.

Case 3:
Input: "p"
Output: 'p'
Explanation:
    Only one character exists, so it must be unique.

******************************************************************/

#include <iostream>
#include <map>
using namespace std;

//  bit-manipulation
// this method will only work for odd number of characters

char findUniqueChar(string s) {
  int x = 0;

  for (auto i : s) {
    x ^= i;
  }

  return char(x);
}

// using map
// alternate method - work for even number of characters

char getUniqueChar(string s) {
  char result;
  map<char, int> m;
  for (auto i : s) {
    m[i]++;
  }

  for (auto k : m) {
    if (k.second == 1) {
      result = k.first;
    }
  }
  return result;
}

int main() {
  string s1 = "grghthr";
  cout << "String: " << s1 << endl;
  cout << "Result: " << findUniqueChar(s1) << endl;

  string s2 = "aabbcddff";
  cout << "String: " << s2 << endl;
  cout << "Result: " << getUniqueChar(s2) << endl;

  string s3 = "a";
  cout << "String: " << s3 << endl;
  cout << "Result: " << findUniqueChar(s3) << endl;
  cout << "Result: " << getUniqueChar(s3) << endl;

  return 0;
}
