"""Python function that takes a list of words and returns the length of the longest one."""

def find_longest_word_length(words):          #find longest length of word

  if not words:                               #if not found any longest word return 0
     return 0
  return max(len(word) for word in words)      #calculate each length of word in list

words_list = ["C", "C++", "Java", "Python", "PHP", "React"]     #list of words

longest_len_word=  find_longest_word_length(words_list)             #storing result in 'longest_len_word

print(f"the length of the longest one {longest_len_word}")          #print result