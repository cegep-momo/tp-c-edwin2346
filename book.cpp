#include "book.h"
#include <sstream>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;
Book::Book(): title(""), author(""), isbn(""), isAvailable(true), borrowerName("") {}

Book::Book(const string& title, const string& author, const string& isbn)
    : title(title), author(author), isbn(isbn), isAvailable(true), borrowerName("") {}

string Book::getTitle() const { return title; }
string Book::getAuthor() const { return author; }
string Book::getISBN() const { return isbn; }   
bool Book::getAvailability() const { return isAvailable; }
string Book::getBorrowerName() const { return borrowerName; }

void Book::setTitle(const string& title) { this->title = title; }
void Book::setAuthor(const string& author) { this->author = author; }   
void Book::setISBN(const string& isbn) { this->isbn = isbn; }
void Book::setAvailability(bool available) { this->isAvailable = available; }
void Book::setBorrowerName(const string& name) { this->borrowerName = name; }

void Book::checkOut(const string& borrower) {
    isAvailable = false;
    borrowerName = borrower;
}
void Book::returnBook() {
    isAvailable = true;
    borrowerName = "";
}
string Book::toString() const {
    string availability = isAvailable ? "Disponible" : "Emprunté par " + borrowerName;
    return "Titre: " + title + "\nAuteur: " + author + "\nISBN: " + isbn + "\nStatut: " + availability;
}

string Book::toFileFormat() const {
    string result = title + "|" + author + "|" + isbn + "|";
    result += (isAvailable ? "1" : "0");
    result += "|" + borrowerName;
    return result;
}

void Book::fromFileFormat(const string& line) {
    istringstream iss(line);
    string availabilityStr;
    getline(iss, title, '|');
    getline(iss, author, '|');
    getline(iss, isbn, '|');
    getline(iss, availabilityStr, '|');
    getline(iss, borrowerName, '|');
    
    isAvailable = (availabilityStr == "1");
}
