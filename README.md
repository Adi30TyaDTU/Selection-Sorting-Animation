# Selection-Sorting-Animation

Overview
Welcome to the Selection Sort Visualization repository! This project showcases a C program implementing the Selection Sort algorithm with a captivating real-time console-based visualization. This visualization allows users to dynamically observe the step-by-step execution of the algorithm, providing a unique learning experience.

Contents
main.c: The core C program, featuring the Selection Sort algorithm and visualization functions.
README.md: A comprehensive guide providing detailed insights into the code, along with clear instructions on usage.
Code Walkthrough
1. Clearing the Screen (Line 14-26):
The clearScreen function is designed to clear the console screen, providing a clean slate for each step.
2. Display Function (Line 28-62):
The DISPLAY function showcases the array elements in a visually appealing manner during each step of the sorting process.
Special Features:
Color Coding: Green represents sorted elements, and red highlights elements under comparison.
Caret Symbol: Indicates the current position in the array.
3. Swap Function (Line 64-86):
The SWAP function is responsible for animating the swapping of elements during the sorting process.
Special Features:
Animated display of the swapping process, providing a visual representation of the algorithm in action.
4. Selection Sort Algorithm (Line 88-114):
The SELECTION_SORT function encapsulates the entire Selection Sort algorithm.
Special Features:
Real-time visualization of the sorting process, aiding in understanding the algorithm's inner workings.
5. Main Function (Line 116-144):
The main function orchestrates the user interaction, taking input for the array size and elements.
Special Features:
Interactive user prompts guide the user through the process.
Display of the final sorted array with a thank you message.
Instructions
Getting Started
Clone the Repository:

bash
Copy code
git clone https://github.com/your-username/selection-sort-visualization.git
cd selection-sort-visualization
Compile and Run:

If you are on a Unix-based system (Linux or macOS):

bash
Copy code
gcc main.c -o selection_sort_visualizer
./selection_sort_visualizer
For Windows users, consider using an IDE like Code::Blocks or compile using a command prompt with a C compiler.

Usage
Input the Number of Elements:

Enter the desired number of elements when prompted.
Enter Array Elements:

Input the array elements, ensuring each element is a 3-digit integer.
Visualization:

Witness the algorithm's execution in real-time on the console, with color-coded and animated elements.
Completion:

Once the sorting process concludes, the final sorted array is displayed.
A message of gratitude is presented, thanking users for their engagement.
Important Note
The program utilizes ANSI escape codes for console text color. Windows users are advised to use an ANSI-compatible terminal emulator, such as Windows Terminal, for optimal color rendering.
Contribution
Feel free to explore, modify, and leverage this code for educational purposes or as a valuable resource for understanding C programming visualization techniques. If you encounter issues or have suggestions, please consider creating an issue or pull request. Your feedback is highly valued.

