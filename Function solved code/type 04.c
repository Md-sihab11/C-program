#include<stdio.h>

// Function to calculate area of a rectangle
int calculateArea(int length, int width) {
    return length * width;  // রিটার্ন করে এলাকা
}

// Function to calculate perimeter of a rectangle
int calculatePerimeter(int length, int width) {
    return 2 * (length + width);  // রিটার্ন করে পরিধি
}

int main() {
    int length = 10, width = 5;

    // Using the return value of the functions
    int area = calculateArea(length, width);  // ফাংশন থেকে এলাকা স্টোর
    int perimeter = calculatePerimeter(length, width);  // ফাংশন থেকে পরিধি স্টোর

    printf("Area of the rectangle: %d\n", area);         // এলাকা প্রিন্ট
    printf("Perimeter of the rectangle: %d\n", perimeter); // পরিধি প্রিন্ট

    // Using the functions directly in expressions
    printf("Twice the area: %d\n", 2 * calculateArea(length, width));
    printf("Half the perimeter: %d\n", calculatePerimeter(length, width) / 2);

    return 0;
}
