//
// TreeAndGraphs/RouteBetweenNodesTest.cpp
//

#include <iostream>
#include "DummyUnit.h"
#include "RouteBetweenNodesTest.h"

void RouteBetweenNodesTest::BuildGraph0(Graph& graph) {
	std::vector<Node>(7).swap(graph.nodes);
	graph.nodes[0].adjacents.push_back(&graph.nodes[1]);
	graph.nodes[1].adjacents.push_back(&graph.nodes[2]);
	graph.nodes[2].adjacents.push_back(&graph.nodes[0]);
	graph.nodes[2].adjacents.push_back(&graph.nodes[3]);
	graph.nodes[3].adjacents.push_back(&graph.nodes[2]);
	graph.nodes[4].adjacents.push_back(&graph.nodes[6]);
	graph.nodes[5].adjacents.push_back(&graph.nodes[4]);
	graph.nodes[6].adjacents.push_back(&graph.nodes[5]);
}

void RouteBetweenNodesTest::BuildGraph1(Graph& graph) {
	std::vector<Node>(6).swap(graph.nodes);
	graph.nodes[0].adjacents.push_back(&graph.nodes[4]);
	graph.nodes[0].adjacents.push_back(&graph.nodes[5]);
	graph.nodes[1].adjacents.push_back(&graph.nodes[3]);
	graph.nodes[1].adjacents.push_back(&graph.nodes[4]);
	graph.nodes[2].adjacents.push_back(&graph.nodes[1]);
	graph.nodes[3].adjacents.push_back(&graph.nodes[2]);
	graph.nodes[3].adjacents.push_back(&graph.nodes[4]);
}

void RouteBetweenNodesTest::RouteBetweenNodesGraph0() {
	Graph graph;
	BuildGraph0(graph);
	DummyUnit::assertEquals(true, RouteBetweenNodes::IsRoute(graph, &graph.nodes[0], &graph.nodes[1]));
	DummyUnit::assertEquals(true, RouteBetweenNodes::IsRoute(graph, &graph.nodes[0], &graph.nodes[3]));
	DummyUnit::assertEquals(true, RouteBetweenNodes::IsRoute(graph, &graph.nodes[3], &graph.nodes[0]));
	DummyUnit::assertEquals(true, RouteBetweenNodes::IsRoute(graph, &graph.nodes[0], &graph.nodes[6]));
	DummyUnit::assertEquals(true, RouteBetweenNodes::IsRoute(graph, &graph.nodes[6], &graph.nodes[0]));
	DummyUnit::assertEquals(true, RouteBetweenNodes::IsRoute(graph, &graph.nodes[6], &graph.nodes[4]));
}

void RouteBetweenNodesTest::RouteBetweenNodesGraph1() {
	Graph graph;
	BuildGraph1(graph);
	DummyUnit::assertEquals(true, RouteBetweenNodes::IsRoute(graph, &graph.nodes[0], &graph.nodes[3]));
	DummyUnit::assertEquals(true, RouteBetweenNodes::IsRoute(graph, &graph.nodes[0], &graph.nodes[4]));
	DummyUnit::assertEquals(true, RouteBetweenNodes::IsRoute(graph, &graph.nodes[3], &graph.nodes[1]));
	DummyUnit::assertEquals(true, RouteBetweenNodes::IsRoute(graph, &graph.nodes[4], &graph.nodes[1]));
	DummyUnit::assertEquals(true, RouteBetweenNodes::IsRoute(graph, &graph.nodes[5], &graph.nodes[0]));
	DummyUnit::assertEquals(true, RouteBetweenNodes::IsRoute(graph, &graph.nodes[1], &graph.nodes[0]));
}

void RouteBetweenNodesTest::RouteBetweenNodesTests() {
	std::cout << "RouteBetweenNodesTest" << std::endl;
	RouteBetweenNodesGraph0();
	RouteBetweenNodesGraph1();
}


