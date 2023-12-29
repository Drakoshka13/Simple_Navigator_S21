#include <gtest/gtest.h>
#include "../s21_graph_algorithms.h"

// TEST(tempTest, sum) {
//   ASSERT_EQ(1 + 1, 2);
// }

TEST(BFS, test1) {
  s21::Graph graph;
  s21::GraphAlgorithms test;
  graph.LoadGraphFromFile("tests/files/graph_7x7.txt");
  std::vector<size_t> solution = {1, 2, 3, 4, 5, 6, 7};
  std::vector<size_t> arr = test.BreadthFirstSearch(graph, 1);
  ASSERT_EQ(arr, solution);
  solution = {3, 1, 6, 7, 2, 4, 5};
  arr = test.BreadthFirstSearch(graph, 3);
  ASSERT_EQ(arr, solution);
}

TEST(BFS, test2) {
  s21::Graph graph;
  s21::GraphAlgorithms test;
  graph.LoadGraphFromFile("tests/files/graph_21x21.txt");
  std::vector<size_t> solution = {1, 2, 3, 8, 4, 7, 9, 10, 5, 6, 11, 13, 21, 12, 14, 15, 20, 16, 17, 19, 18};
  std::vector<size_t> arr = test.BreadthFirstSearch(graph, 1);
  ASSERT_EQ(arr, solution);
  solution = {15, 12, 17, 21, 11, 14, 16, 18, 19, 20, 5, 7, 10, 13, 4, 6, 3, 8, 9, 2, 1};
  arr = test.BreadthFirstSearch(graph, 15);
  ASSERT_EQ(arr, solution);
}

int main(int argc, char* argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
