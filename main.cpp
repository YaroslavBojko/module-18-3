#include <iostream>

int res = 0;
int number_of_ways (int n, int k = 3, int start = 0)
{
    if (start == n) {
        res++;
    }

    for (int i = 1; i <= k; ++i) {
        if (start < n) {
            start += i;
            number_of_ways(n, k, start);
            start -=i;
        }
    }
    return res;

}
int main() {
    std::cout << number_of_ways(3, 2);

}
