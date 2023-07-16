# Graphical-representation-of-hydrocarbon

Introduction

Graphical representation of carbon compound. This is about chemistry; in that project we show graphical representation of carbon compound. Here to show the pictorial representation.  We firstly take chemical formula of carbon compound from user and using that formula we create graphical representation of that formula.

By doing this program, we can see the graphical representation of any chemical formula by taking cones.

In this program we have done graphical representation of Alkane, Alkene and Alkyne
The given code is a C++ program that demonstrates the visualization of different types of hydrocarbons: alkanes, alkenes, and alkynes. The program uses the graphics.h library to create a graphical representation of the hydrocarbon molecules using circles, images, and bars.

The program allows the user to enter a chemical formula in the format of "CnH2n+2" for alkanes, "CnH2n" for alkenes, and "CnH2n-2" for alkynes, where 'n' represents the number of carbon atoms. The program validates the input formula and generates the corresponding graphical representation of the hydrocarbon molecule.

The program uses different graphical elements such as circles to represent carbon atoms, lines to represent bonds, and images to represent hydrogen atoms. It utilizes the initgraph () and initwindow () functions to create a graphics window where the hydrocarbon molecule is displayed.

The alkane() function is responsible for generating the graphical representation of alkanes, the alkene() function for alkenes, and the alkyne() function for alkynes. These functions take parameters such as the number of carbon atoms (c), the coordinates of the carbon atom (x, y), the radius of the carbon atom (r), and the distance between carbon atoms (d). Using these parameters, the functions draw the carbon and hydrogen atoms in the correct positions to represent the hydrocarbon molecule.

Overall, this program provides a visual representation of hydrocarbon molecules based on the user's input chemical formula, allowing users to better understand the structure and composition of these organic compounds.

**Problem Statement:
**
From chemical compound formula it is difficult to understand the chemical compound representation.   The given code is a C++ program that demonstrates the visualization of different types of hydrocarbons: alkanes, alkenes, and alkynes. The program uses the graphics.h library to create a graphical representation of the hydrocarbon molecules using circles, images, and bars.

Proposed Design

Algorithm:

Algorithmic Steps for Visualizing Hydrocarbons:

1.	Start the program.
2.	Import the necessary libraries for graphics and input/output operations.
3.	Define the main function.
4.	Display a welcome message and provide instructions for entering the hydrocarbon formula.
5.	Prompt the user to enter a hydrocarbon formula (e.g., "CnH2n+2" for alkanes, "CnH2n" for alkenes, "CnH2n-2" for alkynes).
6.	Validate the input formula to ensure it follows the correct format using regular expressions or string manipulation techniques. If the formula is invalid, display an error message and terminate the program.
7.	Determine the type of hydrocarbon (alkane, alkene, or alkyne) based on the input formula.
8.	Based on the type of hydrocarbon, calculate the number of carbon atoms ('n') using the formula.
9.	Create a graphics window using the graphics library to display the hydrocarbon molecule.
10.	Implement separate functions for generating the graphical representation of alkanes, alkenes, and alkynes.
11.	Inside each function, determine the coordinates and distances between atoms based on the number of carbon atoms ('n') and the type of hydrocarbon.
12.	Use circles to represent carbon atoms, lines to represent bonds between carbon atoms, and images to represent hydrogen atoms.
13.	Position the atoms correctly on the graphics window to visually represent the hydrocarbon molecule.
14.	Once the hydrocarbon molecule is displayed, wait for user input to close the graphics window.
15.	End the program.
These algorithmic steps provide a high-level overview of the program flow. Further implementation details and specific code logic may be required for each step to achieve the desired functionality.

Solution Technique

Explanation of Algorithm used:

1.	Start the main function.
2.	Declare the necessary variables: a string variable "a" to store the chemical formula, integer variables "c", "p", and "q" for comparisons, and a string variable "h" for "H" characters.
3.	Enter a while loop that runs indefinitely.
4.	Output the general formulas of alkane, alkene, and alkyne.
5.	Prompt the user to enter a chemical formula and store it in the variable "a".
6.	Compare the input formula with "ch4" and "CH4" using the compare function and store the results in variables "p" and "q".
7.	If the input formula matches "ch4" or "CH4" (p or q is 0), execute the alkane function with parameters c=1, x=680, y=340, r=30, and d=90.
8.	Otherwise, check the length of the input formula.
9.	If the length is less than or equal to 6, proceed with further checks.
10.	Extract the first six characters of the input formula and store them in an array A.
11.	Check if the first character of A is 'c' or 'C'.
12.	If true, check if the last character of A is a digit between 0 and 9.
13.	If true, check if the second character of A is a digit between 1 and 9, 'H', or 'h'.
14.	If true, check if the third character of A is a digit between 0 and 9 or 'H' or 'h'.
15.	If true, check if the fourth character of A is a digit between 0 and 9 or 'H' or 'h' or 0.
16.	If true, check if the fifth character of A is 0 or a digit between 0 and 9.
17.	If all the above conditions are satisfied, proceed with further calculations.
18.	Check if the second character of the input formula is 'H' or 'h'.
19.	If true, set c=1; otherwise, extract the characters at indices 1 and 2 of the input formula, convert them to an integer, and store it in c.
20.	Check the value of c.
21.	If c is between 10 and 48 (inclusive), perform further calculations.
22.	Extract the characters at indices 4 and 5 of the input formula, convert them to an integer, divide it by 100, and store it in m.
23.	Check the value of m.
24.	If m is equal to (2*c) + 2, execute the alkane function with the appropriate parameters.
25.	If m is equal to 2*c, execute the alkene function with the appropriate parameters.
26.	If m is equal to (2*c)-2, execute the alkyne function with the appropriate parameters.
27.	If none of the above conditions are satisfied, output an error message stating that the chemical formula is incorrect.
28.	If c is between 4 and 9 (inclusive), perform further calculations.
29.	Extract the characters at indices 3 and 4 of the input formula, convert them to an integer, and store it in m.
30.	Check the value of m and execute the corresponding alkane, alkene, or alkyne function.
31.	If c is between 1 and 3 (inclusive), perform further calculations.
32.	Extract the character at index 3 of the input formula, convert it to an integer, and store it in m.
33.	Execute the corresponding alkane, alkene, or alkyne function based on the value of m.
34.	End the while loop.
35.	End the main function

**Data Structures or Object-Oriented Concepts used:
**
The code primarily uses variables and arrays to store and manipulate data.

The variables are used to store values such as integers (c, p, q) and strings (a, h). These variables are used to represent the chemical formula and perform comparisons.

Additionally, arrays are used to store characters from the input string. For example, the array "A" is used to store characters from the chemical formula for further analysis and comparison.

Justification:

Here's a justification for the steps involved:

The program begins with standard initialization steps, including defining necessary functions and declaring variables.

The main function serves as the entry point for the program and contains the core logic.

The program enters an infinite loop to continuously prompt the user for input and process formulas.

The general formulas of alkane, alkene, and alkyne are printed to provide information to the user.

The user is prompted to enter a chemical formula.

The input formula is read into the variable a.

The program performs a comparison to determine if the formula matches "CH4," which represents methane, the simplest alkane.

If the formula matches "CH4," the program sets the carbon atom count c to 1, as methane contains only one carbon atom.

If the formula doesn't match "CH4," the program checks the length of the input formula to proceed with further validation.

If the length is less than or equal to 6, additional checks are performed on the individual characters of the formula.

The input formula is split into an array A to enable character-based validation.
The program verifies that the first character of A is 'C' or 'c', indicating the presence of carbon.

Subsequent checks are performed on specific positions within the array A to validate the presence of hydrogen atoms and numeric coefficients.

The checks verify that the formula adheres to the expected patterns, such as 'H' or 'h' in the second or third position indicating hydrogen atoms, and digits in specific positions representing coefficients.

If all the checks pass, the program proceeds with further analysis based on the coefficient value c.

The program checks if c is greater than or equal to 10, indicating a coefficient with two digits.

If c is a double-digit value, the program extracts the fourth and fifth characters from A to determine the multiplicative factor m.

The program then performs specific comparisons based on the calculated m value to determine if the formula represents an alkane, alkene, or alkyne.

Similar comparisons and actions are performed for cases where c falls into other predefined ranges (4-9 and 1-3).

If none of the conditions in step 18 and step 19 are met, the program outputs an error message, indicating an invalid formula.

If the length of the input formula is greater than 6, the program outputs an error message, indicating an invalid formula.

The program repeats the loop to allow for further input processing.

The program ends.

System Requirements

Hardware Requirements:
•	RAM: 8 GB
•	ROM: 256 GB
•	PROCESSOR: i5

Software Requirements:
•	Operating System: Windows 11
•	Programing Language: C++ Programing Language Using File Handling.
•	IDE Tool: Visual Studio code/Code-blocks.
 
Functional Requirements:
stoi ():
The stoi() function is a commonly used function in programming languages, particularly in C++ and C++-derived languages like C#. It is short for "string to integer" and is used to convert a string representation of a number into an integer value.
The stoi() function takes a string as its input and attempts to convert it into an integer. It parses the string and extracts the numeric value, discarding any leading whitespace characters. It also stops parsing when it encounters a non-numeric character or the end of the string. The function then returns the resulting integer value.

length ():
The length () function is a common function used in various programming languages to determine the length or size of a string, array, or collection. The exact syntax and behavior of the length () function may vary depending on the programming language you are using.

int ():
In C++, the int () function is not a built-in function like in some other programming languages. However, there is a way to create a function named int in C++.
it's generally not recommended to use such a function name, like int, that conflicts with built-in types or keywords in C++. It can lead to confusion and make the code less readable. It's best to choose meaningful and descriptive names for your functions that do not clash with existing language constructs.

Circle ():
In C++, the circle() function is not a built-in function like cout or cin. However, you can create a function named circle() to perform operations related to circles, such as calculating the area, circumference, or drawing a circle on the screen.
You can modify the circle() function according to your requirements. For example, you can add more functionalities to calculate the circumference, diameter, or draw a circle using graphical libraries. Remember to include the necessary header files and define the required variables and formulas within the function.
It's important to note that the circle() function in this example is user-defined and not a built-in function in the C++ standard library.

Readimage ():
In C++, there is no built-in function named readimage(). However, you can create a function named readimage() to read and process image data using external libraries or custom code. The specific implementation and functionality of the readimage() function would depend on the library or approach you are using to handle images.
The implementation of a readimage() function can vary depending on the specific requirements and libraries being used. It could involve handling different image formats, performing image processing operations, or utilizing other image-related functionalities based on the chosen library or custom code.

Bar ():
In C++, there is no built-in function named bar(). However, you can create a function named bar() to perform specific operations or tasks based on your requirements. The purpose and functionality of the bar() function would depend on the context in which it is being used.
You can modify the bar() function based on your specific needs. For instance, you can incorporate additional formatting or customization options, such as adding labels, adjusting the character used for the bar, or incorporating scaling factors.
It's important to note that the bar() function in this example is a basic illustration and may not cover all possible use cases. Depending on your requirements, you may need to expand the functionality or integrate additional libraries or code to achieve the desired behavior. 

4.4	Non-Functional Requirements

•Usability: Usability refers to the ease of use and user-friendliness of the system. It involves designing an intuitive interface, providing clear instructions, and minimizing the learning curve for users.

•Performance: Performance requirements define how the system should perform in terms of speed, responsiveness, and efficiency. This includes considerations such as response times, processing times, and resource utilization.

•Reliability: Reliability refers to the ability of the system to perform its intended functions consistently and without failure. It involves minimizing the occurrence of errors, handling exceptions gracefully, and recovering from failures.

•Maintainability: Maintainability refers to the ease with which the system can be modified, updated, and repaired. It involves writing clean and modular code, providing documentation, and following coding standards to enhance readability and ease of maintenance.

•Security: Security requirements define how the system should protect sensitive information, prevent unauthorized access, and mitigate potential vulnerabilities. This includes authentication, encryption, data privacy, and adherence to relevant security standards.

•Portability: Portability refers to the ability of the system to be deployed and run on different platforms or environments without requiring significant modifications. It involves considerations such as cross-platform compatibility, adherence to standards, and minimizing dependencies on specific hardware or software.


•Compatibility: Compatibility requirements ensure that the system can interact and integrate effectively with other systems, software, or hardware components. This includes adherence to industry standards, support for various data formats, and interoperability with external systems.

Implementation Details

System Defined Function :
1.	stoi();
2.	length ();
3.	int ();
4.	In Graphics:
5.	Circle ();
6.	Readimage ();
7.	Bar ();

User Defined Functions:

Alkane ();
The ‘alkane’ function in the provided program is responsible for drawing and displaying the structure of an alkane molecule on the screen using the graphics library. Here's a brief explanation of the function:
1.	The function alkane takes five parameters:
•	c: Number of carbon atoms in the alkane molecule.
•	x and y: Coordinates of the center of the first carbon atom.
•	r: Radius of the carbon atom (and hydrogen atoms).
•	d: Distance between adjacent carbon atoms.
2.	The function initializes the graphics window using the initwindow function from the graphics library. The window size is set to 8000x1200 pixels.
3.	The function uses a loop to draw each carbon atom in the alkane molecule. The loop runs c number of times.
4.	Inside the loop, the function checks if the current iteration is the first carbon atom (i == 1). If it is, it performs the following steps:
•	Draws a circle at coordinates (x, y) with radius r, representing the carbon atom.
•	Loads and displays an image of a carbon atom using the readimagefile function from the graphics library.
•	Draws a circle at coordinates (x - d, y) with radius r, representing a hydrogen atom.
•	Loads and displays an image of a hydrogen atom using the readimagefile function.
•	Draws a horizontal bar connecting the carbon atom and the adjacent hydrogen atom.
•	Draws a circle at coordinates (x + d, y) with radius r, representing another carbon atom.
•	Loads and displays an image of a carbon atom.
•	Draws a horizontal bar connecting the two carbon atoms.
•	Draws a circle at coordinates (x, y + d) with radius r, representing a hydrogen atom.
•	Loads and displays an image of a hydrogen atom.
•	Draws a vertical bar connecting the carbon atom and the adjacent hydrogen atom above it.
•	Draws a circle at coordinates (x, y - d) with radius r, representing a hydrogen atom.
•	Loads and displays an image of a hydrogen atom.
•	Draws a vertical bar connecting the carbon atom and the adjacent hydrogen atom below it.
5.	After drawing the first carbon atom, the function updates the value of x by adding d to it. This prepares the function for drawing the subsequent carbon atoms in the alkane molecule.
6.	If the current iteration is not the first carbon atom, the function executes the code inside the else block. This code is responsible for drawing the carbon atom, adjacent hydrogen atoms, and the connecting bars, similar to the steps described above.
7.	Finally, outside the loop, the alkane function ends. The graphics window remains open, displaying the drawn alkane molecule until the user closes the window.
It's important to note that the code uses the graphics.h library, which is specific to the Turbo C++ compiler. The initgraph, readimagefile, and bar functions are part of that library and might not work in other compilers or environments without appropriate modifications.


Alkene ():
 The alkane function in the provided program is responsible for drawing and displaying the structure of an alkane molecule on the screen using the graphics library. Here's a brief explanation of the function:
1.	The function alkane takes five parameters:
•	c: Number of carbon atoms in the alkane molecule.
•	x and y: Coordinates of the center of the first carbon atom.
•	r: Radius of the carbon atom (and hydrogen atoms).
•	d: Distance between adjacent carbon atoms.
2.	The function initializes the graphics window using the initwindow function from the graphics library. The window size is set to 8000x1200 pixels.
3.	The function uses a loop to draw each carbon atom in the alkane molecule. The loop runs c number of times.
4.	Inside the loop, the function checks if the current iteration is the first carbon atom (i == 1). If it is, it performs the following steps:
•	Draws a circle at coordinates (x, y) with radius r, representing the carbon atom.
•	Loads and displays an image of a carbon atom using the readimagefile function from the graphics library.
•	Draws a circle at coordinates (x - d, y) with radius r, representing a hydrogen atom.
•	Loads and displays an image of a hydrogen atom using the readimagefile function.
•	Draws a horizontal bar connecting the carbon atom and the adjacent hydrogen atom.
•	Draws a circle at coordinates (x + d, y) with radius r, representing another carbon atom.
•	Loads and displays an image of a carbon atom.
•	Draws a horizontal bar connecting the two carbon atoms.
•	Draws a circle at coordinates (x, y + d) with radius r, representing a hydrogen atom.
•	Loads and displays an image of a hydrogen atom.
•	Draws a vertical bar connecting the carbon atom and the adjacent hydrogen atom above it.
•	Draws a circle at coordinates (x, y - d) with radius r, representing a hydrogen atom.
•	Loads and displays an image of a hydrogen atom.
•	Draws a vertical bar connecting the carbon atom and the adjacent hydrogen atom below it.
5.	After drawing the first carbon atom, the function updates the value of x by adding d to it. This prepares the function for drawing the subsequent carbon atoms in the alkane molecule.
6.	If the current iteration is not the first carbon atom, the function executes the code inside the else block. This code is responsible for drawing the carbon atom, adjacent hydrogen atoms, and the connecting bars, similar to the steps described above.
7.	Finally, outside the loop, the alkane function ends. The graphics window remains open, displaying the drawn alkane molecule until the user closes the window.
It's important to note that the code uses the graphics.h library, which is specific to the Turbo C++ compiler. The initgraph, readimagefile, and bar functions are part of that library and might not work in other compilers or environments without appropriate modifications.

Alkyne ();
The alkane function in the provided program is responsible for drawing and displaying the structure of an alkane molecule on the screen using the graphics library. Here's a brief explanation of the function:
1.	The function alkane takes five parameters:
•	c: Number of carbon atoms in the alkane molecule.
•	x and y: Coordinates of the center of the first carbon atom.
•	r: Radius of the carbon atom (and hydrogen atoms).
•	d: Distance between adjacent carbon atoms.
2.	The function initializes the graphics window using the initwindow function from the graphics library. The window size is set to 8000x1200 pixels.
3.	The function uses a loop to draw each carbon atom in the alkane molecule. The loop runs c number of times.
4.	Inside the loop, the function checks if the current iteration is the first carbon atom (i == 1). If it is, it performs the following steps:
•	Draws a circle at coordinates (x, y) with radius r, representing the carbon atom.
•	Loads and displays an image of a carbon atom using the readimagefile function from the graphics library.
•	Draws a circle at coordinates (x - d, y) with radius r, representing a hydrogen atom.
•	Loads and displays an image of a hydrogen atom using the readimagefile function.
•	Draws a horizontal bar connecting the carbon atom and the adjacent hydrogen atom.
•	Draws a circle at coordinates (x + d, y) with radius r, representing another carbon atom.
•	Loads and displays an image of a carbon atom.
•	Draws a horizontal bar connecting the two carbon atoms.
•	Draws a circle at coordinates (x, y + d) with radius r, representing a hydrogen atom.
•	Loads and displays an image of a hydrogen atom.
•	Draws a vertical bar connecting the carbon atom and the adjacent hydrogen atom above it.
•	Draws a circle at coordinates (x, y - d) with radius r, representing a hydrogen atom.
•	Loads and displays an image of a hydrogen atom.
•	Draws a vertical bar connecting the carbon atom and the adjacent hydrogen atom below it.

5.	After drawing the first carbon atom, the function updates the value of x by adding d to it. This prepares the function for drawing the subsequent carbon atoms in the alkane molecule.
6.	If the current iteration is not the first carbon atom, the function executes the code inside the else block. This code is responsible for drawing the carbon atom, adjacent hydrogen atoms, and the connecting bars, similar to the steps described above.
7.	Finally, outside the loop, the alkane function ends. The graphics window remains open, displaying the drawn alkane molecule until the user closes the window.
•	It's important to note that the code uses the graphics.h library, which is specific to the Turbo C++ compiler. The initgraph, readimagefile, and bar functions are part of that library and might not work in other compilers or environments without appropriate modifications.

User Manual (Screenshots):

Fig: Alkane Output of CH4

Alkanes are a class of hydrocarbon compounds that consist entirely of carbon (C) and hydrogen (H) atoms, with only single bonds between the carbon atoms. They are sometimes referred to as saturated hydrocarbons because they contain the maximum number of hydrogen atoms bonded to each carbon atom, resulting in a saturated carbon structure.
The general formula for alkanes is CₙH₂ₙ₊₂, where "n" represents the number of carbon atoms in the molecule. Each carbon atom in an alkane is bonded to four other atoms, either carbon or hydrogen. The simplest alkane is methane (CH₄), which has only one carbon atom. Other examples include ethane (C₂H₆), propane (C₃H₈), butane (C₄H₁₀), pentane (C₅H₁₂), and so on.
 
Fig:  Alkene Output of C3H6


Alkenes are a class of hydrocarbon compounds that contain carbon (C) and hydrogen (H) atoms, similar to alkanes. However, alkenes have at least one carbon-carbon double bond (C=C) in their structure, which distinguishes them from alkanes. This double bond introduces unsaturation, meaning that alkenes can undergo additional reactions not observed in saturated hydrocarbons.
The general formula for alkenes is CₙH₂ₙ, where "n" represents the number of carbon atoms in the molecule. The simplest alkene is ethene (C₂H₄), which consists of two carbon atoms and a double bond between them. Other examples include propene (C₃H₆), butene (C₄H₈), pentene (C₅H₁₀), and so on.


 Fig: Alkyne Output of C4H6


Alkynes are a class of hydrocarbon compounds that share similarities with alkanes and alkenes but have at least one carbon-carbon triple bond (C≡C) in their structure. The presence of the triple bond distinguishes alkynes from alkanes (which have only single bonds) and alkenes (which have double bonds).
The general formula for alkynes is CₙH₂ₙ₋₂, where "n" represents the number of carbon atoms in the molecule. The simplest alkyne is ethyne, also known as acetylene, with the chemical formula C₂H₂. Other examples include propyne (C₃H₄), butyne (C₄H₆), pentyne (C₅H₈), and so on.

Conclusion

In conclusion, the provided code is a basic implementation for drawing chemical structures of hydrocarbons using the graphics.h library in C++. However, the code has several limitations and areas for improvement.
The code lacks compatibility as it relies on the graphics.h library, which is not a standard library and may not be available on all systems or compilers. It would be advisable to use a more widely supported library or framework for graphical operations.
Additionally, the code could benefit from better code organization and modularity. Breaking down the functionality into separate functions or classes would enhance readability, reusability, and maintainability.
User input validation is missing from the code, which may lead to errors or unexpected behavior when provided with invalid input. Incorporating proper validation mechanisms would ensure that the code handles invalid input gracefully.
Error reporting is also lacking in the code. Clear error messages or feedback should be included to guide the user and provide information about encountered issues.
The code could be optimized by initializing the graphical window only once, rather than for each hydrocarbon structure. This would reduce unnecessary overhead and improve efficiency.
Furthermore, the code lacks proper comments and documentation, making it difficult to understand certain parts. Including explanatory comments and documentation would improve code readability and maintainability.

References

Book:
1.	Let us C++
yashwant kanetkar

2.	Fundamentals of organic chemistry
John E. McMurry

Web Links:
1.	www.stackoverflow.com
2.	www.geeksgorgeegks.com
3.	www.javatpoint.com


