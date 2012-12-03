#include <vector>
#include <string>
#include "HashTable.h"
#include "Entry.h"

using std::vector;
using std::string;

template <typename T>
int HashTable<T>::hashFunc(string s){
  int sum = 0;
  for(int i = 0; i < (int) s.size(); i++){
    sum += (int) s[i];
  }
  sum = sum % size ;
  return sum;
}

template <typename T>
HashTable<T>::HashTable(int s){
  size = s;
  table = new vector< Entry<T> >[size]; 
}

template <typename T>
HashTable<T>::~HashTable<T>(){
  delete[] table;
}


template class HashTable<int>;
template class HashTable<double>;
template class HashTable<string>;