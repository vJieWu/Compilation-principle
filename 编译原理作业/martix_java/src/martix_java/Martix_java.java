package martix_java;
import java.util.Random;

public class Martix_java {
    public static void main(String args[]) {

        long start_time = System.currentTimeMillis();

        final int SIZE = 30000;

        int[] vector = new int[SIZE];
        
        Random random = new Random();

        for (int i = 0; i < SIZE; i++) {
        	int temp = random.nextInt(100);
        	vector[i] = 0;
            for (int j = 0; j < SIZE; j++) {
                vector[i] += temp * random.nextInt(100);
            }
            //System.out.println("vector_result[" + i + "]= " + vector[i]);
        }

        long end_time = System.currentTimeMillis();
        System.out.println("Total time: " + (end_time - start_time) + " ms");

    }
}