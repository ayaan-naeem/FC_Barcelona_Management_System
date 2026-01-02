## FC Barcelona Management System  
## Semester End Project  

**Author:** Muhammad Ayaan Naeem 
**Date:** January 2026  
**Course:** Computer Programming (C++)  
**Institution:** University of Engineering and Technology, Lahore  

!FC Barcelona Crest
**Més que un club**  
**Visca Barça! Visca Catalunya!**

---

## 📋 Project Overview

The **FC Barcelona Management System** is a console-based management application developed in C++ as a semester-end project. This system simulates key administrative and coaching functionalities of one of the greatest football clubs in the world — **FC Barcelona**.

It provides two distinct user roles:
- **Admin** – Full control over player database, transfers, match results, and club information.
- **Coach** – Access to player statistics, injuries, league standings, and transfer rumors.

The system features file handling for persistent storage of login records and player data, interactive ASCII art headers, and a rich set of football-related information about FC Barcelona.

This project reflects my passion for both programming and FC Barcelona, combining structured C++ concepts with real-world club management simulation.

---

## ✨ Key Features

### Admin Role Features
1. **Player Management**
   - Add new players with detailed attributes (FIFA-style stats)
   - View all players
   - Update player information
   - Delete players
   - Persistent storage in `Players Information.txt`

2. **Transfer Market**
   - View transfers this season (arrivals & departures)
   - Top all-time transfers (incomings & outgoings)
   - Latest transfer rumors

3. **Match & Competition Management**
   - View upcoming match schedule
   - Add and view past match results
   - Current LaLiga standings
   - UEFA Champions League match schedule

4. **Club Heritage**
   - List of legendary club icons
   - Complete trophy cabinet history
   - Current management team

### Coach Role Features
1. View detailed player performance stats (goals, assists, clean sheets, disciplinary)
2. Check current injured players
3. Access transfer rumors
4. View LaLiga standings and UCL schedule

### General Features
- Role-based login system (Admin / Coach)
- Beautiful ASCII art welcome header with club motto
- File handling for login tracking and player data persistence
- Interactive menus with input validation
- Use of arrays, functions, loops, conditionals, and file streams

---
## Types of Variables and functions used
- I tried to use all types of variables but I mostly used void functions.
- All functions are well declared and perfect
- Functions and the use of Arrays help understanding the language


## 🚀 Demo Screenshots (Console Output)

### Welcome Header (ASCII Art)
```
||===============================================================================================================||
||===============================================================================================================||
|| ||*******************************************************************************************************|| ||
|| || :::::::::: :: :::::::: ::::::::: ::                                                 || ||
|| || :: ::: :: :: :: :: :: :: ::                                                 || ||
|| || ( VISCA BARCA VISCA CATALUNA MÉS QUE UN CLUB )                                       || ||
|| *********************************************************************************************************|| ||
||===============================================================================================================||
||===============================================================================================================||
```

### Admin Menu
```
Select One of the Following Options to Proceed Further :
1. Add Players
2. View Players
3. Update Players
4. Delete Players
5. Transfers This Season
6. Transfer Rumors in FC Barcelona
7. Top Transfers of All Time
8. Matches Schedule
9. Add Match Result
10. View Match Result
11. Laliga Standing
12. UCL Matches Schedule
13. Icons of the Club
14. Trophies Won in History
15. Management Team
16. Return to Main Menu/ Exit
```

### Sample Player Addition
```
--- PLAYER NUMBER 1 ---
Enter Name : Lamine Yamal
Enter Nationality : Spain
Enter Age : 18
Enter Height (in inches) : 71
Enter Main Position : RW
Enter Alternate Position : LW, CAM
Enter Pace (out of 99) : 92
...
-------PLAYER SAVED-------
```

---

## 🛠️ Technologies Used

- **Language:** C++
- **Compiler:** Any standard C++ compiler (g++, clang++, MSVC)
- **Libraries:**
  - `<iostream>` – Input/output
  - `<fstream>` – File handling
  - `<conio.h>` – `getch()` for pause
  - `<string>` – String handling
- **Concepts Applied:**
  - Arrays and parallel arrays
  - Functions and modular programming
  - File I/O (reading/writing)
  - Loops and control structures
  - Basic data persistence

---

## 📂 File Structure

```
FC-Barcelona-Management-System/
├── main.cpp                     # Complete source code
├── Login Information.txt        # Generated: Stores login attempts
├── Players Information.txt      # Generated: Stores player data
└── README.md                    # This file
```

> Note: Text files are created automatically on first use.

---

## ⚙️ How to Run

1. **Compile the code:**
   ```bash
   g++ main.cpp -o fcbarcelona.exe
   ```

2. **Run the executable:**
   ```bash
   ./fcbarcelona.exe
   ```

3. **Login Credentials:**
   - **Admin:**
     - Email: `admin@fcbarcelona.com`
     - Password: `1234`
     - Role: `admin`
   - **Coach:**
     - Email: `coach@fcbarcelona.com`
     - Password: `1234`
     - Role: `coach`

4. Explore all features!

---

## 🌟 Why This Project Matters to Me

This wasn't just a semester project — it was a tribute to **FC Barcelona**, the club I've supported since childhood. Every function, every player stat, every trophy listed — all reflect countless hours of passion poured into both coding and football.

I learned:
- How to structure large C++ programs
- File handling for data persistence
- User interaction design in console apps
- Modular code organization
- And most importantly — how rewarding it is to build something you truly love.

**Visca Barça forever!**

---

## 🏆 Club Highlights (From the System)

### Legendary Icons Include:
- Lionel Messi
- Xavi Hernández
- Andrés Iniesta
- Johan Cruyff
- Ronaldinho
- Neymar Jr.
- Luis Suárez
- And many more...

### Major Trophies:
- **5 UEFA Champions League**
- **28 La Liga titles**
- **32 Copa del Rey**
- **3 FIFA Club World Cups**

### Current Leadership:
- President: Joan Laporta
- Head Coach: Hansi Flick
- Director of Football: Deco

---

## 🙏 Acknowledgements

- My teachers and mentors for guiding me through C++
- FC Barcelona for inspiring millions, including me
- All Culés around the world — this one's for you!

---

**Made with ❤️ by Muhammad Ayaan**  
**January 2026**

**Més que un club. Més que un project.**  
**Visca Barça!** 💙❤️

---

> This project is for educational purposes only and uses fictional/hypothetical transfer and match data for demonstration.  
> All trademarks and club references belong to FC Barcelona.
