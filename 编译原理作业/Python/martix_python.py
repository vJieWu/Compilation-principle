import random
import time

def main():

    SIZE = 1000
    matrix_init = []
    matrix_result = []
    matrix = [[0] * SIZE for i in range(SIZE)]

    for i in range(SIZE):
        matrix_init.append(random.randint(0, 99))
        matrix_result.append(0)

    for i in range(SIZE):
        for j in range(SIZE):
            matrix[i][j] = (random.randint(0, 99))

    start_time = time.time()

    for i in range(SIZE):
        for j in range(SIZE):
            matrix_result[j] += matrix[i][j] * matrix_init[j]

    end_time = time.time()

    for i in range(SIZE):
        print('matrix_result[%s] = %d' % (i, matrix_result[i]))

    print('Total time: %s ms' % ((end_time-start_time)*1000))


if __name__ == '__main__':
    main()
