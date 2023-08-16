#pragma once
// Hey Emacs, this is -*- coding: utf-8 -*-

#include <cassert>
#include <cstdint>

namespace main_0 {

class Solution {
 public:
  auto identity(std::int32_t N) -> std::int32_t {
    assert(N >= 1 && N <= 2'147'483'647);
    return N;
  }
};

} // namespace main_0
