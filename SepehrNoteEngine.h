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
	int powerOfTwo(int n)
	{
		int temp = 1;
		for (int i = 0; i < n; i++)
			temp *= 2;
		return temp;
	}
	int findIndex(char key)
	{
		for (int i = 0; i < 7; i++)
			if (key == notesort[i])
				return i;
	}
	char getLastNote(char current)
	{
		if (current == 'C')
			return 'B';
		return notesort[findIndex(current) - 1];
	}

public:
	//Constructor
	SepehrNoteEngine(int tempo, double unit=0.25)
	{
		TEMPO = tempo;
		UNIT = unit;
	}
	void setTempo(int tempo)
	{
		TEMPO = tempo;
	}
	void setUnit(double unit)
	{
		UNIT = unit;
	}
	int getTempo()
	{
		return TEMPO;
	}
	double getUnit(double unit)
	{
		return UNIT;
	}
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
	int Note(std::string fullnote, int octave)
	{
		char note = fullnote[0];
		switch (fullnote.length())
		{
		case 1:
			switch (octave)
			{
			case 0:
				switch (note)
				{
				case 'C':
					return 16;
				case 'D':
					return 18;
				case 'E':
					return 21;
				case 'F':
					return 22;
				case 'G':
					return 24;
				case 'A':
					return 27;
				case 'B':
					return 31;
				}
			case 1:
				switch (note)
				{
				case 'C':
					return 33;
				case 'D':
					return 37;
				case 'E':
					return 41;
				case 'F':
					return 44;
				case 'G':
					return 49;
				case 'A':
					return 55;
				case 'B':
					return 62;
				}
			case 2:
				switch (note)
				{
				case 'C':
					return 65;
				case 'D':
					return 73;
				case 'E':
					return 82;
				case 'F':
					return 87;
				case 'G':
					return 98;
				case 'A':
					return 110;
				case 'B':
					return 123;
				}
			case 3:
				switch (note)
				{
				case 'C':
					return 131;
				case 'D':
					return 147;
				case 'E':
					return 165;
				case 'F':
					return 175;
				case 'G':
					return 196;
				case 'A':
					return 220;
				case 'B':
					return 245;
				}
			case 4:
				switch (note)
				{
				case 'C':
					return 262;
				case 'D':
					return 294;
				case 'E':
					return 330;
				case 'F':
					return 349;
				case 'G':
					return 392;
				case 'A':
					return 440;
				case 'B':
					return 494;
				}
			case 5:
				switch (note)
				{
				case 'C':
					return 523;
				case 'D':
					return 587;
				case 'E':
					return 659;
				case 'F':
					return 698;
				case 'G':
					return 784;
				case 'A':
					return 880;
				case 'B':
					return 988;
				}
			case 6:
				switch (note)
				{
				case 'C':
					return 1046;
				case 'D':
					return 1175;
				case 'E':
					return 1328;
				case 'F':
					return 1397;
				case 'G':
					return 1568;
				case 'A':
					return 1760;
				case 'B':
					return 1975;
				}
			case 7:
				switch (note)
				{
				case 'C':
					return 2093;
				case 'D':
					return 2349;
				case 'E':
					return 2637;
				case 'F':
					return 2794;
				case 'G':
					return 3136;
				case 'A':
					return 3520;
				case 'B':
					return 3951;
				}
			}
		case 2:
			char pitch = fullnote[1];
			note = pitch == 'b' ? getLastNote(note) : note;

			switch (octave)
			{
			case 0:
				switch (note)
				{
				case 'C':
					return 17;
				case 'D':
					return 19;
				case 'F':
					return 23;
				case 'G':
					return 26;
				case 'A':
					return 29;
				}
			case 1:
				switch (note)
				{
				case 'C':
					return 35;
				case 'D':
					return 39;
				case 'F':
					return 46;
				case 'G':
					return 52;
				case 'A':
					return 58;
				}
			case 2:
				switch (note)
				{
				case 'C':
					return 69;
				case 'D':
					return 78;
				case 'F':
					return 92;
				case 'G':
					return 104;
				case 'A':
					return 116;
				}
			case 3:
				switch (note)
				{
				case 'C':
					return 139;
				case 'D':
					return 155;
				case 'F':
					return 185;
				case 'G':
					return 208;
				case 'A':
					return 233;
				}
			case 4:
				switch (note)
				{
				case 'C':
					return 277;
				case 'D':
					return 311;
				case 'F':
					return 370;
				case 'G':
					return 415;
				case 'A':
					return 466;
				}
			case 5:
				switch (note)
				{
				case 'C':
					return 554;
				case 'D':
					return 622;
				case 'F':
					return 740;
				case 'G':
					return 831;
				case 'A':
					return 932;
				}
			case 6:
				switch (note)
				{
				case 'C':
					return 1109;
				case 'D':
					return 1244;
				case 'F':
					return 1480;
				case 'G':
					return 1661;
				case 'A':
					return 1865;
				}
			case 7:
				switch (note)
				{
				case 'C':
					return 2217;
				case 'D':
					return 2489;
				case 'F':
					return 2960;
				case 'G':
					return 3322;
				case 'A':
					return 3729;
				}
			}
		}

		return 0;
	}

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
	int NoteValue(double value, int dottedtimes = 0)
	{
		double time = (1000 * (60.0 / TEMPO));
		value *= 2 - (1.0 / powerOfTwo(dottedtimes));
		value = value / UNIT;
		return (int)(time * value);
	}

};
