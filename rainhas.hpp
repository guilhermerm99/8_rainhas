#ifndef RAINHAS_HPP
#define RAINHAS_HPP

#include <string>
#include <vector>

int verificaTamanho(const std::string& filename);
std::vector<std::string> lerArquivo(const std::string& filename);
std::vector<std::vector<int>> converterParaMatriz(const std::vector<std::string>& linhas);
int check(const std::string& filename);
int verifica_solucao_8_rainhas(const std::string& filename);

#endif // RAINHAS_HPP
