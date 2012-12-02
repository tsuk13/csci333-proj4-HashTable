#ifndef __HashTable_H__
#define __HashTable_H__

#include <vector>
#include <string>

using std::vector;
using std::string;

template <typename T>
class HashTable {
  private:
    vector<T>* table;

  public:
    HashTable<T>();
    void insert(string k, T v);
    void remove(string k);
    T find(string k);
};

#endif