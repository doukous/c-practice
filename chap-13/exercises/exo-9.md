# Final value of s1

s1 = computer
s2 = science

s1 < s2 because c < s in ascii values
after strcat, s1 = "computerscience"

the char at index strlen(s1) - 6 (which correspond to the first 'c' char of science) is replaced by a null character so the final string will be "computers\0ience"

but, as for string functions the null character indicates the end of a string, for these functions, s1 = "computers"
