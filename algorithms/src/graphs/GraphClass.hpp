#ifndef GRAPHS_GRAPHCLASS_HPP_
#define GRAPHS_GRAPHCLASS_HPP_


namespace graphs {

	enum GraphReprType {
		ADJACENCY_MATRIX, ADJACENCY_LIST
	};

	class Graph {
		public:
			Graph( GraphReprType tp );
			~Graph();
		private:
			class GraphRepresentation *m_repr;
	};

};


#endif /* GRAPHS_GRAPHCLASS_HPP_ */
