class LibraryBook:
    def __init__(self, title, author, isbn):
        self.__isbn = isbn        
        self._title = title        
        self._author = author     
        self.status = "available" 

    def __mask_isbn(self):
        return f"*****{self.__isbn[-4:]}"

    def get_ISBN(self):
        ##Public method to securely return the masked ISBN.
        return self.__mask_isbn()

    def _display_basic_info(self):
        ##Protected method to display basic book info.
        print(f"Title: {self._title}")
        print(f"Author: {self._author}")

    def borrow_book(self, borrower_name):
        ##Public method to change book status to borrowed.
        if self.status == "available":
            self.status = "borrowed"
            print(f"The book '{self._title}' has been borrowed by {borrower_name}.")
        else:
            print(f"The book '{self._title}' is already borrowed.")

##Subclass for digital books..................
class DigitalLibraryBook(LibraryBook):
    def __init__(self, title, author, isbn, file_format):
        super().__init__(title, author, isbn)
        self.file_format = file_format  

    def display_digital_info(self):
        ##Display basic book info along with digital-specific information.........
        self._display_basic_info()
        print(f"File Format: {self.file_format}")



##Creating an instance of LibraryBook
physical_book = LibraryBook(title="The Great Gatsby", author="F. Scott Fitzgerald", isbn="1234567890123")

##Displaying masked ISBN
print("Masked ISBN:", physical_book.get_ISBN())

##Borrowing the book
physical_book.borrow_book("Alice")

##Creating an instance of DigitalLibraryBook
digital_book = DigitalLibraryBook(title="1984", author="George Orwell", isbn="9876543210987", file_format="PDF")

##Displaying the book's basic and digital-specific information
print("\nDigital Book Information:")
digital_book.display_digital_info()
