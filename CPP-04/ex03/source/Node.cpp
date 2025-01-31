#include "../headers/Node.hpp"

Node::Node()
{
    print("Node default constructor!");
    materia = NULL;
}

Node&   Node::operator=(const Node& other)
{
    //copy ass operator;
    (void)other;
    return *this;
}

Node::Node(const Node& other)
{
    print("Node copy constructor!");
    (void)other;
    //copy constructor
}

Node::Node(AMateria* materia)
{
    print("Node materia constructor");
    this->materia = materia;
    next = NULL;
}

Node::~Node()
{
    print("Node destructor!");
    delete materia;
}