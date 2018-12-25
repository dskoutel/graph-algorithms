//============================================================================
// Name        : algorithms.cpp
// Author      : Dimitris Skoutelakos
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "graphs/GraphClass.hpp"

int main() {
	std::cout << "Algorithms 101 project" << std::endl;

	graphs::Graph mygraph(graphs::ADJACENCY_LIST);
	graphs::Graph mygraph2(graphs::ADJACENCY_MATRIX);

	return 0;
}
