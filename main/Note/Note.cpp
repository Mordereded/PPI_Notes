#include <iostream>
#include <vector>


class Note
{
public:
    Note(int numberofNote,std:string name, size_t size, std::string text):numberofNote(numberofNote), name(name),size(size),text(text){}

    void Add()
    {
        Note note = new Note();
        notes.emplace(note);
    }

private:
    int numberofNote;
    std::string name;
    size_t size;
    std::vecotor notes
};


