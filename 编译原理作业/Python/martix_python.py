import random
import time

def main():
    start_time = time.time()
    
    SIZE = 4000
    vector = []
    
    for i in range(SIZE):
        temp = random.randint(0, 99)
        vector.append(0)
        for j in range(SIZE):
            vector[i] += (random.randint(0, 99))*temp
        #print('vector[%s] = %d' % (i, vector[i]))
      
    end_time = time.time()

    print('Total time: %s ms' % ((end_time-start_time)*1000))

if __name__ == '__main__':
    main()