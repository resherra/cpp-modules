#ifndef node_hpp
#define node_hpp

#include "AMateria.hpp"

class   Node
{
    public:
        AMateria*   materia;
        Node*       next;

        Node&       operator=(const Node&);

        Node();
        Node(const Node&);
        Node(AMateria* materia);
        ~Node();
};

#endif