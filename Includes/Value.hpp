#ifndef Value
#include <iostream>
#include <variant>

class Value {
  public:
    Value();
    Value(std::string value);
    Value(int value);
    Value(double value);
    Value(float value);
    Value(bool value);
    std::variant<std::string, int, double, float, bool, void*> GetValue();
    std::string GetType();
    void SetNull(), SetString(std::string value), SetInt(int value), SetDouble(double value), SetFloat(float value), SetBool(bool value);
  private:
    std::string type;
    std::variant<std::string, int, double, float, bool, void*> value;
};

#endif