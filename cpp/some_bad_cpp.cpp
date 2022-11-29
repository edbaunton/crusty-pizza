#include <iostream>
#include <string>

int main(int argc, char **argv) {
  char foo[argc];
  std::cout << std::string(foo) << std::endl;
  return 0;
}
  
