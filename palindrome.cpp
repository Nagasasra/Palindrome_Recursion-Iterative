#include <iostream>
#include <string>

// Recursion
bool palindrome_recursion(std::string s, int start, int end)
{
    // the base case, if it reaches here then it is a palindrome
    if(start == end)
    {
        return true;
    }
    // if they don't match, then it is not a palindrome
    if (s[start] != s[end]) {
        return false;
    }
    // If there are more than two characters, check if middle substring is also palindrome or not.
    if (start < end + 1) {
        return palindrome_recursion(s, start + 1, end - 1);
    }
}

// Iterative
bool palindrome_iterative(std::string s)
{
    int n = s.size(); // the size of the given string

    // loop from the starting index by comparing it with the last, and increment the iterator
    for(int i = 0; i <= n/2; i++)
    {
        // if they don't match, then the string is not a palindrome
        if(s[i] != s[n-i-1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
   std::string s; // creating new variable
   std::cout << "Input here : "; // print this to let the user know they can input something
   std::cin >> s;

   // check with recursion and iterative
   std::cout << "\nRESULT\nRecursion: " << std::boolalpha << palindrome_recursion(s, 0, s.length()-1) << "\nIterative: " << palindrome_iterative(s) << std::endl;

   return 0;
}