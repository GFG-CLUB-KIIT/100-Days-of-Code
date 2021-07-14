#include <iostream>
#include <vector>
#include <algorithm>

unsigned int count_between_two_sets(std::vector<unsigned short>& factors, std::vector<unsigned short>& multiples)
{
    std::sort(factors.begin(), factors.end());
    std::sort(multiples.begin(), multiples.end());

    unsigned int count = 0;
    unsigned short times_multiplied = 2;
    unsigned short num = factors.back();

    while ( num <= multiples.front())
    {
    	bool is_multiple = true;
        bool is_factor = true;
        
        for (unsigned int i = 0; i < factors.size(); ++i)
        {
            if (num % factors[i] != 0)
            {
                is_multiple = false;
                break;
            }
        }

        for (unsigned int j = 0; j < multiples.size(); ++j)
        {
            if (is_multiple && multiples[j] % num != 0)
            {
                is_factor = false;
                break;
            }
        }

        if (is_multiple && is_factor)
        {
            count++;
        }
        num = factors.back() * times_multiplied;
        times_multiplied++;
    }
    return count;
}

int main()
{
    unsigned short num_factors, num_multiples;
    std::cin >> num_factors >> num_multiples;
    std::vector<unsigned short> factors(num_factors);
    std::vector<unsigned short> multiples(num_multiples);

    for (unsigned short i = 0; i < num_factors; ++i)
    {
        std::cin >> factors[i];
    }
    for (unsigned short i = 0; i < num_multiples; ++i)
    {
        std::cin >> multiples[i];
    }
  
    std::cout << count_between_two_sets(factors, multiples) << "\n";
}