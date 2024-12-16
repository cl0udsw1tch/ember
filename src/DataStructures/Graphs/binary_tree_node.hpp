#pragma once
#include "tree_node.hpp"

class BinaryTreeNode : public TreeNode {

public:

	BinaryTreeNode(String id, const bool weighted = false);


	virtual Neighbor<GraphNode>* child1() const;


	virtual Neighbor<GraphNode>* child2() const;


	std::string to_string() const override;
};
