#include <iostream>
#include <string>
#include "../src/HashTable.h"

using std::cout;

int main(){
  cout << "Hello World\n";
  HashTable<int>* HT = new HashTable<int>();
  HT->insert("taco", 3);
  delete HT;
}