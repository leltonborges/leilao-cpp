#ifndef LEILAO_AVALIADOR_H
#define LEILAO_AVALIADOR_H
#pragma once

#include "Leilao.hpp"

class Avaliador {
private:
    float maxValue;
    float minValue;

public:
    void avaliar(const Leilao&);
    [[nodiscard]] float getMaxValue() const;
    [[nodiscard]] float getMinValue() const;
};

#endif
