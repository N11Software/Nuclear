#ifndef Token
#include <iostream>

class Token {
  public:
    Token(std::string type, std::string value);
    void SetPosition(int line, int col, std::string path);
    std::string GetType();
    std::string GetValue();
    int GetLine();
    int GetCol();
    std::string GetPath();
  private:
    std::string type, value, path;
    int line, col;
};

#endif