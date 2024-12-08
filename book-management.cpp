/*
12. Write a class Book to manage a collection of books in a library. The class  
should have the following properties and functions:  
Properties:  
1. bookID: An integer to store the book's ID.  
2. title: A string to store the book's title.  
3. author: A string to store the book's author.  
4. availableCopies: An integer to store the number of copies available.  
Functions:  
1. Constructor to initialize the book's ID, title, author, and available  
copies.  
2. borrowBook(): A method to borrow a book, decreasing the number of  
available copies.  
3. returnBook(): A method to return a borrowed book, increasing the  
number of available copies.  
4. displayBookInfo(): A method to display the book's ID, title, author,  
and available copies. 
*/
#include<iostream>
using namespace std;
class Book{
    public:
    int bookID;
    string title;
    string author;
    int availableCopies;
    
    //creating constructor
    Book(int id, string Title, string Author, int copies){
        bookID = id;
        title = Title;
        author =Author;
        availableCopies =copies;
    }
    void borrowBook() {
    if (availableCopies > 0) {
        availableCopies--; // Only decrement if there are available copies
    } else {
        cout << "No available copies left to borrow!" << endl;
    }
}

    void returnBook(){
        availableCopies++;
    }
    void displayBookInfo(){
        cout<<endl<<"Book TITLE - "<<title<<endl;
        cout<<"Book ID - "<<bookID<<endl;
        cout<<"The Author of "<<title<<" is "<<author<<endl;
        cout<<"Available copies - "<<availableCopies<<endl;
    }
    
};
int main(){
    int choice;
    Book mybook(101,"The Coming Wave","Mustafa Suleyman",20);
     //creating a menu to display what type of methods user want to perform
     while(true){
    cout<<endl<<"Click :-"<<endl<<"1. To Display Book Information"<<endl<<"2. To Borrow Book"<<endl<<"3. To Return Book"<<endl<<"4. Exit"<<endl<<"Enter your choice : ";
    cin>>choice;
     switch(choice)
     {
        case 1:
            mybook.displayBookInfo();
            break;
        case 2:
            mybook.borrowBook();
            break;
        case 3:
            mybook.returnBook();
            break;
        case 4:
            cout << "Exiting. Thank you for using our Library!" << endl;
            return 0;
        default:
            cout << "Invalid choice! Please try again." << endl;

     } 

     }
return 0;
}
