/*
 * graph.cpp
 *
 *  Created on: 3 ??? 2018
 *      Author: User
 */
#include "GraphClass.hpp"
#include "GraphRepresentation.hpp"
#include "AdjacencyMatrixRepresentation.hpp"
#include "AdjacencyListRepresentation.hpp"

#include <iostream>

namespace graphs {

Graph::Graph( GraphReprType type ) {
	std::cout << "Constructing new graph" << std::endl;
	switch (type) {
		case ADJACENCY_MATRIX:
			m_repr = new AdjacencyMatrixRepresentation();
			break;
		case ADJACENCY_LIST:
			m_repr = new AdjacencyListRepresentation();
			break;
		default:
			break;
	}
}

Graph::~Graph() {
	std::cout << "Graph destroyed " << std::endl;
	delete m_repr;
}
}


