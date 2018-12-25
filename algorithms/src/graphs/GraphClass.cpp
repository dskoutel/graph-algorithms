/*
 * graph.cpp
 *
 *  Created on: 3 ??? 2018
 *      Author: User
 */
#include "GraphClass.hpp"

#include <iostream>

namespace graphs {

Graph::Graph() {
	std::cout << "Constructing new graph" << std::endl;
	test();
}

Graph::~Graph() {
	std::cout << "Graph destroyed " << std::endl;
}

void Graph::test() {
	std::cout << "testing graph" << std::endl;
}

}


