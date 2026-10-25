# PROGRAMMING FUNDAMENTALS
## Course: CSC-100 | Semester: Fall 2025 | Namal University

Welcome to the repository for **Programming Fundamentals (CSC-100)**. This repository houses algorithmic exercises, console-based graphical animations, geometric pattern logic, classic games, and the semester capstone project (**Jackaroo King**).

---

## 📂 Repository Structure

* **[01-Algorithmic-Tasks](./01-Algorithmic-Tasks/)**
  Core logic and utility programs including input parsing, validation, and conversion routines.
* **[02-Console-Graphics-and-Animations](./02-Console-Graphics-and-Animations/)**
  Frame-by-frame console animations built using Windows console cursor positioning (`gotoRowCol`) and delay loops.
* **[03-Pattern-Engineering](./03-Pattern-Engineering/)**
  Complex geometric shapes and star patterns engineered using nested control loops and boundary checks.
* **[04-Arcade-Games](./04-Arcade-Games/)**
  Interactive, text-based arcade games including Snake and Gomoku.
* **[05-Capstone-Jackaroo-King](./05-Capstone-Jackaroo-King/)**
  The final capstone board game project built by group **Ctrl+Play**, complete with source code, report, and documentation.

---

## 🛠️ Tech Stack & Dependencies

* **Language:** C++ 
* **Libraries:** `<iostream>`, `<windows.h>`, `<conio.h>`, `<cmath>`, `<cstdlib>`, `<ctime>`
* **Platform:** Windows Console (MSVC / MinGW Compiler)

---

## 🚀 Execution Instructions

```bash
# Clone the repository
git clone [https://github.com/ctrlZEngineer/Programming-Fundamentals-Fall-2025.git](https://github.com/ctrlZEngineer/Programming-Fundamentals-Fall-2025.git)

# Navigate into any module
cd "Programming-Fundamentals-Fall-2025/04-Arcade-Games"

# Compile and run
g++ SnakeGame.cpp -o SnakeGame
./SnakeGame
