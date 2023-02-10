#ifndef LEILAO_AVALIADOR_H
#define LEILAO_AVALIADOR_H
#pragma once

#include <algorithm>
#include "Leilao.hpp"

class Avaliador {
private:
    float maxValue;
    float minValue;
    std::vector<Lance> lancesOrderAsc;
    static bool ordeLance(const Lance&, const Lance&);

public:
    void avaliar(const Leilao&);
    [[nodiscard]] float getMaxValue() const;
    [[nodiscard]] float getMinValue() const;
    [[nodiscard]] std::vector<Lance> getLancesOrderAsc() const;
};

#endif
