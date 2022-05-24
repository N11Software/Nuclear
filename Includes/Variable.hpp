#ifndef Variable
#include <iostream>
#include <variant>
#include <map>
#include "Array.hpp"

class Variable {
  public:
    std::string GetType(std::string name);
    Value* GetValue(std::string name);
    Array* GetArray(std::string name);
    void Set(std::string name, Value* value);
    void Set(std::string name, Array* array);
    void Clear();
  private:
    std::map<std::string, Value*> Variables;
    std::map<std::string, Array*> Arrays;
};

#endif