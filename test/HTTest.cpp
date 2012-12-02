#include <iostream>
#include "../src/HashTable.h"

using std::cout;

int main(){
  cout << "Hello World\n";
  HashTable<int>* HT = new HashTable<int>();
  delete HT;
}