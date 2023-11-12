/////////////////////////////////////////////////////////////////////
//
// Name: Landon Burns
// Due date: 3/30/2022
// Class: CSCI 1370-04
// Semester: <This semester, like: Spring 2012>
// CSCI 1370 Instructor: Gustavo Dietrich
//
// Program Description: This searches for an input word for a pretyped file.
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main()
{
	// Declare variable search_word to store the word to be searched for
  string search_word;

	// Declare variable file_word to store the word read from the file
  string file_word;
	// Declare variable counter to keep track of the file line being visited and initialize it to zero
  int counter;
  counter = 0;

	// Declare variable found to keep track of whether the word was found or not and initialize it to false
  bool found;
  found = false;

	// Declare input file variable inFile (represents the input stream)
	ifstream inFile; 
	//open the dictionary file.
  inFile.open("dictionary.txt");
	// If the dictionary file was not found
  if (!inFile){
  cout << "File not found!";
		// Display "File not found!"
    
		// Exit main() indicating the program did not finish successfully
return 0;
    }
	//Prompt the user to "Enter a word to search in dictionary: "
cout << "Enter a word to search in dictionary: ";
	// Get it and save it in the corresponding variable
cin >> search_word;

	//Note: Loop through the whole file, but if the word is found jump out of the loop
	// Get the first word from the file
 inFile >> file_word;

	// While the input stream is in working conditions
	while (inFile){
		// Update the counter
  counter = counter + 1;
		// If the word from the file is the one we are searching for
  if (file_word == search_word){

			// Display "word ", search_word, " found in line ", counter
  cout << "word " << search_word << " found in line " << counter;
			// Set found to true (to indicate the word was found)
  found = true;
			// We don't need to keep searching, so jump out of the loop
    break;
    }
		// Get the next word from the file
    inFile >> file_word;
	}
	//if the word was not found
	if (!inFile){

    // Display the message "word ", search_word, " is not in the dictionary"
  
    cout << "word " << search_word << " is not in the dictionary";

  // Close the file
    
inFile.close();


    }
	// Exit main() indicating the program finished successfully
	return 0;
}