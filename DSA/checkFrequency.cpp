/***************************************************

Find the Frequency of elements in an array.
Sort the array and print the elements of array with
number of times they appears in the array.

Example: array = [3,4,1,2,3,8,3,1,8]
output: 1 - 2
        2 - 1
        3 - 3
        4 - 1
        8 - 2

***************************************************/

#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
  // initialising the array
  vector<int> vec = {3, 4, 1, 2, 3, 8, 3, 1, 8};
  // sorting array in ascending order
  sort(vec.begin(), vec.end());
  // initialising map
  map<int, int> fre;
  // storing elements into map and counting their Frequency
  for (auto i : vec) {
    fre[i]++;
  }
  // printing the frequency of elements
  cout << "Elements" << " - " << "Frequency" << endl;
  for (auto i : fre) {
    cout << i.first << " - " << i.second << endl;
  }
  return 0;
}
