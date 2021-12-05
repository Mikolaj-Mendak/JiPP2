
#ifndef JIPP_NOTE_H
#define JIPP_NOTE_H
#include<iostream>
using namespace std;

class Note{
    string title;
public:
    string getTitle();
    void setTitle(string title);
    virtual string getContent() = 0;
    virtual void setContent(string content) = 0;
    Note();
};

class TextNote:public Note{
    string content;
public:
    TextNote();
    string getContent();
    void setContent(string content);
};

class ListNote:public TextNote{
    string content;
public:
    string getContent();
    void setContent(string content);
};





#endif //JIPP_NOTE_H
