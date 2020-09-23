#include <iostream>
#include <vector>
#include  <chrono>
auto main() -> int
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
    std::chrono::duration<float> duration (end - start);
	std::cout<<"\n-time lapse in s: "<<duration.count() * 1000<<" "<<std::endl;
}