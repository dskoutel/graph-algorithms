#include <iostream>
#include "AdjacencyListRepresentation.hpp"

namespace graphs {

AdjacencyListRepresentation::AdjacencyListRepresentation() {
	std::cout << "Constructing a graph with AdjacencyList representation" << std::endl;
}

AdjacencyListRepresentation::~AdjacencyListRepresentation() {
	std::cout << "Destroying a graph with AdjacencyList representation" << std::endl;

}

} /* namespace graphs */
