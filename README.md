# Assignment1
C Program to calculate total surface area &amp; volume of several spherical segments given the radius (r) and heights (ha, hb)


Requirements:
1. Select appropriate identifiers and data types for all variables. Declare all of them correctly.
2. At the beginning of the program request the user for a number between 2 and 10, inclusively. Let us call this number n. The program must keep asking for this number until a value within that required range is provided.
3. The program will have a loop to obtain the parameters for the dimensions of n spherical segments from the user and calculate their dimensions.
4. There are three parameters for the dimensions: the radius of the sphere (R), the height of the top area of the spherical segment (ha), and the height of the bottom area of the spherical segment (hb). All input values for these three variables must be obtained from the user using scanf in that exact order. After receiving all three values, they must be printed, with appropriate labels to identify them. This will confirm that the values were properly read. After that, they must be validated. Parameters R, ha, and hb must be positive real values. Also, ha and hb must never be bigger than the value of parameter R, and  ha should always be bigger than or equal to hb. If any of these conditions is violated in a set, a message indicating the violation must be printed, all these parameters must be rejected, and new values must be requested from the user. This process repeats until n proper sets of values are evaluated.
5. Evaluate the provided formulas to obtain the value of the total surface area and the volume for each spherical segment. Store this results in appropriate output variables.
6. Print the values for the output variables after evaluation, with appropriate labels describing them.
7. At the end of the loop, the program should report on the average values found for all total surface areas and all volumes , with appropriate labels describing them.
8. Include appropriate comments in the program. In particular include a header for the main function and description of all variables.
9. The program should compile and run.
