#include "../Includes/Array.hpp"

Array::Array() { values = std::vector<Value*>(); }
Array::Array(std::vector<Value*> values) { this->values = values; }
void Array::Add(Value* value) { values.push_back(value); }

Value* Array::Get(int index) {
  if (index < 0 || index >= values.size()) return new Value();
  return values[index];
}

int Array::Size() { return values.size(); }
void Array::Clear() { values.clear(); }
void Array::Delete(int index) { values.erase(values.begin() + index); }
void Array::Delete(Value* value) { values.erase(std::remove(values.begin(), values.end(), value), values.end()); }
bool Array::Contains(Value* value) { return std::find(values.begin(), values.end(), value) != values.end(); }

bool Array::ContainsValue(std::string value) {
  for (auto& i: values) if (i->GetType() == "string" && std::get<std::string>(i->GetValue()) == value) return true;
  return false;
}

bool Array::ContainsValue(int value) {
  for (auto& i: values) if (i->GetType() == "int" && std::get<int>(i->GetValue()) == value) return true;
  return false;
}

bool Array::ContainsValue(double value) {
  for (auto& i: values) if (i->GetType() == "double" && std::get<double>(i->GetValue()) == value) return true;
  return false;
}

bool Array::ContainsValue(float value) {
  for (auto& i: values) if (i->GetType() == "float" && std::get<float>(i->GetValue()) == value) return true;
  return false;
}

bool Array::ContainsValue(bool value) {
  for (auto& i: values) if (i->GetType() == "bool" && std::get<bool>(i->GetValue()) == value) return true;
  return false;
}

bool Array::ContainsValue(void* value) {
  for (auto& i: values) if (i->GetType() == "null" && std::get<void*>(i->GetValue()) == value) return true;
  return false;
}

int Array::Find(Value* value) { return std::find(values.begin(), values.end(), value) != values.end(); }

int Array::FindValue(std::string value) {
  int x = 0;
  for (auto& i: values) {
    if (i->GetType() == "string" && std::get<std::string>(i->GetValue()) == value) return x;
    x++;
  }
  return false;
}

int Array::FindValue(int value) {
  int x = 0;
  for (auto& i: values) {
    if (i->GetType() == "int" && std::get<int>(i->GetValue()) == value) return x;
    x++;
  }
  return false;
}

int Array::FindValue(double value) {
  int x = 0;
  for (auto& i: values) {
    if (i->GetType() == "double" && std::get<double>(i->GetValue()) == value) return x;
    x++;
  }
  return false;
}

int Array::FindValue(float value) {
  int x = 0;
  for (auto& i: values) {
    if (i->GetType() == "float" && std::get<float>(i->GetValue()) == value) return x;
    x++;
  }
  return false;
}

int Array::FindValue(bool value) {
  int x = 0;
  for (auto& i: values) {
    if (i->GetType() == "bool" && std::get<bool>(i->GetValue()) == value) return x;
    x++;
  }
  return false;
}

int Array::FindValue(void* value) {
  int x = 0;
  for (auto& i: values) {
    if (i->GetType() == "null" && std::get<void*>(i->GetValue()) == value) return x;
    x++;
  }
  return false;
}