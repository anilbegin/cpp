// The book Allocation problem, solved with Binary Seach Algo
// allocate N Books to M students
// Every book should be assigned to a student
// Every Student should be assigned atleast one book
// Find the minimum of the maximum no.of books that can be assigned
// to all students

int isPossible(int books[], int num_of_books, int m, int mid) {
  int studentCount = 1;
  int pageSum = 0;
  
  for(int i = 0; i < num_of_books; i++) {
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

int allocate_books(int books[], int num_of_books, int m) {
  int start = 0;
  int search_space = 0;

  for(int i = 0; i<num_of_books; i++) {
    search_space += books[i];
  }
  int end = search_space;

  int ans = -1;
  int mid = start + (end - start)/2;

  while(start<=end) {
    if(isPossible(books, num_of_books, m, mid)) {
      ans = mid;
      start = mid + 1;
    } else {
      end = mid - 1;
    }
    mid = start + (end - start)/2;
  }
  return ans;

}

#include<iostream>
using namespace std;

int main() {
  int books[] = {4, 2, 1, 3, 6};

  int num_of_books = sizeof(books)/sizeof(books[0]);

  int m = 2; // number of students

  int ans = allocate_books(books, num_of_books, m);

  cout<<ans;
}