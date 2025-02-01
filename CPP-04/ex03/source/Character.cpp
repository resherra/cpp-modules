#include "../headers/Character.hpp"
#include "../headers/utils.hpp"

std::string const & Character::getName() const
{
    return name;
}

void    Character::equip(AMateria* m)
{
    if (!m)
        return;
    for (int i = 0; i < 4; i++)
    {
        if (!inventory[i])
        {
            inventory[i] = m;
            return;
        }
    }
    print("can't equip more materias!");
}

void    Character::unequip(int idx)
{
    if (idx < 0 || idx > 3)
    {
        print("Invalid materia inventory entry!");
        return;    
    }
    else
    {
        left->add(inventory[idx]);
        inventory[idx] = NULL;
    }
}

void    Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 3)
    {
        print("Invalid materia inventory entry!");
        return;
    }
    else
    {
        if (inventory[idx])
            inventory[idx]->use(target);
    }
}

//default constructor
Character::Character()
{
    print("Character default constructor!");
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
    left = new MateriasList;
}

// name constructor
Character::Character(std::string _name): name(_name)
{
    print("Character name constructor!");
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
    left = new MateriasList;
}

//assignment operator
Character&  Character::operator=(const Character& other)
{
    name = other.name;
    for (int i = 0; i < 4; i++)
    {
        if (other.inventory[i])
        {
            if (inventory[i])
                delete inventory[i];
            inventory[i] = other.inventory[i]->clone();
        }
        else
            inventory[i] = nullptr;
    }    
    delete left;
    left = other.left->duplicate();
    return *this;
}

//copy constructor
Character::Character(const Character& other)
{
    if (this != &other)
    {
        name = other.name;
        for (int i = 0; i < 4; i++)
        {
            if (other.inventory[i])
                inventory[i] = other.inventory[i]->clone();
            else
                inventory[i] = nullptr;
        }
        left = other.left->duplicate();
    }
}

//destructor
Character::~Character()
{
    print("Character destructor!");
    for (int i = 0; i < 4; i++)
        delete inventory[i];
    delete left;
}