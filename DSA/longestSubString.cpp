
/******************************************************************

# Problem Statement

Given a string consisting of lowercase English letters, find the longest
contiguous substring where the characters appear in sequential order (following
the English alphabet). If multiple substrings of the same length exist, return
the first one found.

# Example:
Case 1:
Input: "mnabcpqrstuvwtefg"
Output: "pqrstuvw"
Explanation:
    The substrings that follow alphabetical order are: "mn", "abc", "pqrstuvw",
"efg". The longest one is "pqrstuvw" with a length of 8.

Case 2:
Input: "abcdxyz"
Output: "abcd"
Explanation:
    The possible sequences are "abcd" and "xyz", both of length 4.
    The first longest sequence is "abcd", so it is returned.

Case 3:
Input: "zxyabcde"
Output: "abcde"
Explanation:
    The longest alphabetical sequence is "abcde".

Case 4:
Input: "a"
Output: "a"
Explanation:
    The string has only one character, so the output is itself.
******************************************************************/

#include <iostream>
using namespace std;

string longestSubString(string st) {
  string s = "", result = "";
  s += st[0];
  for (int i = 1; i < st.size(); i++) {
    if (st[i] == st[i - 1] + 1) {
      s += st[i];
    } else {
      if (result.size() < s.size()) {
        result = s;
      }
      s = st[i];
    }
  }
  if (result.size() < s.size()) {
    result = s;
  }

  return result;
}

int main() {
  // case1
  string s1 = "mnabcpqrstuvwtefg";
  cout << "Input String: " << s1 << endl;
  cout << "Longest Sequential Substring: " << longestSubString(s1) << endl;

  // case2
  string s2 = "abcdxyza";
  cout << "Input String: " << s2 << endl;
  cout << "Longest Sequential Substring: " << longestSubString(s2) << endl;
  // case3
  string s3 = "a";
  cout << "Input String: " << s3 << endl;
  cout << "Longest Sequential Substring: " << longestSubString(s3) << endl;

  return 0;
}
