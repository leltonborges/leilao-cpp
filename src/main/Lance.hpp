#ifndef Lance_hpp
#define Lance_hpp

#include "Usuario.hpp"

class Lance {
private:
    Usuario usuario;
    float valor;
public:
    Lance(Usuario usuario, float valor);

    [[nodiscard]] float recuperaValor() const;
};

#endif /* Lance_hpp */
