#include <iostream>
#include "GraphRepresentation.hpp"

namespace graphs {

GraphRepresentation::GraphRepresentation() {
	std::cout << "Base Representation created " << std::endl;

}

GraphRepresentation::~GraphRepresentation() {
	std::cout << "Base Representation destroyed " << std::endl;
}

} /* namespace graphs */
