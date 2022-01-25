# Handling-arrays-with-pointer
Write own function and do not use any functions from string.h
  1. int my_strlen(char *s)                //function receives a strinng as a parameter and returns the length of this string
  2. int str2upper(char *s)                //function converts all small characters in a string to upper characters and return a number of                                                changed characters
  3. int str2lower(char *s)                //function converts all upper characters in a string to lower characters and return a number of                                                changed characters
  4. int str_strip_numbers(char *s)        //fucntion removes all occurrences of number and return new length of string
  5. void my_strcpy(char* d, char*s)       //function will copy the content of string s to string d
  6. int my_strcmp(char* s, char*d)        //function will compare 2 strings together and returns place (n) of first different  character                                                (-n if s is orderd before in alphabet that d (starting 1), 0 is strings are equal, +n if d is                                                ordered before s)
  7. char* my_strdupl(char *s)             //function creates a duplicate of string s and return a pointer to newly created string
