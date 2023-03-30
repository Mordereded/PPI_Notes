#include <iostream>
#include <Note.h>


void Change(Note& note, std::string nstring)
{
    note.name = nstring
}

bool Change(Note& note, std::string number)
{
    if(CheckNumber(number))
    {
        note.number = number
        return 1;
    }
    else
    {
        std::cout <<"Number is not valid";
        return 0 
    }
    
}