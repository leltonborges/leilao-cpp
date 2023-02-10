#include "Lance.hpp"

#include <utility>

Lance::Lance(Usuario usuario, float valor):
        usuario(std::move(usuario)),
        valor(valor) {
}

float Lance::recuperaValor() const {
    return valor;
}

std::string Lance::getUserName() const {
    return this->usuario.recuperaNome();
}
