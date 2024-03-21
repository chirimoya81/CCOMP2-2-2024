#include <iostream>

int main(){
  int number;
  std::cout << "Four digit integrer:\n";
  std::cin >> number;
  std::cout << number % 10 << " ";
  number /= 10;
  std::cout << number % 10 << " ";
  number /= 10;
  std::cout << number % 10 << " ";
  number /= 10;
  std::cout << number << " ";
  return 0;
  
