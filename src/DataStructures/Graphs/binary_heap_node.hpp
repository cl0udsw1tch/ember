#pragma once
#include "binary_search_tree_node.hpp"
#include "binary_tree_node.hpp"
class BinaryHeapNode : public BinaryTreeNode {

public:

	double data;
	size_t index = - 1;

public:

	BinaryHeapNode(String id, double data, size_t index);

	std::string to_string() const override;

};