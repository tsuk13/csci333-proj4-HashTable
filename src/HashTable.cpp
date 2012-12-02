#include <vector>
#include <string>
#include "HashTable.h"

#define TABLESIZE 257

using std::vector;
using std::string;

template <typename T>
HashTable<T>::HashTable(){
  table = new vector<T>[ TABLESIZE ]; 
}

template <typename T>
HashTable<T>::~HashTable<T>(){
  delete[] table;
}

template class HashTable<int>;
template class HashTable<double>;
template class HashTable<string>;