#include <iostream>
#include <Note.h>


void Note::Delete(Note& note)
{
    for(size_t i = 0; i < notes.size(); ++i)
    {
        if(note.name == notes[i])
            notes.erase(i,1);
    }
}

bool Note::Delete(Note& note, std::string number)
{
    for(size_t i = 0; i < notes.size(); ++i)
    {
        if(number == i)
            notes.erase(i,1);
    }
    
}