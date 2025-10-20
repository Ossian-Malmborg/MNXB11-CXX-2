#include "as2.hpp"

namespace homework {

Knight::Knight(const std::string& name)
    :  Entity(name), weapon("longsword") {}

void Knight::attack() const {
    std::cout << name << " attacks with " << weapon << "\n";
}

void Knight::setWeapon(const std::string& newWeapon) {
    weapon = newWeapon;
}

std::unique_ptr<Entity> Knight::clone() const {
    return std::make_unique<Knight>(*this);
}

Sorcerer::Sorcerer(const std::string& name)
    :  Entity(name), spell("fireball") {}

void Sorcerer::attack() const {
    std::cout << name << " uses the spell " << spell << "\n";
}

void Sorcerer::setSpell(const std::string& newSpell) {
    spell = newSpell;
}

std::unique_ptr<Entity> Sorcerer::clone() const {
    return std::make_unique<Sorcerer>(*this);
}    

}; // namespace homework

