#include "rnd.hpp"

std::random_device random;
std::mt19937 mt(random());

int getIntegerInRange(int min, int max) {
  std::uniform_int_distribution<int> uid(min, max);

  return uid(mt);
}