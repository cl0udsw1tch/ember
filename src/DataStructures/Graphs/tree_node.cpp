#include "tree.hpp"

TreeNode::TreeNode(String id, const bool weighted)
	: GraphNode(id, weighted) {
	this->set_type("TreeNode");
}