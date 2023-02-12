
#include "Lance.hpp"

Lance::Lance(Usuario usuario, float valor):
        usuario(std::move(usuario)),
        valor(valor) {
}

/**
 * Construtor de copia
 **/
/*Lance::Lance(const Lance &other):
        usuario(other.usuario),
        valor(other.valor) {
    std::cout << "Executando cópia de lance" << std::endl;
    std::cout << "Lance valor: " << other.valor << std::endl;
    std::cout << "Lance user: " << other.usuario.getName() << std::endl;
}*/

float Lance::recuperaValor() const {
    return valor;
}

std::string Lance::getUserName() const {
    return this->usuario.getName();
}

