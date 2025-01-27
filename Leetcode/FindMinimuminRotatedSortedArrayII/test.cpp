#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// Function to find minimum
int findMin(vector<int> &nums) {
  // minimum element
  int small = *min_element(nums.begin(), nums.end());
  return small;
}

// Function to rotate the array
void rotateArray(vector<int> &arr, int rotations) {
  int n = arr.size();
  // Adjust the number of rotations to avoid unnecessary full-circle rotations
  rotations %= n;

  // Rotate the array using the reversal algorithm
  reverse(arr.begin(), arr.end()); // Reverse the entire array
  reverse(arr.begin(),
          arr.begin() + rotations); // Reverse the first 'rotations' elements
  reverse(arr.begin() + rotations, arr.end()); // Reverse the remaining elements
}

int main() {
  // Initialize the array and the number of rotations
  vector<int> arr = {0, 1, 4, 4, 5, 6, 7};
  int rotations = 4;

  cout << "Original array: ";
  for (int num : arr) {
    cout << num << " ";
  }
  cout << "\n";

  rotateArray(arr, rotations);

  cout << "Rotated array: ";
  for (int num : arr) {
    cout << num << " ";
  }
  cout << "\nMinimum element in nums after rotations: ";
  cout << findMin(arr)<<endl;

  return 0;
}
