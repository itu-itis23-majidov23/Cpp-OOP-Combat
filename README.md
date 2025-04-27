# Cpp-OOP-Combat

🎮 A simple turn-based battle game built with **C++** using **Object-Oriented Programming** concepts like inheritance, polymorphism, and encapsulation.

---

## 📚 Project Description

This project is an educational exercise designed to practice OOP principles in C++.  
The player fights against an enemy by choosing different classes and weapons.  
Each player type and weapon has its own unique behavior.

---

## ✨ Features
- **Armored Player**: Blocks the first enemy attack completely, then takes 20% less damage.
- **Healer Player**: Has a 5% chance to heal instead of taking damage.
- **Sword Weapon**: High damage, but damage decreases over time.
- **Dagger Weapon**: Moderate damage with a 50% chance to attack twice.
- **Turn-Based Gameplay**: Attack and defend mechanics between player and enemy.

---

## 🏗️ Project Structure
OOP_Game/ │ ├── src/ # Source code (.cpp files) ├── include/ # Header files (.h files) ├── Makefile # For
 building the project easily └── README.md # This file

---

## 🛠️ Build and Run

1. **Clone this repository:**
   ```bash
   git clone https://github.com/your-username/Cpp-OOP-Combat.git
   cd Cpp-OOP-Combat```

2. **Build the project:**
    ```make```

3. **Run the game:**
    ```./game```

4. **Clean build files (optional):**
   ``` make clean```

---

## **🎮 How to Play:**
    When you start the game, you will be asked to:

        Select a weapon (0 for Sword, 1 for Dagger) 

        Select a player class (0 for Armored Player, 1 for Healer Player)

    Each turn:

        The player attacks the enemy.

        The enemy attacks back.

    The game ends when either the player or the enemy's health drops to zero.
---


**📜 License:**
This project is for educational purposes and is open-source.
Feel free to fork, learn, and improve it!
