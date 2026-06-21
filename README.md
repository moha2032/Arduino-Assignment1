# 🚀 Arduino Assignment 1 — Smart Countdown

This is my submission for Assignment 1 in the
Programming C++ for Engineers Using Arduino course
at Ghana Conmmunication Technology University / Computer Engineering Group B.



*"Who knew a tiny LED could work this hard?"*

This is my submission for **Assignment 1** in the **Programming C++ for Engineers Using Arduino** course.

## 🎯 What This Program Does

The Arduino counts down from **5 to 1** using a `while` loop. On each step:

* The current count is printed to the **Serial Monitor**.
* The built-in LED blinks that same number of times using a function called `flashLED()`.

When the countdown ends, the program displays:

```text
=== Countdown Complete ===
```

and the LED finally gets to rest.

## 🧠 Concepts Demonstrated

* Variables (`int`)
* Functions with parameters (`flashLED`)
* The `while` loop
* Digital output (`digitalWrite`, `pinMode`)
* Serial communication (`Serial.begin`, `Serial.print`, `Serial.println`)

## ▶️ How to Run It

1. Open the `.ino` file in the Arduino IDE.
2. Connect an Arduino Uno via USB.
3. Select **Tools → Board → Arduino Uno** and the correct Port.
4. Click **Upload**.
5. Open **Tools → Serial Monitor** and set it to **9600 baud**.


"Every engineer starts somewhere. Today it's a blinking LED. Tomorrow? Maybe Mars." 🌍🚀
