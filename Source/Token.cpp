#include "../Includes/Token.hpp"

Token::Token(std::string type, std::string value) {
  this->type = type;
  this->value = value;
}

void Token::SetPosition(int line, int col, std::string path) {
  this->line = line;
  this->col = col;
  this->path = path;
}

std::string Token::GetType() { return this->type; }
std::string Token::GetValue() { return this->value; }
int Token::GetLine() { return this->line; }
int Token::GetCol() { return this->col; }
std::string Token::GetPath() { return this->path; }