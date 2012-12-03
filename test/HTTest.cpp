#include <iostream>
#include <string>
#include "../src/HashTable.h"

using std::cout;

int main(){
  cout << "Hello World\n";
  HashTable<int>* HT = new HashTable<int>();
  HT->insert("taco", 3);
  HT->insert("banana", 4);
  HT->insert("taco", 5);
  delete HT;
}