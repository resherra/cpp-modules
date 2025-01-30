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
    if (idx < 0 && idx > 3)
    {
        left.add(inventory[idx]);
        inventory[idx] = NULL;
        //do something
    }
    else
    {
        print("Invalid materia inventory entry!");
        return;    
    }
}

void    Character::use(int idx, ICharacter& target)
{
    if (idx < 0 && idx > 3)
        inventory[idx]->use(target);
    else
    {
        print("Invalid materia inventory entry!");
        return;    
    }
}

//default constructor
Character::Character()
{
    print("Character default constructor!");
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

// name constructor
Character::Character(std::string _name): name(_name)
{
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

//assignment operator
Character&  Character::operator=(const Character& other)
{
    name = other.name;
    for (int i = 0; i < 4; i++)
    {
        if (other.inventory[i])
        {
            delete inventory[i];
            inventory[i] = other.inventory[i]->clone();
        }
    }

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
            if (inventory[i])
                inventory[i] = other.inventory[i]->clone();
            else
                inventory[i] = NULL;
        }
    } 
}

//destructor
Character::~Character()
{
    print("Character default destructor!");
    for (int i = 0; i < 4; i++)
        delete inventory[i];
}