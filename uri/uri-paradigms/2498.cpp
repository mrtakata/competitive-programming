#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

class Book{
  int weight;
  int interest;

  public:
    void setBook(int weight, int interest);
    void printBook();
};


void Book::setBook(int weight, int interest){
  this->weight = weight;
  this->interest = interest;
}

void Book::printBook(){
    printf("W: %d, I: %d\n", this->weight, this->interest);
}

int main(){

  // Maximize the interesting books to be put in a bag

  int num_case, num_books, bag_size, max_interest;
  int book_weight, book_interest;
  vector<Book> bookshelf;
  Book b;
  // mock
  num_case = 4;
  bag_size = 30;
  max_interest = 0;

  b.setBook(12, 98);
  bookshelf.push_back(b);
  b.setBook(13, 25);
  bookshelf.push_back(b);
  b.setBook(2, 97);
  bookshelf.push_back(b);
  b.setBook(19, 95);
  bookshelf.push_back(b);


  for(Book i : bookshelf){
    i.printBook();
  }

  cin >> num_books >> bag_size;
  //leitura
  while(num_books != 0 && bag_size != 0){
    bookshelf.erase(bookshelf.begin(), bookshelf.end());
    cin >> num_books >> bag_size;
    for(int i = 0; i < num_books; i++){
      cin >> book_weight >> book_interest;
      b.setBook(book_weight, book_interest);
      bookshelf.push_back(b);
    }
    // logic
    for(Book i : bookshelf){
      i.printBook();
    }
  }
  // bookshelf.push
  printf("Caso %d: %d\n", num_case, max_interest);
  return 0;
}

