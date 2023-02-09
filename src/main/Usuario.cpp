#include "Usuario.hpp"

#include <utility>

Usuario::Usuario(std::string nome):
        nome(std::move(nome)) {
}

std::string Usuario::recuperaNome() const {
    return nome;
}
