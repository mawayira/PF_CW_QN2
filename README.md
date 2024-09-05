# Read Positive Integers and Divisor Program.

## Introduction

This C++ program calculates and prints all the positive divisors of a user-supplied positive integer. The program repeatedly prompts the user to enter an integer, and for each valid input, it displays the divisors in descending order. The user can choose to repeat the process for as many integers as desired, or exit the program.

## How the Program Works

- The program prompts the user to enter a positive integer.
- It calculates and prints all the divisors of the entered integer in decreasing order.
- After displaying the divisors, the program asks the user if they want to check divisors for another number.
- The user can choose to continue or exit the program.
- If the user enters an invalid input (a negative number or zero), the program informs the user and prompts for a valid number.

## Features

- **Input Validation**: The program ensures that the user enters a positive integer and prompts again for invalid inputs.
- **Divisor Calculation**: The divisors of the number are printed in decreasing order.
- **Looping Behavior**: The user can continue entering integers as long as they wish, and the program will keep providing the divisors.
- **Graceful Exit**: The user can exit the program by entering 'N' or 'n' when asked if they want to try another number.

## How to Compile and Run

1. Save the program in a file named `findDivisor.cpp`.
2. Open your terminal or command prompt.
3. Navigate to the folder containing the `findDivisor.cpp` file.
4. Compile the program using a C++ compiler such as `gcc`:
   ```bash
   gcc findDivisor.cpp -o findDivisor

5. Run the compiled program:
./findDivisor

#### License
This project is open-source and can be used freely for educational purposes.

#### Author
Mawayira John Paul <mawayirapaul12@gmail.com>