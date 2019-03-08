#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>
#
using namespace std;
#define SIZE 4000

int main()
{
    srand(int(time(0)));

    int* vector_init = new int[SIZE];
	int* vector_result = new int[SIZE];
	
	int** matrix = new int*[SIZE]; 
	
    for (int i = 0; i < SIZE; i++)
    {
        vector_init[i] = rand() % 100;
        vector_result[i] = 0;
        matrix[i] = new int[SIZE];
    }
    //generate matrix randomly
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            matrix[i][j] = rand() % 100;
        }
    }
    
    clock_t start_time = clock();

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            vector_result[i] += matrix[i][j] * vector_init[i];
        }
    }
	
    clock_t end_time = clock();

    

    for (int i = 0; i < SIZE; i++)
    {
        cout << "vector_result[" << i << "] = " << vector_result[i] << endl;
    }

    cout << "Caculating Time:" << (end_time - start_time) << " ms" << endl;
    system("pause");
    return 0;
}
