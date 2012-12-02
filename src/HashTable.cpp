#include <vector>
#include <string>
#include "HashTable.h"
#include "Entry.h"

#define TABLESIZE 257

using std::vector;
using std::string;

template <typename T>
int HashTable<T>::hashFunc(string s){
  int sum = 0;
  for(int i = 0; i < (int) s.size(); i++){
    sum += (int) s[i];
  }
  sum = sum % TABLESIZE ;
  return sum;
}

template <typename T>
HashTable<T>::HashTable(){
  table = new vector< Entry<T> >[ TABLESIZE ]; 
}

template <typename T>
HashTable<T>::~HashTable<T>(){
  delete[] table;
}


template class HashTable<int>;
template class HashTable<double>;
template class HashTable<string>;