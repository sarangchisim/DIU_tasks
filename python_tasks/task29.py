books = (
    ("To Kill a Mockingbird", "Harper Lee", 1960),
    ("1984", "George Orwell", 1949),
    ("The Great Gatsby", "F. Scott Fitzgerald", 1925)
)

tags = {"classic", "dystopian", "novel", "literature"}

##Accessing the second book's author
print("Second book's author:", books[1][1])

##adding a new record to the books tuple
new_book = ("Brave New World", "Aldous Huxley", 1932)
books = books + (new_book,)
print("\nNew tuple: ", books)

##Unpacking the details of the third book
title, author, year = books[2]
print("\nDetails of third book: ", title, author, year)

##looping through the books tuple and print each book's title
print("\nPrinting book titles: ")
for book in books:
    print(book[0])

##adding a new tag to the tags set
tags.add("sci-fi")
print("\nNew set: ", tags)

##removing the tag "novel" from the tags set
tags.remove("novel")
print("\nNew set: ", tags,"\n")