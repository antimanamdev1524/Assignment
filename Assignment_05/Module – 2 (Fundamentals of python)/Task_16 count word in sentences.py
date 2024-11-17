# Program to count the occurrences of each word in a given sentence

from collections import Counter  
s = "Top stdents of Top Technology get Top rank"

# Count occurrences of each word
word_count = Counter(s.split())

# Print the results
print("Occurred words:")
for word, count in word_count.items():
    print(f"'{word}': {count} times")
