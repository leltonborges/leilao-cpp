#include "../main/Avaliador.h"
#include "catch2.h"

static Leilao getLeiloes();

TEST_CASE("Avaliador") {
    Leilao leiloes = GENERATE(getLeiloes());

    Avaliador leiloeiro{};

    SECTION("Deve recuperar o maior lance do lailão") {
        leiloeiro.avaliar(leiloes);
        float maiorValor = leiloeiro.getMaxValue();

        REQUIRE(4000.0f == maiorValor);
    }

    SECTION("Deve recuperar o menor lance do lailão") {
        leiloeiro.avaliar(leiloes);
        float minValue = leiloeiro.getMinValue();

        REQUIRE(100.0f == minValue);
    }
}

static Leilao getLeiloes() {
    Lance lance(Usuario("Fulano"), 4000.0f);
    Lance lance1(Usuario("Fulano1"), 800.0f);
    Lance lance2(Usuario("Fulano2"), 2500.0f);
    Lance lance3(Usuario("Fulano3"), 1500.0f);
    Lance lance4(Usuario("Beutrano"), 100.0f);
    Leilao leilao("Fiat 147");
    leilao.recebeLance(lance);
    leilao.recebeLance(lance1);
    leilao.recebeLance(lance2);
    leilao.recebeLance(lance3);
    leilao.recebeLance(lance4);
    return leilao;
}