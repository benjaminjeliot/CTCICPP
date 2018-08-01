//
// TreesAndGraphs/RouteBetweenNodes.cpp
//

#include <unordered_map>
#include <queue>
#include "RouteBetweenNodes.h"

bool RouteBetweenNodes::IsRoute(Graph& graph, Node* first, Node* second) {
	std::unordered_map<Node*, bool> visited;
	std::queue<Node*> queuedNodes;
	queuedNodes.push(first);
	queuedNodes.push(second);
	while(queuedNodes.size() != 0) {
		Node* currentNode = queuedNodes.front();
		queuedNodes.pop();
		bool value = visited[currentNode];
		if (value == true) {
			return true;
		}
		visited[currentNode] = true;
		for(Node* adjacent: currentNode->adjacents) {
			queuedNodes.push(adjacent);
		}
	}
	return false;
}

