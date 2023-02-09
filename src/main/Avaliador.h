#ifndef LEILAO_AVALIADOR_H
#define LEILAO_AVALIADOR_H
#pragma once

#include "Leilao.hpp"

class Avaliador {
private:
    float maiorValor;

public:
    void avaliar(const Leilao&);
    [[nodiscard]] float getMaiorValor() const;
};

#endif
