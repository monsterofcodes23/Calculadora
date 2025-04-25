
# Calculadora Básica em C

Este projeto é uma **calculadora básica** desenvolvida em **linguagem C**. Ele permite realizar operações matemáticas simples e avançadas, além de manter um histórico das operações realizadas. O programa foi criado como parte de um projeto acadêmico para a disciplina de **Lógica e Estrutura de Dados**.

---

## 📋 Funcionalidades

1. **Operações Matemáticas Básicas**:
   - Soma
   - Subtração
   - Multiplicação
   - Divisão (com tratamento para divisão por zero)

2. **Operações Matemáticas Avançadas**:
   - Potência
   - Raiz Quadrada (com validação para números negativos)

3. **Histórico de Operações**:
   - Armazena até 100 operações realizadas.
   - Permite visualizar o histórico completo.

4. **Suporte a Expressões Simples**:
   - Realiza cálculos com dois números de entrada.

---

## 🚀 Como Executar

### Pré-requisitos
- Um compilador C (como GCC).
- Um ambiente de desenvolvimento, como o **Visual Studio Code** ou **Dev-C++**.

### Passos
1. Clone ou baixe este repositório.
2. Abra o arquivo `calculadora basica.cpp` no seu ambiente de desenvolvimento.
3. Compile o código:
   - No terminal, execute:  
     ```bash
     gcc -o calculadora "calculadora basica.cpp" -lm
     ```
   - O parâmetro `-lm` é necessário para vincular a biblioteca matemática.
4. Execute o programa:
   ```bash
   ./calculadora
   ```

---

## 📖 Como Usar

1. Ao iniciar o programa, você verá um menu com as opções disponíveis.
2. Escolha a operação desejada digitando o número correspondente.
3. Insira os números solicitados para realizar o cálculo.
4. O resultado será exibido na tela.
5. Para visualizar o histórico de operações, selecione a opção **7**.
6. Para sair do programa, selecione a opção **8**.

---

## 🛠️ Estrutura do Código

- **Funções Matemáticas**:
  - `somar`: Realiza a soma de dois números.
  - `subtrair`: Realiza a subtração de dois números.
  - `multiplicar`: Realiza a multiplicação de dois números.
  - `dividir`: Realiza a divisão de dois números, com validação para divisão por zero.
  - `potencia`: Calcula a potência de um número.
  - `raiz_quadrada`: Calcula a raiz quadrada de um número, com validação para números negativos.

- **Histórico**:
  - `adicionar_historico`: Adiciona uma operação ao histórico.
  - `exibir_historico`: Exibe todas as operações armazenadas no histórico.

- **Menu Principal**:
  - Implementado no `main`, permite ao usuário navegar pelas opções do programa.

---

## 📂 Estrutura do Projeto

```
calculadora-basica/
├── calculadora basica.cpp   # Código-fonte principal
└── README.md                # Documentação do projeto
```

---

## 🧑‍🎓 Informações do Projeto

- **Aluno**: Lucas Cavalcante de Alencar  
- **Turma**: ENGS241M01 
- **Disciplina**: Lógica e Estrutura de Dados  
- **Professor**: Raimundo  

---

## 📜 Licença

Este projeto foi desenvolvido para fins acadêmicos e é de uso livre para estudo e aprendizado.

---

## 📞 Contato

Caso tenha dúvidas ou sugestões, entre em contato:

- **Email**: lucasalencart4@gmail.com
- **GitHub**: [github.com/monsterofcodes23](https://github.com/monsterofcodes23)
```
