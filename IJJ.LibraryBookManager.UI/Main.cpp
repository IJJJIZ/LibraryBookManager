
#include <conio.h>
#include <iostream>

using namespace std;

const int NUM_OF_BOOKS = 4;


struct Book 
{
	string title;
	string author;
	int yearPublished = 0;
	int numPages = 0;
};

void PrintBooks(Book books[]) 
{
	for (int i = 0; i < NUM_OF_BOOKS; i++) {
		cout << i+1 << ": " << books[i].title << "\n";
		cout << "Author: " << books[i].author << "\n";
		cout << "Year Published: " << books[i].yearPublished << "\n";
		cout << "Number of Pages: " << books[i].numPages << "\n";
		cout << "\n";
	};
};

void UpdateBookInfo(Book books[]) 
{
	int ID;
	string author;
	int yearPublished;
	int numPages;

	cout << "Enter the ID of the book you would like to update (1-4): ";
	cin >> ID;
	cout << ID << ": " << books[ID-1].title << "\n";

	cout << "Enter the Author (" << books[ID - 1].author << "): ";
	cin >> author;

	cout << "Enter the Year Published: (" << books[ID - 1].yearPublished << "): ";
	cin >> yearPublished;

	cout << "Enter the Number of Pages: (" << books[ID - 1].numPages << "): ";
	cin >> numPages;

	cout << "Save these changes? (Y/N): ";
	char c = _getch();
	cout << "\n";
	if (c == 'Y') {
		cout << "Changes saved.\n";
		cout << "\n";
		books[ID - 1].numPages = numPages;
		books[ID - 1].yearPublished = yearPublished;
		books[ID - 1].author = author;

		cout << ID << ": " << books[ID-1].title << "\n";
		cout << "Author: " << books[ID-1].author << "\n";
		cout << "Year Published: " << books[ID-1].yearPublished << "\n";
		cout << "Number of Pages: " << books[ID-1].numPages << "\n";
		cout << "\n";
	}
	else {
		cout << "Changes not saved.\n";
	}
};


int main() 
{
	Book books[NUM_OF_BOOKS] = {
		{"The Great Gatsby", "F. Scott Fitzgerald", 1925, 180},
		{"To Kill a Mockingbird","Unknown",2021,1},
		{"1984","George Orwell",1949,328},
		{"The Catcher in the Rye","J.D Salinger",1951,277}
	};
	PrintBooks(books);
	UpdateBookInfo(books);
	(void)_getch();
	return 0;
};