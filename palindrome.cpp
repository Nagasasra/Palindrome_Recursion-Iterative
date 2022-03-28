#include <iostream>
#include <string>

// Recursion
bool palindrome_recursion(std::string s, int start, int end)
{
    // The base case, if it reaches here then it is a palindrome
    if(start == end || s.length() == 0)
    {
        return true;
    }
    // If they don't match, then it is not a palindrome
    if (s[start] != s[end]) {
        return false;
    }
    // If there are more than two characters, check if middle substring is also palindrome or not
    if (start < end+1) {
        return palindrome_recursion(s, start+1, end-1);
    }
}

// Iterative
bool palindrome_iterative(std::string s)
{
    // Loop and increment the iterator
    for(int i = 0; i <= s.length()/2; i++)
    {
        // If they don't match, then the string is not a palindrome
        if(s[i] != s[s.length()-i-1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
   std::string s; // Creating new variable for the string input
   std::cout << "Input here : "; // Print this to let the user know they can input something
   std::cin >> s;

   // Check with recursion and iterative
   std::cout << "\nRESULT\nRecursion: " << std::boolalpha << palindrome_recursion(s, 0, s.length()-1) << "\nIterative: " << palindrome_iterative(s) << std::endl;

   return 0;
}