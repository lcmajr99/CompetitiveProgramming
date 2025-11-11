
---

# 🧩 LeetCode 344 — Reverse String

**Linguagem:** C++  
**Nível:** Fácil  
**Paradigma:** Recursão, Manipulação de Vetores  
**Link:** [LeetCode 344 — Reverse String](https://leetcode.com/problems/reverse-string/description/)  

---

## 📜 Enunciado

Dado um array de caracteres `s`, escreva uma função que **inverta os caracteres in-place** (sem usar memória adicional significativa).

Você **deve** modificar o vetor original diretamente e **usar apenas O(1)** memória extra.

### 🔹 Exemplos

**Exemplo 1:**
```text
Input:  s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
````

**Exemplo 2:**

```text
Input:  s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]
```
---

## 💡 Intuição

* Trocar o primeiro caractere com o último, o segundo com o penúltimo, e assim por diante.
* Continuar até que os ponteiros se encontrem ou se cruzem.
* Pode ser implementado **iterativamente** (dois ponteiros) ou **recursivamente**.

---

## 🧠 Estratégia

* Criar uma função recursiva `reverseHelper` com parâmetros `left` e `right`.
* Se `left >= right`, retornar (caso base).
* Trocar `s[left]` e `s[right]`.
* Chamar recursivamente com `left + 1` e `right - 1`.

---

## 🧩 Código Fonte (Recursivo)

```cpp
class Solution {
   public:
    void reverseString(vector<char>& s) { 
        reverseHelper(s, 0, s.size() - 1); 
    }

   private:
    void reverseHelper(vector<char>& s, int left, int right) {
        if (left >= right) return;              // Caso base: ponteiros se cruzaram
        swap(s[left], s[right]);                // Troca elementos
        reverseHelper(s, left + 1, right - 1);  // Chamada recursiva para próximos índices
    }
};
```

---

## 📝 Código Anotado

* `reverseString`: função pública que inicia a recursão do vetor completo.
* `reverseHelper`:

  * `if (left >= right) return;` → condição de parada.
  * `swap(s[left], s[right]);` → troca elementos das extremidades.
  * `reverseHelper(s, left + 1, right - 1);` → avança recursivamente para o centro.

---

## 🔄 Passo a Passo da Execução

Exemplo: `s = ['h','e','l','l','o']`

| Passo | left | right | Troca | Vetor resultante |
| ----- | ---- | ----- | ----- | ---------------- |
| 1     | 0    | 4     | h ↔ o | [o, e, l, l, h]  |
| 2     | 1    | 3     | e ↔ l | [o, l, l, e, h]  |
| 3     | 2    | 2     | –     | [o, l, l, e, h]  |

---

## ⚙️ Funcionamento Interno (Recursão)

```
reverseString(['h','e','l','l','o'])
 └── reverseHelper(s, 0, 4)
      └── swap(s[0], s[4])
      └── reverseHelper(s, 1, 3)
            └── swap(s[1], s[3])
            └── reverseHelper(s, 2, 2)
                 └── return
```

---

## ⏱️ Análise de Complexidade

| Aspecto        | Complexidade | Explicação                         |
| -------------- | ------------ | ---------------------------------- |
| Tempo          | O(n)         | Cada caractere é visitado uma vez. |
| Espaço (pilha) | O(n)         | Recursão empilha até n/2 chamadas. |
| Memória extra  | O(1)         | Nenhum vetor adicional é criado.   |

**Resumo:**

```text
Tempo: O(n)
Espaço: O(n) devido à recursão
Memória auxiliar: O(1)
```

---

## ⚡ Alternativa Iterativa

Evita uso de pilha de recursão, mantendo O(n) tempo e O(1) memória:

```cpp
class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0, right = s.size() - 1;
        while (left < right) {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
};
```

---

## 🧪 Casos de Teste

| Entrada                   | Saída Esperada            | Observação           |
| ------------------------- | ------------------------- | -------------------- |
| ["a"]                     | ["a"]                     | Vetor de 1 elemento  |
| ["a","b"]                 | ["b","a"]                 | Caso mínimo de troca |
| ["h","e","l","l","o"]     | ["o","l","l","e","h"]     | Exemplo do enunciado |
| ["H","a","n","n","a","h"] | ["h","a","n","n","a","H"] | Exemplo clássico     |
| ["A","B","C","D","E","F"] | ["F","E","D","C","B","A"] | Vetor de tamanho par |

---

## 🚀 Observações Finais

* A recursão é elegante, mas pode causar **stack overflow** para `n ≈ 10⁵`.
* A versão iterativa é mais segura para competições ou vetores grandes.
* Testar casos de borda: vetor com 1 elemento, 2 elementos, tamanho par e ímpar.

---

## 📚 Referências

* [LeetCode 344 — Reverse String](https://leetcode.com/problems/reverse-string/description/)
* [C++ std::swap](https://en.cppreference.com/w/cpp/algorithm/swap)
* [Recursion in C++ — GeeksForGeeks](https://www.geeksforgeeks.org/recursion/)

---

## ✅ Resumo Final

* Solução recursiva in-place.
* **Tempo:** O(n)
* **Espaço:** O(n) por causa da recursão (versão iterativa O(1)).
* Elegante, mas iterativa é mais robusta para grandes entradas.
