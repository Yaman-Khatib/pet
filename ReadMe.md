# Pet Class in C++

## 📌 Overview

This project demonstrates a simple C++ class called `Pet` that simulates a virtual pet with a name and energy level.

The program allows you to:

* Create a pet
* Play with the pet (reduces energy)
* Feed the pet (increases energy)
* Display pet information

---

## 🧱 Class Structure

### `Pet`

**Attributes:**

* `name` (string): The name of the pet
* `energy_level` (int): The current energy level

**Methods:**

* `play_with_pet()`: Reduces energy when the pet plays
* `eat()`: Increases energy when the pet eats

---

## ▶️ How to Compile and Run

### 1. Compile

```bash
g++ main.cpp -o pet_app
```

### 2. Run

```bash
./pet_app
```

---

## 🧪 Example Output

```
Buddy is playing...
Pet Name: Buddy
Energy Level: 90
```

---

## 💡 Notes

* Energy level will not drop below 0
* You can extend this project by adding:

  * Sleep function
  * Hunger levels
  * Multiple pets

---

## 🚀 Future Improvements

* Add user input
* Save/load pet state
* Build a simple game loop

---