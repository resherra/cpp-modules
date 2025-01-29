#include "../headers/Character.hpp"
#include "../headers/utils.hpp"


std::string const & Character::getName() const
{
    return name;
}

void    Character::equip(AMateria* m)
{
    (void)m;
}

void    Character::unequip(int idx)
{
    (void)idx;
}

void    Character::use(int idx, ICharacter& target)
{
    if (idx < 0 && idx > 3)
        inventory[idx]->use(target);
    else
    {
        print("invalud materia inventory entry!");
        return;    
    }
}

Character::Character()
{
    print("Character default constructor!");
}

Character::Character(std::string _name): name(_name)
{}

Character&  Character::operator=(const Character& other)
{
    (void)other;
    return *this;
    // deep copy;
}

Character::Character(const Character& other)
{
    (void)other;
    //deep copy;
}

Character::~Character()
{
    print("Character default destructor!");
}

