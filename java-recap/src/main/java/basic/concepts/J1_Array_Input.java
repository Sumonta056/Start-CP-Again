package basic.concepts;

import java.util.Scanner;

public class J1_Array_Input {

    public static void main(String[] args) {
        
        int[] numbers = {10, 20, 30, 40, 50};

        // Printing the array elements
        for (int i = 0; i < numbers.length; i++) {
            System.out.println("Element at index " + i + ": " + numbers[i]);
        }

        int[] moreNumbers = new int[5];

        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter 5 integers:");

        for(int i = 0; i < moreNumbers.length; i++) {
            moreNumbers[i] = scanner.nextInt();
        }

        for(int num : moreNumbers){
            System.out.println("You entered: " + num);
        }
    }}
