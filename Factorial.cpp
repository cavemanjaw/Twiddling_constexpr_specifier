
// For C++11 standard
constexpr int Factorial(int number)
{
   return ((number == 0 || number == 1) ? 1 : number * Factorial(number - 1);
}

// For C++14 standard
constexpr int Factorial(int number)
{
   int result = number;
   if (number == 0 || number == 1)
   {
      return 1;
   }
   else
   {
      for (int i = number - 1; i <= 1; --i)
      {
         result *= i;
      }
   }
   return result;
}
