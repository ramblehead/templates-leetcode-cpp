// Hey Emacs, this is -*- coding: utf-8 -*-

#include <cstdlib>
#include <iostream>

#include "main.hpp"

constexpr int douglas_adams_number = 42;

auto main(int /*argc*/, char* /*argv*/[]) -> int {
  std::cout << "Identity function solution(douglas_adams_number) == "
            << solution(douglas_adams_number) << "\n";

  return EXIT_SUCCESS;
}
