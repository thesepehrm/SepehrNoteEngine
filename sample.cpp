#include <Windows.h>
#include "SepehrNotes.h"

void jingleBells();
void xmasSong();
void pinkPanther();

SepehrNoteEngine song(150);
int main()
{
	printf("Sepehr Mohammadi Presents...\n");
	printf("Playing a loop of \"Pink Panther\"");
	while (true)
	{
		//jingleBells();
		//xmasSong();
		pinkPanther();
		
	}
	

}

void jingleBells()
{
	Beep(song.Note("G", 4), song.NoteValue(1 / 4.0));
	Beep(song.Note("E", 4), song.NoteValue(1 / 4.0));
	Beep(song.Note("E", 4), song.NoteValue(1 / 2.0));

	Beep(song.Note("E", 4), song.NoteValue(1 / 4.0));
	Beep(song.Note("E", 4), song.NoteValue(1 / 4.0));
	Beep(song.Note("E", 4), song.NoteValue(1 / 2.0));

	Beep(song.Note("E", 4), song.NoteValue(1 / 4.0));
	Beep(song.Note("G", 4), song.NoteValue(1 / 4.0));
	Beep(song.Note("C", 4), song.NoteValue(1 / 4.0));
	Beep(song.Note("D", 4), song.NoteValue(1 / 4.0));

	Beep(song.Note("E", 4), song.NoteValue(1));

	Beep(song.Note("F", 4), song.NoteValue(1 / 4.0));
	Beep(song.Note("F", 4), song.NoteValue(1 / 4.0));
	Beep(song.Note("F", 4), song.NoteValue(1 / 4.0));
	Beep(song.Note("F", 4), song.NoteValue(1 / 4.0));

	Beep(song.Note("F", 4), song.NoteValue(1 / 4.0));
	Beep(song.Note("E", 4), song.NoteValue(1 / 4.0));
	Beep(song.Note("E", 4), song.NoteValue(1 / 4.0));
	Beep(song.Note("E", 4), song.NoteValue(1 / 4.0));

	Beep(song.Note("E", 4), song.NoteValue(1 / 4.0));
	Beep(song.Note("D", 4), song.NoteValue(1 / 4.0));
	Beep(song.Note("D", 4), song.NoteValue(1 / 4.0));
	Beep(song.Note("E", 4), song.NoteValue(1 / 4.0));

	Beep(song.Note("D", 4), song.NoteValue(1 / 2.0));
	Beep(song.Note("G", 4), song.NoteValue(1 / 2.0));

}
void xmasSong()
{
	Beep(song.Note("G", 3), song.NoteValue(1 / 4.0));

	Beep(song.Note("C", 4), song.NoteValue(1 / 4.0));
	Beep(song.Note("C", 4), song.NoteValue(1 / 8.0));
	Beep(song.Note("D", 4), song.NoteValue(1 / 8.0));
	Beep(song.Note("C", 4), song.NoteValue(1 / 8.0));
	Beep(song.Note("B", 3), song.NoteValue(1 / 8.0));

	Beep(song.Note("A", 3), song.NoteValue(1 / 4.0));
	Beep(song.Note("A", 3), song.NoteValue(1 / 4.0));
	Beep(song.Note("A", 3), song.NoteValue(1 / 4.0));

	Beep(song.Note("D", 4), song.NoteValue(1 / 4.0));
	Beep(song.Note("D", 4), song.NoteValue(1 / 8.0));
	Beep(song.Note("E", 4), song.NoteValue(1 / 8.0));
	Beep(song.Note("D", 4), song.NoteValue(1 / 8.0));
	Beep(song.Note("C", 4), song.NoteValue(1 / 8.0));

	Beep(song.Note("B", 3), song.NoteValue(1 / 4.0));
	Beep(song.Note("G", 3), song.NoteValue(1 / 4.0));
	Beep(song.Note("G", 3), song.NoteValue(1 / 4.0));

	Beep(song.Note("E", 4), song.NoteValue(1 / 4.0));
	Beep(song.Note("E", 4), song.NoteValue(1 / 8.0));
	Beep(song.Note("F", 4), song.NoteValue(1 / 8.0));
	Beep(song.Note("E", 4), song.NoteValue(1 / 8.0));
	Beep(song.Note("D", 4), song.NoteValue(1 / 8.0));

	Beep(song.Note("C", 4), song.NoteValue(1 / 4.0));
	Beep(song.Note("A", 3), song.NoteValue(1 / 4.0));
	Beep(song.Note("G", 3), song.NoteValue(1 / 8.0));
	Beep(song.Note("G", 3), song.NoteValue(1 / 8.0));

	Beep(song.Note("A", 3), song.NoteValue(1 / 4.0));
	Beep(song.Note("D", 4), song.NoteValue(1 / 4.0));
	Beep(song.Note("B", 3), song.NoteValue(1 / 4.0));

	Beep(song.Note("C", 4), song.NoteValue(1 / 2.0));
}
void pinkPanther()
{
	for (int octave = 4; octave < 6; octave++)
	{
		Beep(song.Note("D#", octave), song.NoteValue(1 / 16.0));
		Beep(song.Note("E",octave), song.NoteValue(1 / 4.0, 0));
		Sleep(song.NoteValue(1 / 8.0, 1));
		Beep(song.Note("F#", octave), song.NoteValue(1 / 16.0));
		Beep(song.Note("G", octave), song.NoteValue(1 / 4.0, 0));
		Sleep(song.NoteValue(1 / 8.0, 1));
		Beep(song.Note("D#", octave), song.NoteValue(1 / 16.0));

		Beep(song.Note("E", octave), song.NoteValue(1 / 8.0, 1));
		Beep(song.Note("F#", octave), song.NoteValue(1 / 16.0));
		Beep(song.Note("G",octave), song.NoteValue(1 / 8.0, 1));
		Beep(song.Note("C", octave+1), song.NoteValue(1 / 16.0));
		Beep(song.Note("B", octave), song.NoteValue(1 / 8.0, 1));
		Beep(song.Note("E", octave), song.NoteValue(1 / 16.0));
		Beep(song.Note("G", octave), song.NoteValue(1 / 8.0, 1));
		Beep(song.Note("B", octave), song.NoteValue(1 / 16.0));

		Beep(song.Note("Bb", octave), song.NoteValue(1 / 2.0 + 1 / 12.0));
		Beep(song.Note("A", octave), song.NoteValue(1 / 12.0));
		Beep(song.Note("G", octave), song.NoteValue(1 / 12.0));
		Beep(song.Note("E", octave), song.NoteValue(1 / 12.0));
		Beep(song.Note("D", octave), song.NoteValue(1 / 12.0));
		Beep(song.Note("E", octave), song.NoteValue(1 / 12.0 + 1 / 2.0));

		Sleep(song.NoteValue(1 / 4.0));
		Sleep(song.NoteValue(1 / 8.0, 1));
	}
	
}
