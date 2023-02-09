#define CATCH_CONFIG_MAIN

#include <iostream>
#include "../main/Avaliador.h"
#include "catch2.h"

TEST_CASE("Deve recuperar o maior lance do lailão2") {
    const float valorEsperado = 4000.0f;
    Lance primeiroLance(Usuario("Fulano"), 1000);
    Lance segundoLance(Usuario("Beutrano"), valorEsperado);
    Leilao leilao("Fiat 147");
    leilao.recebeLance(segundoLance);
    leilao.recebeLance(primeiroLance);

    Avaliador leiloeiro{};
    leiloeiro.avaliar(leilao);
    float maiorValor = leiloeiro.getMaiorValor();

    REQUIRE(valorEsperado == maiorValor);
}

TEST_CASE("Deve recuperar o maior lance do lailão") {
    const float valorEsperado = 4000.0f;
    Lance primeiroLance(Usuario("Fulano"), 1000);
    Lance segundoLance(Usuario("Beutrano"), valorEsperado);
    Leilao leilao("Fiat 147");
    leilao.recebeLance(primeiroLance);
    leilao.recebeLance(segundoLance);

    Avaliador leiloeiro{};
    leiloeiro.avaliar(leilao);
    float maiorValor = leiloeiro.getMaiorValor();

    REQUIRE(valorEsperado == maiorValor);
}