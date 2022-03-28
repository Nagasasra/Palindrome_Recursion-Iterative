#include <iostream>
#include <string>

// recursion
bool palindrome_recursion(std::string s, int start, int end)
{
    // the base case, if it reaches here then it is a palindrome
    if(end-start == 1 || start == end)
    {
        return true;
    }

    else
    {

        // if the start and end matches, run the same function with index first+1 and end-1 until left with 1 letter or no letter
        if(s[start] == s[end])
        {
            return palindrome_recursion(s, start + 1, end - 1); 
        }

        // if they don't match, then it is not a palindrome
        else
        {
            return false;
        }
    }
}

// iterative
bool palindrome_iterative(std::string s)
{
    int n = s.size(); // the size of the given string
    int flag = 1; // value to determine whether the string is a palindrome or not

    // using for loop with iterator from the starting index by comparing it with the last, and increment the iterator value after that if it is the same
    for(int i = 0; i <= n/2; i++)
    {
        // if they don't match, then the string is not a palindrome
        if(s[i] != s[n-i-1])
        {
            flag = 0;
            break;
        }
        
    }
    // Yes, it is a palindrome!
    if(flag == 1) {
         
        return true;
    }

    // No, it is not a palindrome
    else {
        return false;
    }
}

int main()
{
   std::string s;
   std::cout << "Input here : ";
   std::cin >> s;

   // check with recursion and iterative
   std::cout << "\nRESULT\nRecursion: " << std::boolalpha << palindrome_recursion(s, 0, s.length()-1) << "\nIterative: " << palindrome_iterative(s) << std::endl;

   return 0;
}