package martix_java;

import java.util.Random;

public class Martix_java {
    public static void main(String args[]) {

        final int SIZE = 4000;
        int[] vector_init = new int[SIZE];
        int[] vector_result = new int[SIZE];
        int[][] matrix = new int[SIZE][SIZE];

        Random random = new Random();

        for (int i = 0; i < SIZE; i++) {
            vector_init[i] = random.nextInt(100);
            vector_result[i] = 0;
        }
        
        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
                matrix[i][j] += random.nextInt(100);
            }      
        }

        long start_time = System.currentTimeMillis();

        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
                vector_result[i] += vector_init[i] * random.nextInt(100);
            }      
        }

        long end_time = System.currentTimeMillis();

        for (int i = 0; i<SIZE; i++){
            System.out.println("vector_result[" + i + "]= " + vector_result[i]);
        }

        System.out.println("Caculating time: " + (end_time - start_time) + " ms");
    }
}