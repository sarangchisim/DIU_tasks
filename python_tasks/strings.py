sentence = "Learning Python is fun and rewarding"

##Extracting "Python is fun" using negative slicing
substring = sentence[-27:-14]
print(substring)

##modifying the original string by replacing "rewarding" with "exciting"
sentence_mod = sentence.replace("rewarding", "exciting")
print(sentence_mod)

##Inserting the phrase " Keep practicing!" after "exciting"
index = sentence_mod.find("exciting") + len("exciting") + 1
final_sentence = sentence_mod[:index] + " Keep practicing!" + sentence_mod[index:]
print(final_sentence)

##Capitalizing the first letter of each word
final_sentence = final_sentence.title()
print(final_sentence)