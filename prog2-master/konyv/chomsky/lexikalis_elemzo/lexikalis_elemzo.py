import nltk
from nltk.tokenize import word_tokenize

text = open('text.txt').read()

tokens = word_tokenize(text)

digit_count = len(set(word for word in tokens if word.isdigit()))

print('The number of digits in the text: ')
print(digit_count)