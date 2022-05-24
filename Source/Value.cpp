#include "../Includes/Value.hpp"

Value::Value() {
  this->type = "null";
  this->value = (void*)0;
}

Value::Value(std::string value) {
  this->type = "string";
  this->value = value;
}

Value::Value(int value) {
  this->type = "int";
  this->value = value;
}

Value::Value(double value) {
  this->type = "double";
  this->value = value;
}

Value::Value(float value) {
  this->type = "float";
  this->value = value;
}

Value::Value(bool value) {
  this->type = "bool";
  this->value = value;
}

std::variant<std::string, int, double, float, bool, void*> Value::GetValue() { return this->value; }
std::string Value::GetType() { return this->type; }

void Value::SetNull() {
  this->type = "null";
  this->value = (void*)0;
}

void Value::SetString(std::string value) {
  this->type = "string";
  this->value = value;
}

void Value::SetInt(int value) {
  this->type = "int";
  this->value = value;
}

void Value::SetDouble(double value) {
  this->type = "double";
  this->value = value;
}

void Value::SetFloat(float value) {
  this->type = "float";
  this->value = value;
}

void Value::SetBool(bool value) {
  this->type = "bool";
  this->value = value;
}