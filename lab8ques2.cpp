 //Write a program for the following scenario. Make use of Abstract Base Class.
 //Media-> Book
 //Media-> Audio Tape
#include <iostream>
using namespace std;

// Abstract Base Class
class Media {
protected:
    string title;
    string publisher;

public:
    virtual void display() = 0; // pure virtual function
};

// Derived Class: Book
class Book : public Media {
public:
    void setValue() {
        cout <<endl<< "Enter book title: ";
        cin >> title;
        cout << "Enter publisher of book: ";
        cin >> publisher;
    }

    void display() {
        cout <<endl<< "Book Details:" << endl;
        cout << "Title: " << title << endl;
        cout << "Publisher: " << publisher << endl;
    }
};

// Derived Class: AudioTape
class AudioTape : public Media {
private:
    int playTime;

public:
    void setValue() {
        cout <<endl<< "Enter audio tape title: ";
        cin >> title;
        cout << "Enter publisher: ";
        cin >> publisher;
        cout << "Enter play time (minutes): ";
        cin >> playTime;
    }

    void display() {
        cout <<endl<< "Audio Tape Details:" << endl;
        cout << "Title: " << title << endl;
        cout << "Publisher: " << publisher << endl;
        cout << "Play Time: " << playTime << " minutes" << endl;
    }
};

int main() {
    Book b;
    AudioTape a;

    cout <<endl<< "Enter Book Information:";
    b.setValue();

    cout <<endl<< "Enter Audio Tape Information:";
    a.setValue();

    b.display();
    a.display();

    return 0;
}
