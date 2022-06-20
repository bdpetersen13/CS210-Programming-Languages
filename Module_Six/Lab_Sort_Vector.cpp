/*
Write a program that gets a list of integers from input, and outputs the integers in ascending order (lowest to highest). The first integer indicates how many numbers are in the list. Assume that the list will always contain less than 20 integers.

Ex: If the input is:

5 10 4 39 12 2
the output is:

2 4 10 12 39
For coding simplicity, follow every output value by a space, including the last one.

Your program must define and call the following function. When the SortVector function is complete, the vector passed in as the parameter should be sorted.
void SortVector(vector<int>& myVec)

Hint: There are many ways to sort a vector. You are welcome to look up and use any existing algorithm. Some believe the simplest to code is bubble sort: https://en.wikipedia.org/wiki/Bubble_sort. But you are welcome to try others: https://en.wikipedia.org/wiki/Sorting_algorithm.
*/

#include <iostream>
#include <vector>
using namespace std;

void sortVector(vector<int> &vec) {
   int i;
   int j;
   int temp;

   for (i = 0; i < vec.size(); ++i) {
      for (j = 0; j < vec.size() - 1; ++j) {
         if (vec[j] > vec[j + 1]) {
            temp = vec[j];
            vec[j] = vec[j + 1];
            vec[j + 1] = temp;
         }
      }
   }
}

int main() {
   int size, n;
   vector<int> v;
   cin >> size;

   for (int i = 0; i < size; ++i) {
      cin >> n;
      v.push_back(n);
   }

   sortVector(v);
   for (int i = 0; i < size; ++i) {
      cout << v[i] << " ";
   }

   cout << endl;

   return 0;
}
