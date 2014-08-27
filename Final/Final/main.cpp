//
//  main.cpp
//  Final
//
//  Created by Christopher Olsen on 8/25/14.
//  Copyright (c) 2014 Christopher Olsen. All rights reserved.
//
    /*----------------------------------------------------------------------
     Requirement #19: Demonstrate header file
     ----------------------------------------------------------------------*/
#include "gameObjects.h"
#include "menu.h"
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>

#include <iostream>
#define BEGIN_LEN = 3;
#define EASY_LEN = 5;
#define MEDIUM_LEN = 6;
#define HARD_LEN = 8;
using std::cin;
using std::cout;
using std::ifstream;
using std::ofstream;
using std::endl;
using std::string;

enum difficulty(beginner, easy, medium, hard);
int main(int argc, const char * argv[])
{

	/*----------------------------------------------------------------------
     Requirement #15: Demonstrate command line args
     ----------------------------------------------------------------------*/
    if (argv[0] == "--cheat"){
		//highlight correct answer
		cheatsActive = true; // Has to be global scope so it can be used regardless of which Game object gets called
	}
	
    /*----------------------------------------------------------------------
    Requirement #01A: Demonstrate simple output
     ----------------------------------------------------------------------*/
    //Make sure all necessary files exist and can be opened
	checkFiles();
	//Begin game logic
	start();
    /*----------------------------------------------------------------------
     Requirement #01B: Demonstrate simple input
     ----------------------------------------------------------------------*/

    /*----------------------------------------------------------------------
     Requirement #02: Demonstrate explicit type casting
     ----------------------------------------------------------------------*/
	int someInt = static_cast<int>(someFloat);
    /*----------------------------------------------------------------------
     Requirement #03A: Demonstrate logical operators
     ----------------------------------------------------------------------*/

	
    /*----------------------------------------------------------------------
     Requirement #03B: Demonstrate bitwise operators
     ----------------------------------------------------------------------*/
	//log any errors
	ofstream log;
	log.open("log.txt", ofstream::trunc | ofstream::app);	
    
 
    /*----------------------------------------------------------------------
     Requirement #05: Demonstrate a random number
     ----------------------------------------------------------------------*/
    // Initialize random seed
	srand(time(NULL));

	// Set gibberish characters
	
	// Set position for words
    /*----------------------------------------------------------------------
     Requirement #06A: Demonstrate understanding of syntax error
     ----------------------------------------------------------------------*/
    
    /*----------------------------------------------------------------------
     Requirement #06B: Demonstrate understanding of logic error
     ----------------------------------------------------------------------*/
    
    /*----------------------------------------------------------------------
     Requirement #06C: Demonstrate understanding of runtime error
     ----------------------------------------------------------------------*/
    
    /*----------------------------------------------------------------------
     Requirement #07: Demonstrate a debugging trick
     ----------------------------------------------------------------------*/
bool Menu::isValid(){
	// Validate input for proper data type
	if (!cin){
		return false;
		
	}
}
    
    /*----------------------------------------------------------------------
     Requirement #08B: Demonstrate an overloaded function
     ----------------------------------------------------------------------*/

    
    
    /*----------------------------------------------------------------------
     Requirement #10: Demonstrate scope of variables
     ----------------------------------------------------------------------*/
    switch (menuSelection){
		case 1:
			EasyGame newGame;
			newGame.play();
	 /*----------------------------------------------------------------------
     Requirement #21C: Demonstrate a destructor
     ----------------------------------------------------------------------*/
			~newGame();
		
	}
    /*----------------------------------------------------------------------
     Requirement #11A: Demonstrate pass by val
     ----------------------------------------------------------------------*/
    
    /*----------------------------------------------------------------------
     Requirement #11B: Demonstrate pass by ref
     ----------------------------------------------------------------------*/
    
    /*----------------------------------------------------------------------
     Requirement #12A: Demonstrate standard string
     ----------------------------------------------------------------------*/
    
    
    

	
    /*----------------------------------------------------------------------
     Requirement #14A: Demonstrate a multi-dimensional array
     ----------------------------------------------------------------------*/
	// The game board should be an array of a certain size

    
    
    /*----------------------------------------------------------------------
     Requirement #16A: Demonstrate class
     ----------------------------------------------------------------------*/
    // Base class for difficulties
	class Game
	{
		
		
	};
	
	class Menu {
		bool isValid();
		int GetSelection();
	};
	
	int Menu::GetSelection(){
		
	}
    /*----------------------------------------------------------------------
     Requirement #16B: Demonstrate struct
     ----------------------------------------------------------------------*/
    struct iWord{
		
		iWord next;
	}
    /*----------------------------------------------------------------------
     Requirement #16C: Demonstrate object
     ----------------------------------------------------------------------*/
    BeginnerGame newGame;
	
    /*----------------------------------------------------------------------
     Requirement #17A: Demonstrate pointer to array
     ----------------------------------------------------------------------*/
    
    /*----------------------------------------------------------------------
     Requirement #17B: Demonstrate pointer to struct
     ----------------------------------------------------------------------*/
    
    /*----------------------------------------------------------------------
     Requirement #17C: Demonstrate pointer to object
     ----------------------------------------------------------------------*/
    
    /*----------------------------------------------------------------------
     Requirement #18: Demonstrate namespace
     ----------------------------------------------------------------------*/
    namespace GameObjects{
		char[][] dispBoard(char inBoard*&[][]);
		
	}
	
	namespace MenuObjects{
		
	}

    /*----------------------------------------------------------------------
     Requirement #20: Demonstrate a makefile
     ----------------------------------------------------------------------*/
    
    /*----------------------------------------------------------------------
     Requirement #21A: Demonstrate a default constructor
     ----------------------------------------------------------------------*/
    Game();
    /*----------------------------------------------------------------------
     Requirement #21B: Demonstrate a copy constructor
     ----------------------------------------------------------------------*/
    MyClass( const MyClass& other );
    
    
    /*----------------------------------------------------------------------
     Requirement #22: Demonstrate overloaded operator
     ----------------------------------------------------------------------*/
    bool operator^();
    /*----------------------------------------------------------------------
     Requirement #23: Demonstrate fileIO
     ----------------------------------------------------------------------*/
    /* Import Selected Dictionary */
	
	
	
	ifstream dictionary;
	/*----------------------------------------------------------------------
     Requirement #12B: Demonstrate c-style string
     ----------------------------------------------------------------------*/
	char line[20];
	short arraySize;
	bool fileOpens;
	dictionary.open(selectedDictionary);
	//If file opens, carry on
	if (dictionary.is_open()) {
		fileOpens = true;
	}
	//Otherwise, throw an exception
	else {
	/*----------------------------------------------------------------------
     Requirement #25: Demonstrate exceptions
     ----------------------------------------------------------------------*/
	 throw "Unable to open file. Please make sure it exists and is not corrupt.";
	 
	catch(string e){
		cout << e << endl << "Filename: " << dictionary << endl;
	}
	 
	}
	//Read entire file to allocate space for array
		while (getline (dictionary,line)){
			arraySize++;
		}
	//Read the lines into an array of strings, using type-casting from char to string
	    /*----------------------------------------------------------------------
     Requirement #14B: Demonstrate a dynamically allocated array
     ----------------------------------------------------------------------*/
	new string gameDictionary[arraySize];
	//Return to the beginning of the file
	dictionary.seekg(0, dictionary.beg);
	
	/*----------------------------------------------------------------------
     Requirement #04: Demonstrate a loop
     ----------------------------------------------------------------------*/
	for (i=0; i<arraySize; ++i){
		gameDictionary[i] = string(getline (dictionary, line));
	}
	
	//Delete this array when we no longer need it
    /*----------------------------------------------------------------------
     Requirement #24A: Demonstrate inheritance
     ----------------------------------------------------------------------*/
    class BeginnerGame : public Game {
		
		
	};

	class EasyGame : public Game {
		
	};
	
	class MediumGame : public Game {
		
		
	};
	
	class HardGame : public Game {
		
	};
    /*----------------------------------------------------------------------
     Requirement #24B: Demonstrate polymorphism
     ----------------------------------------------------------------------*/
    
    
    
    /*----------------------------------------------------------------------
     Requirement #26: Demonstrate something awesome
     ----------------------------------------------------------------------*/




    return 0;
}
    /*----------------------------------------------------------------------
     Requirement #08A: Demonstrate a user-defined function
     ----------------------------------------------------------------------*/
void start(){
	bool play;
	
	do {
	/*----------------------------------------------------------------------
     Requirement #09: Demonstrate functional decomposition
     ----------------------------------------------------------------------*/
	mainMenu();
	difficulty getDifficulty();
	getWords();
	play = playLoop();
	
	} while (play == true);
	
}	

void mainMenu(){
	MenuObjects::Menu gameMenu;
	gameMenu.GetSelection();
	if (gameMenu.isValid()){
		//Continue
	} else{
    /*----------------------------------------------------------------------
     Requirement #13: Demonstrate recursion
     ----------------------------------------------------------------------*/
		//Recursively call until input is valid
		cin.clear();
		cin.flush();
		cin.ignore();
		gameMenu.GetSelection();
	}
	
	
}

bool playLoop(){
	
}
