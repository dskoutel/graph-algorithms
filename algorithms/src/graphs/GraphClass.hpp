#ifndef GRAPHS_GRAPHCLASS_HPP_
#define GRAPHS_GRAPHCLASS_HPP_

#include <iostream>

namespace graphs {

	class AdjacencyList {

	};

	class AdjacencyMatrix {

	};

	template<typename GraphReprType, typename NODE, typename WEIGHT>
	class GraphRepresentation
	{
		public:
			GraphRepresentation();
			~GraphRepresentation();
			void addNode( NODE node );
			void addEdge( NODE node1, NODE node2, WEIGHT w );
			void addDirectedEdge( NODE node1, NODE node2, WEIGHT w );
			template<typename Fun> void forEveryNode( Fun F );
			template<typename Fun> void forEveryNeibOfNode( Fun F );
	};

	template<typename GraphReprType, typename NODE, typename WEIGHT>
	class Graph {
		public:
			void addNode( NODE node ) {
				m_repr.addNode( node );
			}
			void addEdge( NODE node1, NODE node2, WEIGHT w )
			{
				m_repr.addEdge( node1, node2, w );
			}
			void addDirectedEdge( NODE node1, NODE node2, WEIGHT w )
			{
				m_repr.addDirectedEdge( node1, node2, w );
			}
			template<typename Fun> void forEveryNode( Fun f )
			{
				m_repr.forEveryNode( f );
			}
			template<typename Fun> void forEveryNeibOfNode( Fun f )
			{
				m_repr.forEveryNeibOfNode( f );
			}
		private:
			GraphRepresentation<GraphReprType,NODE,WEIGHT> m_repr;
	};

};


#endif /* GRAPHS_GRAPHCLASS_HPP_ */
