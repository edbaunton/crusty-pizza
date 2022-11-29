#include <iostream>
#include <string>

int main(int, char **argv) {
  char *very_large = static_cast<char*>(malloc(atoi(argv[0])));
  std::cout << std::string(very_large) << std::endl;
  return 0;
}
  
