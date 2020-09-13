//============================================================================
// Name        : algorithms.cpp
// Author      : Dimitris Skoutelakos
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "graphs/GraphClass.hpp"
#include "utilities/Timer.hpp"

int main()
{
	profile::Timer t = profile::Timer("generation");
	for( int i = 0 ; i < 10; i++ ) {
		graphs::Graph<graphs::AdjacencyList, int, double> graph1();
		graphs::Graph<graphs::AdjacencyMatrix, int, double> graph2();
	}
}
