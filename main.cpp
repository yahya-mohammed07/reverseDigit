#include <iostream>
#include <vector>
#include  <chrono>
int main()
{
    auto start = std::chrono::high_resolution_clock::now();
    unsigned long long  digits = 958398779;
    std::vector<unsigned long long> result;
    while (digits != 0)
    {
        result.push_back(digits % 10);
        digits /= 10;
    }
    for (int i : result)
    {
        std::cout<<" :"<<i<<": ";      
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration (end - start);
	std::cout<<"\n-time lapse in s: "<<duration.count()<<" "<<std::endl;
}