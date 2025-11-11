
---

# 🧩 LeetCode 1 — Two Sum

**Linguagem:** C++  
**Nível:** Fácil  
**Paradigma:** Hash Map, Busca, Vetores  
**Link:** [LeetCode 1 — Two Sum](https://leetcode.com/problems/two-sum/)

---

## 📜 Enunciado

Dado um array de inteiros `nums` e um inteiro `target`, retorne **índices de dois números** tais que eles somem `target`.

Você pode assumir que **existe exatamente uma solução**, e **não pode usar o mesmo elemento duas vezes**.
Os índices podem ser retornados em **qualquer ordem**.

### 🔹 Exemplos

**Exemplo 1:**

```text
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explicação: nums[0] + nums[1] == 9
```

**Exemplo 2:**

```text
Input: nums = [3,2,4], target = 6
Output: [1,2]
```

**Exemplo 3:**

```text
Input: nums = [3,3], target = 6
Output: [0,1]
```

---

## 💡 Intuição

* Para cada elemento, calcular o **complemento** que somado resulta em `target`.
* Armazenar os elementos já vistos em um **hash map** para acesso rápido.

---

## 🧠 Estratégia

* Criar um `unordered_map<int,int>` chamado `mapa` que mapeia valores de `nums` para seus índices.
* Iterar pelo vetor `nums`:

  * Calcular `complemento = target - nums[i]`.
  * Se `complemento` já estiver no `mapa`, retornar `{mapa[complemento], i}`.
  * Caso contrário, adicionar `nums[i]` no `mapa` com seu índice.
* Retornar vetor vazio `{}` se não houver solução (não aplicável no problema, mas necessário para compilação).

---

## 🧩 Código Fonte (Hash Map)

```cpp
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mapa; 

        for (int i = 0; i < nums.size(); i++) {
            int complemento = target - nums[i];
            if (mapa.find(complemento) != mapa.end()) {
                
                return {mapa[complemento], i};
            }
           
            mapa[nums[i]] = i;
        }

        return {}; 
    }
};
```

---

## 📝 Código Anotado

* `unordered_map<int,int> mapa` → armazena números já visitados e seus índices.
* Loop `for` → percorre os elementos do vetor.
* `complemento = target - nums[i]` → valor que falta para atingir o target.
* `if(mapa.find(complemento) != mapa.end())` → verifica se já vimos o complemento.
* `return {mapa[complemento], i}` → retorna os índices do par encontrado.
* `mapa[nums[i]] = i` → registra o índice do número atual no mapa.

---

## 🔄 Passo a Passo da Execução

Exemplo: `nums = [2,7,11,15], target = 9`

| i | nums[i] | complemento | mapa  | Ação          |
| - | ------- | ----------- | ----- | ------------- |
| 0 | 2       | 7           | {}    | Adiciona 2:0  |
| 1 | 7       | 2           | {2:0} | Retorna [0,1] |

Resultado: `[0,1]`

---

## ⏱️ Análise de Complexidade

| Aspecto | Complexidade | Explicação                        |
| ------- | ------------ | --------------------------------- |
| Tempo   | O(n)         | Percorre o vetor uma vez          |
| Espaço  | O(n)         | Hash map armazena até n elementos |

**Resumo:**

```text
Tempo: O(n)
Espaço: O(n)
```

---

## 🧪 Casos de Teste

| Entrada        | Saída Esperada |
| -------------- | -------------- |
| [2,7,11,15], 9 | [0,1]          |
| [3,2,4], 6     | [1,2]          |
| [3,3], 6       | [0,1]          |
| [1,2,3,4], 7   | [2,3]          |
| [0,4,3,0], 0   | [0,3]          |

---

## 🚀 Observações Finais

* Solução usando **hash map** para busca eficiente do complemento.
* Retorna o primeiro par que satisfaz a soma igual ao `target`.

---

## 📚 Referências

* [LeetCode 1 — Two Sum](https://leetcode.com/problems/two-sum/)
* [C++ unordered_map](https://en.cppreference.com/w/cpp/container/unordered_map)

---

## ✅ Resumo Final

* Solução eficiente in-place usando hash map.
* **Tempo:** O(n)
* **Espaço:** O(n) para o mapa.
