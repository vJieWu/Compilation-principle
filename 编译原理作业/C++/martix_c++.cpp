#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>
using namespace std;
#define SIZE 10000

int main()
{
    srand(int(time(0)));

    int vector_init[SIZE], vector_result[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        vector_init[i] = rand() % 100;
        vector_result[i] = 0;
    }

    clock_t start_time = clock();

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            vector_result[i] += (rand() % 100) * vector_init[i];
        }
    }

    clock_t end_time = clock();

    for (int i = 0; i < SIZE; i++)
    {
        cout << "vector_result[" << i << "] = " << vector_result[i] << endl;
    }

    cout << "Total Time:" << (end_time - start_time) << " ms" << endl;
    return 0;
}