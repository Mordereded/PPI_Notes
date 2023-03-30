#include <iostream>
#include <vector>


class Book
{
public:
    Book(int numberofNote,std:string name, size_t size, std::string text):numberofNote(numberofNote), name(name),size(size),text(text){}

    void Add()
    {
        Note note = new Note();
        book.emplace(note);
    }

private:
    int numberofNote;
    std::string name;
    size_t size;
    std::vector<Notes> book
};