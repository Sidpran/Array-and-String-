# Array-and-String-

01.AIM : PRINTING ARRAY ELEMEMTS

THEORY :
- Arrays store multiple elements of the same data type in contiguous memory locations, enabling efficient data management.
- Using loops (commonly a for loop), the program iterates through the array indices to access and print each element.
- Printing array elements helps in verifying the correctness of data storage and manipulation within the program.
- This basic operation forms the foundation for more complex data handling and algorithm implementation in C++.

ALGORITHM:
1. Start the program.
2. Declare an integer array arr of size 5.
3. Display the message "Enter 5 integers:" to prompt the user for input.
4. Use a loop that runs from 0 to 4 (total 5 times):
5. Read an integer from the user.
6. Store the input value in the array at the current index.
7. Display the message "Array elements are:" to indicate the output.
8. Use another loop that runs from 0 to 4:
9. Access each array element at the current index.
10. Print the element followed by a space.
11. Print a newline to end the output line.
12. End the program.

02.AIM : TO FIND NUMBER IN A GIVEN ARRAY

THEORY :
- The purpose of this program is to search for a specific number within the elements of an array.
- The program examines each array element sequentially to check for a match with the target number.
- This method of searching is known as linear search, where elements are checked one after another until the number is found or the array ends.
- Detecting whether a number exists in an array helps in data validation and decision-making tasks in programming.
- Searching arrays is a fundamental concept that forms the basis for more advanced search algorithms and data manipulation techniques.

ALGORITHM:
1. Start the program.
2. Declare an integer array arr of size 5, an integer variable num for the number to search, and an integer flag found initialized to 0.
3. Prompt the user to enter 5 integers.
4. Use a loop from i = 0 to i < 5 to:
5. Read each integer from the user.
6. Store it in arr[i]
7. Prompt the user to enter the number num to search in the array.
8. Use another loop from i = 0 to i < 5 to:
9. Check if arr[i] equals num.
   - If yes, set found to 1 and break the loop.
10. Check the value of found:
   - If found is 1, print "num is present in the array."
   - Otherwise, print "num is not present in the array."
11. End the program.

03.AIM : SUM AND AVERAGE OF ARRAY ELEMENTS

THEORY:
- The program computes the total (sum) of all elements stored in an array.
- It also calculates the average value by dividing the sum by the total number of elements.
- The program accesses each element of the array using a loop to perform the summation.
- Calculating sum and average helps in understanding the overall distribution and central tendency of data.
- This operation demonstrates basic array processing and arithmetic calculation in C++, which is essential for many practical applications.

ALGORITHM: 
1. Start the program.
2. Declare an integer array arr of size 5, an integer variable sum initialized to 0, and a float variable avg.
3. Display the message "Enter 5 integers:" to prompt the user for input.
4. Use a loop from i = 0 to i < 5 to:
5. Read an integer from the user and store it in arr[i].
6. Add the value of arr[i] to sum.
7. Calculate the average by dividing sum by 5.0 and store the result in avg.
8. Print the sum of the array elements.
9. Print the average of the array elements.
10. End the program.

04.AIM: TO FIND MINIMUM AND MAXIMUM NUMBER

THEORY:
- The program identifies the largest (maximum) and smallest (minimum) numbers stored in an array.
- The program scans through all elements in the array one by one to compare their values.
- It keeps track of the current maximum and minimum values as it iterates through the array.
- Finding the max and min helps understand the range and distribution of data within the array.
- This process demonstrates important concepts of array traversal and conditional checking in C++.
- Knowing how to find maximum and minimum values is fundamental in solving many real-world problems and optimizing algorithms.

ALGORITHM: 
1. Start the program.
2. Declare an integer variable n to store the number of elements.
3. Prompt the user to enter the number of elements in the array.
4. Read the value of n.
5. Declare an integer array arr of size n.
6. Prompt the user to enter n elements.
7. Use a loop from i = 0 to i < n to:
8. Read each element from the user.
9. Store the element in arr[i].
10. Initialize two integer variables max and min with the value of the first element of the array arr.
11. Use a loop from i = 1 to i < n to:
12. Compare arr[i] with max; if arr[i] is greater than max, update max with arr[i].
13. Compare arr[i] with min; if arr[i] is less than min, update min with arr[i].
14. Print the value of max as the maximum element.
15. Print the value of min as the minimum element.
16. End the program.

05.AIM : DIFFERENT WAYS TO DECLARE AND INITIALISE A STRING

THEORY: 
- The program shows four ways to declare and display strings in C++.
- It uses three C-style character arrays with different null terminator approaches and one C++ std::string object.
- All strings print correctly because each is properly null-terminated.
- This demonstrates the flexibility of string declaration methods in C++.
- It highlights the difference between traditional character arrays and modern string objects.
- Useful for understanding various string handling techniques in C++.

ALGORITHM: 
1. Start the program.
2. Declare a character array a of size 4 and initialize it with a string of 3 characters plus a null terminator.
3. Declare a character array b without specifying size and initialize it with a list of characters ending with a null terminator.
4. Declare a character array c of size 4 and initialize it with individual characters including a null terminator.
5. Declare a std::string object d and initialize it with a string literal.
6. Print the heading message: "Different ways to declare a string in C++:".
7. Print the contents of a (character array).
8. Print the contents of b (character array).
9. Print the contents of c (character array).
10. Print the contents of d (std::string object).
11. End the program.

06.AIM : CONCATENATION OF STRINGS

THEORY: 
- The program combines two or more strings into a single continuous string.
- String concatenation involves appending one string at the end of another to form a new, longer string.
- In C++, concatenation is commonly done using the + operator or the append() method for std::string objects, providing straightforward and efficient ways to merge strings.
- For C-style strings (character arrays), functions like strcat() or manual loops can be used to join strings safely, ensuring proper null termination.
- Understanding string concatenation is important for text processing, message formation, and data manipulation in various programming tasks.
- This operation helps in learning string handling techniques in C++, bridging legacy and modern string management approaches.

ALGORITHM:
1. Start the program.
2. Declare two string variables str1 and str2 to store user input.
3. Prompt the user to enter the first string.
4. Read the input and store it in str1.
5. Prompt the user to enter the second string.
6. Read the input and store it in str2.
7. Concatenate str1 and str2 using the + operator, and store the result in a new string variable result.
8. Display the concatenated string with an appropriate message.
9. End the program.

07.AIM : PRINTING STRING IN REVERSE

THEORY : 
- The program displays the characters of a given string in reverse order.
- It involves accessing the string elements starting from the last character to the first.
- This is typically done using a loop that begins at the end of the string and moves backward toward the beginning.
- Printing a string in reverse helps understand string indexing and manipulation techniques.
- Reversing strings is a common operation useful in many applications such as palindrome checking, text processing, and algorithm design.

ALGORITHM:
1. Start the program.
2. Declare a string variable str to store the user input.
3. Display the message "Enter a string:" to prompt the user.
4. Read the input string and store it in str.
5. Use a loop that starts from the last index of the string (str.length() - 1) and decrements to 0:
6. In each iteration, access the character at the current index.
7. Print the character.
8. Print a newline after the loop to move to the next line.
9. End the program.

08.AIM : PALINDROME CHECKING

THEORY:
- The program verifies if a given string or number reads the same forwards and backwards, i.e., it is a palindrome.
- Palindrome checking involves comparing characters from opposite ends of the input moving towards the center to ensure matching pairs.
- This process uses iteration and conditional checks to determine equality of corresponding characters or digits.
- Implementing palindrome logic enhances understanding of string/number manipulation and control structures in C++.
- Palindrome detection is useful in various applications including data validation, pattern recognition, and algorithmic problem solving.
- This exercise helps strengthen fundamental programming skills such as loops, conditionals, and array or string handling.

ALGORITHM:
1. Start the program.
2. Declare a string variable str to store the user input.
3. Display the message "Enter a string:" to prompt the user.
4. Read the input string and store it in str.
5. Calculate the length of str and store it in an integer variable n.
6. Initialize an integer variable i to 0.
7. Use a while loop that runs while i is less than n/2 and the character at index i is equal to the character at index n - i - 1:
8. Increment i by 1 in each iteration.
9. After the loop, check if i is equal to n/2:
  - If yes, print "The string is a palindrome."
  - Otherwise, print "The string is not a palindrome."
10. End the program.


CONCLUSION: This experiment covered essential operations with arrays and strings in C++, including declaration, initialization, traversal, searching, summation, finding extremes, concatenation, reversing, and palindrome checking. These tasks enhanced our understanding of how to manipulate data structures and apply control statements effectively. Mastering these core concepts is vital for building strong programming skills and tackling more advanced problems in C++ development.
