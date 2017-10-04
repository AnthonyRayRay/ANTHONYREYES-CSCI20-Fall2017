#include <iostream>
using namespace std;

class book { // my class
    public : // available for everyone one to see
    void SetTitle ( string bookTitle );
    void SetAuthor ( string bookAuthor );
    void SetCopyright ( int bookCopyright ); // have to int for numbers
    
    string GetTitle(); // my get
    string GetAuthor();
    int GetCopyright();
    void Print(); 
   private : // totally private
   string title_;
   string author_;
   int copyright_;
   
};
void book::Print(){ //naming off details off what will show for output
    cout << GetTitle() << " " << GetAuthor() << " " << GetCopyright() << endl;
}
void book::SetTitle ( string bookTitle ) {
 title_ = bookTitle;
 return;
}
void book::SetAuthor ( string bookAuthor ) {
  author_ = bookAuthor;      
}
void book::SetCopyright( int bookCopyright ) {
 copyright_ = bookCopyright;
 return;
}
string book::GetTitle(){ // applying get
return title_;
}
string book::GetAuthor(){
return author_;    
}
int book::GetCopyright(){
return copyright_;
}
int main() {
   book book1 ; // entering each book to show up on output
   
   book1.SetTitle ("The Places You'll Go");
   book1.SetAuthor (" Dr. Seuss");
   book1.SetCopyright (1990);
   
   book book2 ;
   
   book2.SetTitle ("Green Eggs and Ham ");
   book2.SetAuthor ("Dr.Seuss");
   book2.SetCopyright (1960);
   
   book book3 ;
   
   book3.SetTitle ("Horten Hears A Who ");
   book3.SetAuthor (" Dr.Suess ");
   book3.SetCopyright (1954);
   
   book book4 ;
   
   book4.SetTitle ("The Lorax ");
   book4.SetAuthor (" Dr.Seuss ");
   book4.SetCopyright (1971);
   
   book book5 ;
   
   book5.SetTitle ("How the Grinch Stole Christmas ");
   book5.SetAuthor (" Dr.Seuss");
   book5.SetCopyright (1957);
   
   
  cout << book1.GetTitle() << book1.GetAuthor() << "  " << book1.GetCopyright() << endl; 
  cout << book2.GetTitle() << book2.GetAuthor() << "  " << book2.GetCopyright() <<  endl;
  cout << book3.GetTitle() << book3.GetAuthor() << "  " << book3.GetCopyright() << endl;
  cout << book4.GetTitle() << book4.GetAuthor() << "  " << book4.GetCopyright() << endl;
  cout << book5.GetTitle() << book5.GetAuthor() << "  " << book5.GetCopyright () << endl;
   return 0;}