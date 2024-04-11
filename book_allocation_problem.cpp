// Book allocation problem is solved using..
// Binary Search Algo

#include<iostream>
using namespace std;

bool isPossible(int books[], int num_books, int students, int mid) {
  int studentCount = 1; // this is used for denoting 1st student, 2nd student
  int pageSum = 0;  // for storing sum of pages of each book slot
  int m = students;
  for(int i = 0; i<num_books; i++) {
    if(pageSum + books[i] <= mid) {
      pageSum += books[i];
    } else {
      studentCount++;
      if(studentCount > m || books[i] > mid) {
        return false;
      }
      pageSum = 0;
      pageSum = books[i];
    }
  }
  return true;
}

int allocateBooks(int books[], int num_books, int students) {
  int start = 0;
  int sum = 0;

  int n = num_books, m = students;

  for(int i = 0; i<n; i++) {
    sum += books[i];          // adding total number of pages i.e addition all no.of pages.
                              // this addition gives us the total Search Space.
  }
  int end = sum;

  int ans = -1;
  int mid = start + (end - start)/2;

  while(start<=end) {
    if(isPossible(books, n, m, mid)) { // isPossible - is it a possible Soln
      ans = mid;
      end = mid -1;
    } else {
      start = mid + 1;
    }
    mid = start + (end - start)/2;
  }
  return ans;
}

int main() {
  int books[] = {10, 20, 30, 40}; // ARRAY // each index, is a book slot, 
  // and the number inside each slot is the number of pages in that book.
  // each value in array denotes number of pages on each book.
  int m = 2; // number of students

  int num_of_books = sizeof(books)/sizeof(books[0]); // SIZE of array

  int minimum = allocateBooks(books, num_of_books, m);

  cout<<minimum;
  
}