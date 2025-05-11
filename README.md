# Terminal-Based-Basic-arithmetic-calculator-written-in-C-


This is a simple command-line calculator written in C (`calc1.c`) that performs basic arithmetic operations (`+`, `-`, `*`, `/`) on up to **five operands**. The calculator processes operations in the exact order entered by the user, without applying operator precedence.

## 📄 File

- `calc1.c` — Main C file containing the calculator logic.

## 🚀 Features

- Supports basic arithmetic operations: `+`, `-`, `/`, and `X` (for multiplication).
- Accepts up to **five** operands in a linear calculation.
- User chooses step-by-step whether to add more operands.
- Handles invalid operator inputs.
- User-friendly prompts and instructions.

## 🧮 How It Works

1. User inputs the first operand.
2. User selects an operator (`+`, `-`, `/`, `X`).
3. User inputs the second operand.
4. The calculator performs the operation.
5. The user is asked if they want to enter a third operand and continues the process (up to five total operands).

📌 **Note:** Operators are applied **in the order entered** — no precedence rules like in algebra.

## 💻 Compilation & Usage

### Compile

```bash
gcc calc1.c -o calc
