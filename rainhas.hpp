/*
Copyright 2024 Guilherme Ribeiro de Macedo

Este arquivo faz parte do projeto de resolução do problema das 8 rainhas.

Autor: Guilherme Ribeiro de Macedo
Contato: guilhermerm99@gmail.com
*/
#ifndef RAINHAS_HPP_
#define RAINHAS_HPP_

#include <string>
#include <vector>

int verificaTamanho(const std::string& filename);
std::vector<std::string> lerArquivo(const std::string& filename);
std::vector<std::vector<int>> converterParaMatriz(const std::vector<std::string>& linhas);
int check(const std::string& filename);
int verifica_solucao_8_rainhas(const std::string& filename);

#endif  // RAINHAS_HPP_
