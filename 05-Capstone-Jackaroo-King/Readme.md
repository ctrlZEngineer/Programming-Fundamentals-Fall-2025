# 👑 Capstone Project: Jackaroo King
## Course: Programming Fundamentals (CSC-100)
## Group: Ctrl+Play | Namal University

An interactive, text-based 2-player console implementation of the classic strategy board game **Jackaroo**, developed in C++. This project demonstrates advanced fundamental programming concepts including 2D screen coordinate mapping, custom array structures, game loop management, state handling, and interactive console graphics.

---

## 👥 Group Members & Contribution Breakdown

| Member Name | Roll Number | Primary Development Contribution |
| :--- | :--- | :--- |
| **Adeel Ahmad Subhani** | NUM-BSCS-2025-02 | Core game loop logic (`playing()`), state flow, turn switching, and overall program execution sequence. |
| **Atayyib Hassan** | NUM-BSCS-2025-12 | Visual board design (`boundary()`, `path()`, `center()`) and special card rule handling (`cardidentifier` for King & -4 cards). |
| **Muhammad Abubakar** | NUM-BSCS-2025-28 | Coordinate mapping system (`storingarray`, `movingarray`), card dealing routines (`cardsA`/`cardsB`), and card masking (`cardhiding`). |
| **Muhammad Atif** | NUM-BSCS-2025-31 | Competitive mechanics (`checkKillingCondition`, `removestone`), board collision checks, and input validation. |

---

## 📌 Project Overview & Features

### 🕹️ Key Features
* **2D Track Board Rendering:** Custom ASCII board drawing functions (`boundary()`, `path()`, `center()`) using extended ASCII characters (such as `char(219)`) to build an authentic track layout directly in the console window.
* **Deck Card Mechanics:** Automated deck dealing (`cardsA()`, `cardsB()`) using pseudo-random generation (`rand()`) for 4-card hands per player round.
* **Special Card Functionalities:**
  * **King (K):** Moves a marble out of the Home base onto the starting track square.
  * **Ace (A):** Brings a marble out of Home OR moves an active marble 1 step forward.
  * **-4 Card:** Reverses a marble 4 steps backward along the board path.
  * **Jack (J):** Swaps an active marble position with an opponent's marble.
  * **Numeric Cards (2–10):** Moves a marble forward by the card's numerical value.
* **Smooth Movement Animations:** Step-by-step frame animation created via coordinate jumps (`gotoRowCol`) combined with timed delay loops (`sleep()`).
* **Competitive Marble "Killing":** Checks collision between opposing pieces (`checkKillingCondition`). Landing on an opponent's marble kicks it off the track and sends it back to their Home base (`removestone`).
* **Card Hiding / Masking:** Masks spent cards as `XX` (`cardhidingA()`, `cardhidingB()`) so players cannot re-use cards within the same turn cycle.

---

## 🕹️ How the Game Works

1. **Board Initialization:** The program draws the outer boundaries, central square, track path, and initial player marble positions (`Aa`, `Ab`, `Ac`, `Ad` for Player 1; `Ba`, `Bb`, `Bc`, `Bd` for Player 2).
2. **Card Dealing:** At the beginning of each round, 4 random cards are dealt and rendered on the bottom (Player 1) and top right (Player 2) of the screen.
3. **Turn Execution:**
   * The active player selects a card slot (1–4).
   * The program checks card validity and prompts for marble selection.
   * If a King or Ace is played, a new marble enters play.
   * If a movement card is played, the marble animates box-by-box along its assigned movement array (`movingarrayA` or `movingarrayB`).
4. **Collision Check:** Upon finishing a move, if a marble lands on an occupied opponent space, the opponent's piece is removed and sent back home.
5. **Card Masking:** Used cards display as `XX` until all 4 cards are thrown, after which a new hand is dealt automatically.

---

## 🛠️ Key C++ Functions Explanation

* `gotoRowCol(int rpos, int cpos)`: Positions the console cursor at specific row (`rpos`) and column (`cpos`) coordinates for precise text drawing.
* `boundary()`, `path()`, `center()`: Draws the outer track, home bases, inner boxes, and central board graphics.
* `cardsA()`, `cardsB()`: Randomly picks and displays 4 playing cards for Player 1 and Player 2.
* `movingarrayA()`, `movingarrayB()`: Maps out the exact index path of rows and columns for each marble to follow during motion.
* `checkKillingCondition()`: Compares current positions of active marbles to handle piece capture and reset logic.
* `playing()`: The master loop controlling turn order, card throws, move execution, and win condition checks.

---

## 🚀 How to Run the Game

```bash
# Compile the C++ file using GCC / MinGW
g++ JackarooKing.cpp -o JackarooKing

# Run the executable in Command Prompt or Windows Console
./JackarooKing
