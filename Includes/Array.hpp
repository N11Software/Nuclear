#ifndef Array
#include <iostream>
#include <vector>
#include "Value.hpp"

class Array {
  public:
    Array();
    Array(std::vector<Value*> values);
    void Add(Value* value);
    Value* Get(int index);
    int Size();
    void Clear();
    void Delete(int index);
    void Delete(Value* value);
    bool Contains(Value* value);
    bool ContainsValue(std::string value);
    bool ContainsValue(int value);
    bool ContainsValue(double value);
    bool ContainsValue(float value);
    bool ContainsValue(bool value);
    bool ContainsValue(void* value);
    int Find(Value* value);
    int FindValue(std::string value);
    int FindValue(int value);
    int FindValue(double value);
    int FindValue(float value);
    int FindValue(bool value);
    int FindValue(void* value);
  private:
    std::vector<Value*> values;
};

#endif