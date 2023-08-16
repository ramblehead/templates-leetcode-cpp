// Hey Emacs, this is -*- coding: utf-8 -*-

// NOLINTBEGIN(misc-include-cleaner)

#include <chrono>
#include <cstdint>
#include <iomanip>
#include <iostream>
#include <random>
#include <range/v3/algorithm/for_each.hpp>
#include <range/v3/view.hpp>

#include "main_0.hpp"

namespace views = ranges::views;

constexpr auto CYCLES_COUNT = 100'000;

auto main(int /*argc*/, char* /*argv*/[]) -> int {
  std::random_device device;
  std::default_random_engine engine{device()};
  constexpr auto distribution_max = 2'147'483'647;
  std::uniform_int_distribution<int32_t> distribution{1, distribution_max};

  auto indices = views::iota(0) | views::take(CYCLES_COUNT);

  auto numsView = views::transform(indices, [&](auto /*i*/) {
    return distribution(engine);
  });

  int32_t solutionRes{0};
  double durationAvgNanoSecond{0};

  ranges::for_each(
    numsView,
    [&solutionRes, &durationAvgNanoSecond](int32_t num) {
      main_0::Solution solution;

      const auto start = std::chrono::high_resolution_clock::now();
      solution.identity(num);
      const auto finish = std::chrono::high_resolution_clock::now();

      const std::chrono::duration<double, std::nano> duration = finish - start;
      durationAvgNanoSecond += duration.count();
    }
  );

  durationAvgNanoSecond /= CYCLES_COUNT;

  std::cout << "solution() exec duration: " << std::setprecision(4)
            << durationAvgNanoSecond << " ns\n";

  return EXIT_SUCCESS;
}

// NOLINTEND(misc-include-cleaner)
