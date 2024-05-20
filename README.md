### Documentação do Projeto "8 Rainhas"

https://github.com/guilhermerm99/8_rainhas

#### Sumário
- [Descrição do Projeto](#descrição-do-projeto)
- [Como Usar o Código](#como-usar-o-código)
- [Métricas de Valgrind](#métricas-de-valgrind)
- [Resultados do Cppcheck](#resultados-do-cppcheck)

### Descrição do Projeto

Este projeto implementa a solução para o problema das 8 rainhas, um clássico problema de xadrez e programação que envolve posicionar 8 rainhas em um tabuleiro de xadrez 8x8 de forma que nenhuma rainha possa atacar outra. O projeto inclui os seguintes arquivos:

- `rainhas.cpp`: Implementação das funções principais para resolver o problema.
- `rainhas.hpp`: Declarações das funções e classes usadas em `rainhas.cpp`.
- `testa_rainhas.cpp`: Arquivo de teste para validar a solução implementada.

### Como Usar o Código

Para compilar e executar o código, siga os passos abaixo:

1. **Compilação:**

   Compile os arquivos `rainhas.cpp` e `testa_rainhas.cpp` usando o comando:
   ```sh
   g++ -o testa_rainhas rainhas.cpp testa_rainhas.cpp
   ```

2. **Execução:**

   Execute o arquivo compilado:
   ```sh
   ./testa_rainhas
   ```

3. **Verificação de Erros e Análise de Memória:**

   - **Cppcheck:**

     Utilize o Cppcheck para analisar o código em busca de erros de estilo, possíveis bugs e outras questões:
     ```sh
     cppcheck rainhas.cpp testa_rainhas.cpp
     ```

   - **Valgrind:**

     Utilize o Valgrind para verificar a presença de erros de memória:
     ```sh
     valgrind ./testa_rainhas
     ```

### Métricas de Valgrind

O Valgrind é uma ferramenta poderosa para a detecção de erros de memória. Aqui estão as métricas obtidas após a execução do `testa_rainhas` com o Valgrind:

- **Heap Summary:**
  - Em uso no término: 0 bytes em 0 blocos
  - Uso total do heap: 2,640 alocações, 2,640 desalocações, 1,468,427 bytes alocados

- **Resumo de Erros:**
  - Todos os blocos de heap foram liberados — não há vazamentos de memória.
  - Nenhum erro encontrado durante a execução.

Comando utilizado:
```sh
valgrind ./testa_rainhas
```

Saída do Valgrind:
```plaintext
==4407== Memcheck, a memory error detector
==4407== Copyright (C) 2002-2022, and GNU GPL'd, by Julian Seward et al.
==4407== Using Valgrind-3.22.0 and LibVEX; rerun with -h for copyright info
==4407== Command: ./testa_rainhas
==4407==
===============================================================================
All tests passed (41 assertions in 4 test cases)

==4407==
==4407== HEAP SUMMARY:
==4407==     in use at exit: 0 bytes in 0 blocks
==4407==   total heap usage: 2,640 allocs, 2,640 frees, 1,468,427 bytes allocated
==4407==
==4407== All heap blocks were freed -- no leaks are possible
==4407==
==4407== For lists of detected and suppressed errors, rerun with: -s
==4407== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```

### Resultados do Cppcheck

O Cppcheck é uma ferramenta estática de análise de código que ajuda a encontrar erros e melhorias potenciais no código C++. Aqui estão os resultados obtidos:

- **Resultado:**
  - `catch.hpp`: Falha ao avaliar a condição #if.
  - Informação: Muitas configurações de #ifdef — o Cppcheck verifica apenas 12 configurações. Use --force para verificar todas as configurações.

Comando utilizado:
```sh
cppcheck rainhas.cpp testa_rainhas.cpp
```

Saída do Cppcheck:
```plaintext
Checking rainhas.cpp ...
1/2 files checked 65% done
Checking testa_rainhas.cpp ...
catch.hpp:5150:0: error: failed to evaluate #if condition [preprocessorErrorDirective]
#if __has_include(<optional>) && __cplusplus >= 201703L
^
2/2 files checked 100% done
nofile:0:0: information: Too many #ifdef configurations - cppcheck only checks 12 configurations. Use --force to check all configurations. For more details, use --enable=information. [toomanyconfigs]
```

Para uma verificação mais detalhada, utilize:
```sh
cppcheck --force rainhas.cpp testa_rainhas.cpp
```

---

Seguindo essas instruções, você poderá compilar, executar, testar e analisar a memória do seu projeto, garantindo que ele esteja livre de erros e otimizado. Se precisar de mais alguma coisa, estou à disposição!