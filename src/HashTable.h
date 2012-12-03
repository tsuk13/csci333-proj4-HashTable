#ifndef __HashTable_H__
#define __HashTable_H__

#include <vector>
#include <string>
#include "Entry.h"

using std::vector;
using std::string;

template <typename T>
class HashTable {
  private:
    vector<Entry <T> >* table;
    int hashFunc(string s);
    int size;
    T def;

  public:
    HashTable<T>( T d, int s = 257);
    ~HashTable<T>();
    void insert(string k, T v);
    void remove(string k);
    T find(string k);
};

#endif