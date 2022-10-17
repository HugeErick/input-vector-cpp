#include <iostream>
#include <vector>
#include <string>
#include <sstream>

#define ll long long

int main(){
  std::string line;
  int num;
  std::vector<int> nums;
  puts("put input");
  std::getline(std::cin, line);
  std::istringstream stream(line);
  while (stream >> num) nums.push_back(num);
  puts("press any key to close the program");
  std::cin.get();
  return 0;
}