import random
import time

def main():
    start_time = time.time()
    
    SIZE = 4000
    martix_init = []
    martix_result = []
    
    for i in range(SIZE):
        martix_init.append(random.randint(0, 99))
        martix_result.append(0)

    for i in range(SIZE):
        for j in range(SIZE):
            martix_result[j] += (random.randint(0, 99))*martix_init[j]
        #print('martix_result[%s] = %d' % (i, martix_result[i]))
      
    end_time = time.time()

    print('Total time: %s ms' % ((end_time-start_time)*1000))

if __name__ == '__main__':
    main()