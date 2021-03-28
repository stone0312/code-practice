//----------use_struct_p_as_par---------//
//-------------2021.03.28--------------//

#include<iostream>
#include<cstring>

using namespace std;
void printBook(struct Books *book);

struct Books
{
	char title[50];
	char author[50];
	char subject[100];
    int  book_id;
};

int main()
{
	Books Book1;

	strcpy(Book1.title,"C++");
	strcpy(Book1.author,"sy");
	strcpy(Book1.subject,"code");
	
	Book1.book_id = 88888;

	printBook(&Book1);
	
	return 0;
}


void printBook(struct Books *book)
{
	cout<<"title :"<< book->title <<endl;
	cout<<"auther :"<< book->author <<endl;
	cout<<"subject :"<< book->subject <<endl;
	cout<<"book_id :"<< book->book_id <<endl;

}

