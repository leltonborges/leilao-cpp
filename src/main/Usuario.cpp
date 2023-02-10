#include "Usuario.hpp"

#include <utility>

Usuario::Usuario(std::string nome):
        name(std::move(nome)) {
}

std::string Usuario::getName() const {
    return name;
}

std::string Usuario::getFirstName() const {
    return this->name.substr(0, this->name.find(' '));
}