/*
	MIT License

	Copyright (c) 2017 Sepehr Mohammadi - http://mohammadi.io/

	Permission is hereby granted, free of charge, to any person obtaining a copy
	of this software and associated documentation files (the "Software"), to deal
	in the Software without restriction, including without limitation the rights
	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
	copies of the Software, and to permit persons to whom the Software is
	furnished to do so, subject to the following conditions:

	The above copyright notice and this permission notice shall be included in all
	copies or substantial portions of the Software.

	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
	SOFTWARE.
*/

/*
	Sepehr's Note Engine:
	This's a simple API for Visual C++ that you can use it with Sleep() and Beep() Functions to play music notes.
*/

#include <string>
class SepehrNoteEngine
{
	/*
		TEMPO : The tempo of the song (Beats Per Minute)
	*/
	int TEMPO;
	/*
		UNIT : The note duration for every beat.
	*/
	double UNIT;
	std::string notesort = "CDEFGAB";
	int powerOfTwo(int);
	int findIndex(char);
	char getLastNote(char);

public:
	//Constructor
	SepehrNoteEngine(int, double=0.25);
	void setTempo(int);
	void setUnit(double);
	int getTempo();
	double getUnit(double);

	/*
	Note Function:
		The First Parameter is the tune of the note and the second parameter is the octave of the note.
		Function Call Examples
		- C1  : Note("C",1);
		- C#1 : Note("C#",1);
		- Db1 : Note("Db",1);
		- D5  : Note("D",5);

		The Available Range is from Octave 0 To Octave 7

	Returns the note sound frequency.
	*/
	int Note(std::string, int);

	/*
	NoteValue Function:
		The First Parameter is the time of the note and the second optional parameter is the times of dotted note.
		Function Call Examples
		- Crotchet/Quarter note  		       : NoteValue(1/4.0,0)
		- Crotchet/Quarter note Dotted		   : NoteValue(1/4.0,1)
		- Crotchet/Quarter note Double Dotted  : NoteValue(1/4.0,2)
		- Semibreve/Whole note				   : NoteValue(1,0)

	Returns the note duration in miliseconds based on TEMPO and UNIT variables.
	*/
	int NoteValue(double, int= 0);

};
