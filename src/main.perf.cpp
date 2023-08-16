// Hey Emacs, this is -*- coding: utf-8 -*-

// NOLINTBEGIN(misc-include-cleaner)

#include <chrono>
#include <iostream>

#include "main_0.hpp"

constexpr auto CYCLES_COUNT = 100'000;

using Input = int;
constexpr Input douglas_adams_number = 42;

auto main(int /*argc*/, char* /*argv*/[]) -> int {
  Input input{42};

  double durationAvgNanoSecond{0};

  for (int i = 0; i < CYCLES_COUNT; ++i) {
    main_0::Solution solution;

    const auto start = std::chrono::high_resolution_clock::now();
    // solution.uniquePaths(input);
    const auto finish = std::chrono::high_resolution_clock::now();

    const std::chrono::duration<double, std::nano> duration = finish - start;
    durationAvgNanoSecond += duration.count();
  }

  durationAvgNanoSecond /= CYCLES_COUNT;

  std::cout << "main_1 solution() exec duration: " << std::fixed
            << durationAvgNanoSecond << " ns\n";

  return EXIT_SUCCESS;
}

// NOLINTEND(misc-include-cleaner)
