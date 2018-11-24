#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;

struct Books
{
	char author[50];
	char title[50];
	int book_id;
};


int main()
{
	
	struct Books book1;

	strcpy(book1.author, "Malware Developer");
	strcpy(book1.title, "Malware Analysis");
	book1.book_id = 1;

	cout << "Yazar : " << book1.author << endl;
	cout << "Kitap Adý : " << book1.title << endl;
	cout << "Kitab id : " << book1.book_id << endl;

	system("pause");




}