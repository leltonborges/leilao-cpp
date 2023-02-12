#ifndef Lance_hpp
#define Lance_hpp

#include <string>
#include <utility>
#include "Usuario.hpp"
#include <iostream>

class Lance {
private:
    Usuario usuario;
    float valor;
public:
    Lance(Usuario usuario, float valor);
/*Construtor de copia*/
//    Lance(const Lance &lance);

/*Deletando construtor de copia*/
//    Lance(const Lance &lance) = delete;

    [[nodiscard]] float recuperaValor() const;

    [[nodiscard]] std::string getUserName() const;
};

#endif /* Lance_hpp */
