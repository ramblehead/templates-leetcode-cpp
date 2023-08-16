// Hey Emacs, this is -*- coding: utf-8 -*-

#include <cstdlib>
#include <iostream>
#include <vector>

#include "main_0.hpp"

using Input = int;
constexpr Input douglas_adams_number = 42;

auto main(int /*argc*/, char* /*argv*/[]) -> int {
  std::vector<Input> inputs{douglas_adams_number};

  std::cout << "== main_0 ==\n\n";

  for (const auto& input : inputs) {
    main_0::Solution s_0;
    std::cout << "Input: " << input << "\n";
    std::cout << "Identity function solution: "
              << s_0.identity(input) << "\n";
  }

  return EXIT_SUCCESS;
}
