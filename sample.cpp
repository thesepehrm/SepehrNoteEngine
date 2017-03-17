#include <Windows.h>
#include "SepehrNoteEngine.h"
void jingleBells();
void xmasSong();
SepehrNoteEngine song(150);
int main()
{
	printf("Sepehr Mohammadi presents\n");
	printf("Playing a loop of \"We wish you a merry christmas\"");
	while (true)
	{
		//jingleBells();
		xmasSong();
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
