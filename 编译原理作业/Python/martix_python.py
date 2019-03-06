import random
import time


def main():

    SIZE = 400
    martix_init = []
    martix_result = []

    for i in range(SIZE):
        martix_init.append(random.randint(0, 99))
        martix_result.append(0)

    start_time = time.time()

    for i in range(SIZE):
        for j in range(SIZE):
            martix_result[j] += (random.randint(0, 99))*martix_init[j]

    end_time = time.time()

    for i in range(SIZE):
        print('martix_result[%s] = %d' % (i, martix_result[i]))

    print('Total time: %s ms' % ((end_time-start_time)*1000))


if __name__ == '__main__':
    main()