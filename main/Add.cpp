#include <iostream>
#include <Note.h>


void Note::add()
{
    Note note = new Note();
    notes.emplace(note);
}


void Note::add(Note note)
{
    notes.emplace(note);
}
