## Hey Emacs, this is -*- coding: utf-8 -*-
<%
  project_name = utils.pascal_case(config["project_name"])
%>\
// Hey Emacs, this is -*- coding: utf-8 -*-

// NOLINTBEGIN(misc-include-cleaner)

#include "main_0.hpp"
#include <boost/test/tools/old/interface.hpp>

#define BOOST_TEST_MODULE ${project_name}
#include <boost/test/unit_test.hpp>

using Input = int;

struct Test {
  Input in;
  int out;
};

BOOST_AUTO_TEST_CASE(binary_gap) {
  std::vector<Test> tests{
    {42, 42},
    {42, 43},
  };

  using Solution_0 = main_0::Solution;

  {
    Solution_0 s_0;
    // BOOST_REQUIRE_EQUAL(s_0.uniquePaths(tests[0].in), tests[0].out);
  }

  {
    Solution_0 s_0;
    // BOOST_REQUIRE_NE(s_0.uniquePaths(tests[1].in), tests[1].out);
  }
}

// NOLINTEND(misc-include-cleaner)
