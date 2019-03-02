#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstring> 
using namespace std;

#define SIZE 4000

int main()
{
    clock_t start_time, end_time;
    start_time = clock();
    srand(int(time(0)));

    int vector_init[SIZE], vector_result[SIZE];
    memset(vector_init, 0, sizeof(int));
    memset(vector_result, 0, sizeof(int));

    for (int i = 0; i < SIZE; i++)
    {
        vector_init[i] = rand() % 100;
    }

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            vector_result[i] += (rand() % 100) * vector_init[i];
        }
        cout <<"vector_result["<<i<<"] = "<< vector_result[i] << endl;
    }

    end_time = clock();
    cout << "Total Time:" << (end_time - start_time) << " ms" << endl;
    return 0;
}
