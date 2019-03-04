#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstring> 
using namespace std;
#define SIZE 30000 

int main()
{
    clock_t start_time = clock();
    srand(int(time(0)));

    int vector[SIZE];
    
    for (int i = 0; i < SIZE; i++)
    {
    	int temp = rand() % 100;
    	vector[i] = 0;
        for (int j = 0; j < SIZE; j++)
        {
            vector[i] += (rand() % 100) * temp;
        }
        //cout <<"vector_result["<<i<<"] = "<< vector[i] << endl;
    }

    clock_t end_time = clock();
    cout << "Total Time:" << (end_time - start_time) << " ms" << endl;
    return 0;
}
