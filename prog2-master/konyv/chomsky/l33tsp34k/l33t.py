import nltk

text = open('text.txt').read()
text = text.lower()

text = text.replace('a', '4')
text = text.replace('b', '8')
text = text.replace('c', '(')
text = text.replace('e', '3')
text = text.replace('g', '6')
text = text.replace('i', '1')
text = text.replace('l', '|')
text = text.replace('o', '0')
text = text.replace('s', '5')
text = text.replace('t', '7')
text = text.replace('x', '8')
text = text.replace('z', '2')

print(text)