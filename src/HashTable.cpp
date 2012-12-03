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
HashTable<T>::HashTable(T d, int s){
  size = s;
  def = d;
  table = new vector< Entry<T> >[size]; 
}

template <typename T>
HashTable<T>::~HashTable<T>(){
  delete[] table;
}

template <typename T>
void HashTable<T>::insert(string k, T v){
  vector<Entry <T> >* l = &(table[hashFunc(k)]);
  for(int i = 0; i < (int) l->size(); i++){
    if(l->at(i).getKey().compare(k) == 0){
      l->at(i).setValue(v);
      return;
    }
  }
  l->push_back(Entry<T>(k, v));
}

template <typename T>
void HashTable<T>::remove(string k){
  vector<Entry <T> >* l = &(table[hashFunc(k)]);
  for(int i = 0; i < (int) l->size(); i++){
    if(l->at(i).getKey().compare(k) == 0){
      l->erase(l->begin() + i);
      return;
    }
  }
}

template <typename T>
T HashTable<T>::find(string k){
  vector<Entry <T> >* l = &(table[hashFunc(k)]);
  for(int i = 0; i < (int) l->size(); i++){
    if(l->at(i).getKey().compare(k) == 0){
      return l->at(i).getValue();
    }
  }
  return def;
}


template class HashTable<int>;
template class HashTable<double>;
template class HashTable<string>;