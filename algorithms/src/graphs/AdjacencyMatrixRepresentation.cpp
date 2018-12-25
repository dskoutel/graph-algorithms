#include <iostream>
#include "AdjacencyMatrixRepresentation.hpp"

namespace graphs {

AdjacencyMatrixRepresentation::AdjacencyMatrixRepresentation() {
	std::cout << "Constructing a graph with AdjacencyMatrix representation" << std::endl;

}

AdjacencyMatrixRepresentation::~AdjacencyMatrixRepresentation() {
	std::cout << "Destroying a graph with AdjacencyMatrix representation" << std::endl;
}

} /* namespace graphs */
