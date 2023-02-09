#include "Avaliador.h"

void Avaliador::avaliar(const Leilao& leilao) {
    Lance lance = leilao.recuperaLances().back();
    this->maiorValor = lance.recuperaValor();
}

float Avaliador::getMaiorValor() const {
    return this->maiorValor;
}
