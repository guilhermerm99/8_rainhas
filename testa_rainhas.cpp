#define CATCH_CONFIG_MAIN
#include "rainhas.hpp"
#include "catch.hpp"

TEST_CASE("Soluções inválidas para o problema", "[rainhas]") {
    SECTION("Soluções inválidas com 8 rainhas") {
        REQUIRE(verifica_solucao_8_rainhas("tabuleiros/teste_8_rainhas.txt") == 0);
        REQUIRE(verifica_solucao_8_rainhas("tabuleiros/teste_13.txt") == 0);
        REQUIRE(verifica_solucao_8_rainhas("tabuleiros/teste_14.txt") == 0);
        REQUIRE(verifica_solucao_8_rainhas("tabuleiros/teste_15.txt") == 0);
    }

    SECTION("Soluções inválidas com diferentes números de rainhas") {
        REQUIRE(verifica_solucao_8_rainhas("tabuleiros/teste_1.txt") == 0);
        REQUIRE(verifica_solucao_8_rainhas("tabuleiros/teste_2.txt") == 0);
        REQUIRE(verifica_solucao_8_rainhas("tabuleiros/teste_3.txt") == 0);
        REQUIRE(verifica_solucao_8_rainhas("tabuleiros/teste_4.txt") == 0);
        REQUIRE(verifica_solucao_8_rainhas("tabuleiros/teste_5.txt") == 0);
        REQUIRE(verifica_solucao_8_rainhas("tabuleiros/teste_6.txt") == 0);
        REQUIRE(verifica_solucao_8_rainhas("tabuleiros/teste_7.txt") == 0);
        REQUIRE(verifica_solucao_8_rainhas("tabuleiros/teste_8.txt") == 0);
        REQUIRE(verifica_solucao_8_rainhas("tabuleiros/teste_9.txt") == 0);
        REQUIRE(verifica_solucao_8_rainhas("tabuleiros/teste_10.txt") == 0);
        REQUIRE(verifica_solucao_8_rainhas("tabuleiros/teste_30.txt") == 0);
        REQUIRE(verifica_solucao_8_rainhas("tabuleiros/teste_31.txt") == 0);
    }
}

TEST_CASE("Soluções válidas para o problema", "[rainhas]") {
    SECTION("Soluções válidas com 8 rainhas") {
        REQUIRE(verifica_solucao_8_rainhas("tabuleiros/teste_11.txt") == 1);
    }

    SECTION("Soluções válidas com diferentes números de rainhas") {
        REQUIRE(verifica_solucao_8_rainhas("tabuleiros/teste_25.txt") == 1);
        REQUIRE(verifica_solucao_8_rainhas("tabuleiros/teste_26.txt") == 1);
        REQUIRE(verifica_solucao_8_rainhas("tabuleiros/teste_27.txt") == 1);
        REQUIRE(verifica_solucao_8_rainhas("tabuleiros/teste_28.txt") == 1);
        REQUIRE(verifica_solucao_8_rainhas("tabuleiros/teste_29.txt") == 1);
    }
}

TEST_CASE("Matrizes inválidas para o problema", "[rainhas]") {
    REQUIRE(verifica_solucao_8_rainhas("tabuleiros/teste_12.txt") == -1);
    REQUIRE(verifica_solucao_8_rainhas("tabuleiros/teste_16.txt") == -1);
    REQUIRE(verifica_solucao_8_rainhas("tabuleiros/teste_17.txt") == -1);
    REQUIRE(verifica_solucao_8_rainhas("tabuleiros/teste_18.txt") == -1);
    REQUIRE(verifica_solucao_8_rainhas("tabuleiros/teste_19.txt") == -1);
    REQUIRE(verifica_solucao_8_rainhas("tabuleiros/teste_20.txt") == -1);
    REQUIRE(verifica_solucao_8_rainhas("tabuleiros/teste_21.txt") == -1);
    REQUIRE(verifica_solucao_8_rainhas("tabuleiros/teste_22.txt") == -1);
    REQUIRE(verifica_solucao_8_rainhas("tabuleiros/teste_23.txt") == -1);
    REQUIRE(verifica_solucao_8_rainhas("tabuleiros/teste_24.txt") == -1);
}
