#ifndef GRAPHS_GRAPHCLASS_HPP_
#define GRAPHS_GRAPHCLASS_HPP_

#include <iostream>

namespace graphs {

	enum GraphRepresentationType {
		ADJACENCY_LIST,
		ADJACENCY_TABLE
	};

	template<GraphRepresentationType T, typename NODE, typename WEIGHT>
	class GraphRepresentation
	{
		public:
			GraphRepresentation();
			~GraphRepresentation();
			void addNode( NODE node );
			void addEdge( NODE node1, NODE node2, WEIGHT w );
			template<typename Fun> void forEveryNode( Fun F );
			template<typename Fun> void forEveryNeibOfNode( Fun F );
			template<typename Fun> void forEveryEdge( Fun F );
	};

	template<GraphRepresentationType T, typename NODE, typename WEIGHT>
	class Graph {
		public:
			Graph( bool directed = false ) {
				m_directed = directed;
			}

			void addNode( NODE node ) {
				m_repr.addNode( node );
			}
			void addEdge( NODE node1, NODE node2, WEIGHT w )
			{
				m_repr.addEdge( node1, node2, w );
				if( !m_directed ) m_repr.addEdge( node2, node1, w );
			}
			template<typename Fun> void forEveryNode( Fun f )
			{
				m_repr.forEveryNode( f );
			}
			template<typename Fun> void forEveryNeibOfNode( Fun f )
			{
				m_repr.forEveryNeibOfNode( f );
			}
			template<typename Fun> void forEveryEdge( Fun f )
			{
				m_repr.forEveryEdge( f );
			}
		private:
			GraphRepresentation<T,NODE,WEIGHT> m_repr;
			bool m_directed;
	};

};


#endif /* GRAPHS_GRAPHCLASS_HPP_ */
