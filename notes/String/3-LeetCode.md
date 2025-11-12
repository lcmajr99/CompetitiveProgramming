---

# 🧩 LeetCode 3 — Longest Substring Without Repeating Characters

**Linguagem:** C++
**Nível:** Médio
**Paradigma:** Sliding Window, Hash Map, Strings
**Link:** [LeetCode 3 — Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/description/)

---

## 📜 Enunciado

Dada uma string `s`, encontre o comprimento da **maior substring sem caracteres repetidos**.

### 🔹 Exemplos

**Exemplo 1:**

```text
Input: s = "abcabcbb"
Output: 3
Explicação: A substring sem repetição mais longa é "abc", de comprimento 3.
```

**Exemplo 2:**

```text
Input: s = "bbbbb"
Output: 1
Explicação: A substring sem repetição mais longa é "b", de comprimento 1.
```

**Exemplo 3:**

```text
Input: s = "pwwkew"
Output: 3
Explicação: A substring sem repetição mais longa é "wke", de comprimento 3.
```

---

## 💡 Intuição

* Percorrer a string mantendo uma **janela deslizante** (`left` e `right`) que representa a substring atual sem repetição.
* Atualizar a posição do início da janela quando um caractere repetido é encontrado.
* Usar um vetor ou mapa para armazenar o **último índice** de cada caractere.

---

## 🧠 Estratégia

* Criar um vetor `index` de tamanho 128 inicializado com -1 para armazenar o último índice de cada caractere ASCII.
* Variáveis:

  * `left` → início da janela.
  * `maxLen` → comprimento máximo da substring encontrada.
* Iterar pela string com `right`:

  * Se `index[s[right]] >= left`, atualizar `left = index[s[right]] + 1`.
  * Atualizar `index[s[right]] = right`.
  * Atualizar `maxLen = max(maxLen, right - left + 1)`.
* Retornar `maxLen`.

---

## 🧩 Código Fonte (Sliding Window)

```cpp
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> index(128, -1); // para todos os caracteres ASCII
        int maxLen = 0;
        int left = 0; // início da janela

        for (int right = 0; right < s.size(); right++) {
            char c = s[right];

            // se já apareceu, atualiza left para a posição seguinte
            if (index[c] >= left) {
                left = index[c] + 1;
            }

            index[c] = right; // atualiza último índice do caractere
            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};
```

---

## 📝 Código Anotado

* `index` → guarda o último índice de cada caractere ASCII.
* `left` → início da janela da substring sem repetição.
* Loop `for` com `right` percorre a string:

  * `if(index[c] >= left)` → caractere repetido dentro da janela atual, move `left`.
  * `index[c] = right` → atualiza último índice do caractere.
  * `maxLen = max(maxLen, right - left + 1)` → atualiza comprimento máximo.

---

## 🔄 Passo a Passo da Execução

Exemplo: `s = "abcabcbb"`

| right | s[right] | index[s[right]] | left | maxLen |
| ----- | -------- | --------------- | ---- | ------ |
| 0     | a        | -1              | 0    | 1      |
| 1     | b        | -1              | 0    | 2      |
| 2     | c        | -1              | 0    | 3      |
| 3     | a        | 0               | 1    | 3      |
| 4     | b        | 1               | 2    | 3      |
| 5     | c        | 2               | 3    | 3      |
| 6     | b        | 4               | 5    | 3      |
| 7     | b        | 6               | 7    | 3      |

Resultado: `3`

---

## ⏱️ Análise de Complexidade

| Aspecto | Complexidade | Explicação                           |
| ------- | ------------ | ------------------------------------ |
| Tempo   | O(n)         | Cada caractere é processado uma vez  |
| Espaço  | O(1)         | Vetor de tamanho fixo 128 para ASCII |

**Resumo:**

```text
Tempo: O(n)
Espaço: O(1)
```

---

## 🧪 Casos de Teste

| Entrada    | Saída Esperada |
| ---------- | -------------- |
| "abcabcbb" | 3              |
| "bbbbb"    | 1              |
| "pwwkew"   | 3              |
| ""         | 0              |
| "dvdf"     | 3              |

---

## 🚀 Observações Finais

* Implementação eficiente com **janela deslizante** e vetor para rastrear últimos índices.
* Evita necessidade de loops aninhados, garantindo O(n) de tempo.

---

## 📚 Referências

* [LeetCode 3 — Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/description/)
* [Sliding Window Technique — GeeksForGeeks](https://www.geeksforgeeks.org/window-sliding-technique/)

---

## ✅ Resumo Final

* Solução usa **janela deslizante** para encontrar substring sem repetição.
* **Tempo:** O(n)
* **Espaço:** O(1) (vetor fixo 128 elementos).
