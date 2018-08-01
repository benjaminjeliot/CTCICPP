//
// TreesAndGraphs/RouteBetweenNodes.h
//

#ifndef TREESANDGRAPHS_ROUTEBETWEENNODES_H_
#define TREESANDGRAPHS_ROUTEBETWEENNODES_H_

#include "Graph.h"
#include "Node.h"

class RouteBetweenNodes {
public:
	static bool IsRoute(Graph& graph, Node* first, Node* second);
};

#endif  // TREESANDGRAPHS_ROUTEBETWEENNODES_H_

