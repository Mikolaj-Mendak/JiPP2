#include"../include/Note.h"



Note::Note(){};

/**
 * funkcja zwracająca tytuł
 */
string Note::getTitle()
{
    return title;
}

/**
* funkcja ustawiajaca tytuł
*/
void Note::setTitle(string title)
{
    this->title=title;
}

/**
* funkcja wirtualna zwracajaca zawartosc notatki
*/


TextNote::TextNote(){}
/**
 * zwracanie zawartosci notatki
 */
string TextNote::getContent()
{
    return content;
}

/**
* funkcja ustawiajaca zawartosc notatki
*/
void TextNote::setContent(string content)
{
    this->content=content;
}

/**
* funkcja zwracajaca zawartosc notatki
*/
string ListNote::getContent()
{
    return content;
}

/**
* funkcja ustawiajaca zawartosc notatki
*/
void ListNote::setContent(string content)
{
    this->content=content;
}

