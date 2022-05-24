#include "../Includes/Variable.hpp"

std::string Variable::GetType(std::string name) {
  if (Variables.find(name) != Variables.end()) return "variable";
  else if (Arrays.find(name) != Arrays.end()) return "array";
  else return "null";
}

Value* Variable::GetValue(std::string name) {
  if (Variables.find(name) == Variables.end()) return new Value();
  return Variables[name];
}

Array* Variable::GetArray(std::string name) {
  if (Arrays.find(name) == Arrays.end()) return new Array();
  return Arrays[name];
}

void Variable::Set(std::string name, Value* value) {
  if (Arrays.find(name) != Arrays.end()) Arrays.erase(name);
  Variables[name] = value;
}

void Variable::Set(std::string name, Array* array) {
  if (Variables.find(name) != Variables.end()) Variables.erase(name);
  Arrays[name] = array;
}

void Variable::Clear() {
  for (auto& i: Variables) delete i.second;
  Variables.clear();
  for (auto& i: Arrays) delete i.second;
  Arrays.clear();
}