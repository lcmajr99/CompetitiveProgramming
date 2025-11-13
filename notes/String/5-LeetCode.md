
---

# 🧩 LeetCode 5 — Longest Palindromic Substring

**Linguagem:** C++  
**Nível:** Médio  
**Paradigma:** Expansão de Centro, Programação Dinâmica 
**Link:** [LeetCode 5 — Longest Palindromic Substring](https://leetcode.com/problems/longest-palindromic-substring/description/)  

---

## 📜 Enunciado

Dada uma string `s`, retorne a **substring palíndroma mais longa** presente em `s`.

Uma **substring palíndroma** é uma sequência de caracteres que lê igual da esquerda para a direita e da direita para a esquerda.

---

### 🔹 Exemplos

**Exemplo 1:**

```text
Input: s = "babad"
Output: "bab"
Explicação: "aba" também é uma resposta válida.
```

**Exemplo 2:**

```text
Input: s = "cbbd"
Output: "bb"
```

---

## 💡 Intuição

A ideia é expandir a partir de **cada posição possível de centro** e verificar até onde conseguimos formar um palíndromo.

Um palíndromo pode ter:

* **Comprimento ímpar** → centro em um único caractere.
* **Comprimento par** → centro entre dois caracteres adjacentes.

Em cada expansão, comparamos os caracteres à esquerda e à direita:

* Se forem iguais, continuamos expandindo.
* Caso contrário, interrompemos e calculamos o comprimento do palíndromo atual.

Mantemos o **maior comprimento** e o **índice inicial** da substring mais longa encontrada.

---

## 🧠 Estratégia

1. Percorrer a string de 0 até `n - 1`.
2. Para cada índice `i`, expandir:

   * Uma vez com centro em `i` (palíndromo ímpar).
   * Uma vez com centro entre `i` e `i + 1` (palíndromo par).
3. Atualizar o comprimento máximo encontrado e o índice inicial.
4. Retornar a substring correspondente.

---

## 🧩 Código Fonte (Expansão de Centro)

```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        if (s.size() <= 1) return s;

        int start = 0, maxLen = 1;

        for (int i = 0; i < s.size(); i++) {
            // Palíndromo ímpar: centro em i
            expandFromCenter(s, i, i, start, maxLen);

            // Palíndromo par: centro entre i e i+1
            expandFromCenter(s, i, i + 1, start, maxLen);
        }

        return s.substr(start, maxLen);
    }

private:
    void expandFromCenter(const string& s, int left, int right, int& start, int& maxLen) {
        while (left >= 0 && right < s.size() && s[left] == s[right]) {
            left--;
            right++;
        }

        // left e right saíram dos limites do palíndromo válido
        int len = right - left - 1;
        if (len > maxLen) {
            maxLen = len;
            start = left + 1;
        }
    }
};
```

---

## 📝 Código Anotado

* **`expandFromCenter`**

  * Recebe dois índices (`left` e `right`) e expande enquanto os caracteres forem iguais.
  * Atualiza o tamanho máximo (`maxLen`) e o início (`start`) do palíndromo encontrado.

* **`longestPalindrome`**

  * Itera por todos os centros possíveis.
  * Expande nos dois modos (ímpar e par).
  * Retorna a substring mais longa.

---

## 🔄 Passo a Passo da Execução

Exemplo: `s = "babad"`

| Iteração | Centro | Expansão Ímpar | Expansão Par | Maior Palíndromo |
| -------- | ------ | -------------- | ------------ | ---------------- |
| 0        | "b"    | "b"            | ""           | "b"              |
| 1        | "a"    | "bab"          | ""           | "bab"            |
| 2        | "b"    | "aba"          | ""           | "bab"            |
| 3        | "a"    | "a"            | ""           | "bab"            |
| 4        | "d"    | "d"            | ""           | "bab"            |

**Resultado final:** `"bab"`

---

## ⏱️ Análise de Complexidade

| Aspecto    | Complexidade | Explicação                                       |
| ---------- | ------------ | ------------------------------------------------ |
| **Tempo**  | O(n²)        | Cada expansão pode percorrer até `n` caracteres. |
| **Espaço** | O(1)         | Uso apenas de variáveis auxiliares.              |

---

## 🧪 Casos de Teste

| Entrada              | Saída Esperada     |
| -------------------- | ------------------ |
| `"babad"`            | `"bab"` ou `"aba"` |
| `"cbbd"`             | `"bb"`             |
| `"a"`                | `"a"`              |
| `"ac"`               | `"a"` ou `"c"`     |
| `"forgeeksskeegfor"` | `"geeksskeeg"`     |

---

## 🚀 Observações Finais

* O método de **expansão de centro** é mais simples que a abordagem com DP e consome menos memória.
* Apesar de ser O(n²), é eficiente o suficiente para a maioria dos casos.
* Para uma versão O(n), pode-se usar o **Algoritmo de Manacher**.

---

## 📚 Referências

* [LeetCode 5 — Longest Palindromic Substring](https://leetcode.com/problems/longest-palindromic-substring/description/)
* [GeeksForGeeks — Expand Around Center Approach](https://www.geeksforgeeks.org/longest-palindrome-substring-set-2/)

---

## ✅ Resumo Final

* Estratégia: **Expansão de Centro**
* **Tempo:** O(n²)
* **Espaço:** O(1)
* Encontra o palíndromo mais longo sem usar memória extra.

---
