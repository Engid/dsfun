#include <string>
#include <iostream>
//#include <stdexcept>

using namespace std;

/**
*  This is a way for me to practice what I've learned
*  in my Data Structures class at ATU, and through the
*  text "C++ Programming: From Problem Analysis to Program
*  Design" by D.S. Malik.
*
*  The Data Structures presented here are not intended for
*  use in any serious production code, but simply for my own
*  practice and experimentation. Use / copy at your own risk.
*
*  Note: I know, I'm using RAW pointers.. Not safe!
*  This is how we've learned to write code at ATU.
*  Soon, I'll teach myself modern C++ best practices.
*  For now, this is what I can do. 
*/


//My own litle exception class
class OutOfBoundsEx {
  public:
    OutOfBoundsEx(int index) {
      idx = index;
    }
    void print(){
      cout << "Out of Bounds Exception: Value at Index " << idx; 
      cout << " does not exist." << endl;
    }
  private:  
    int idx;
};

  
template <class T>
class MyList {
  public:
    MyList() {
      head = tail = new Node;
      head->next = NULL;
    }

    // toArray
    // append
    // prepend
    // remove

  private:
    struct Node {
      Node *next;
      T data;
    }
    int count;
    Node *head;
    Node *tail;
    T *a; 
}
