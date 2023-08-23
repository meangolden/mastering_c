#include <stdio.h>
#include <time.h>

int fibonacci(int n) {
    // Returns the nth number in the Fibonacci sequence
    if (n == 1 || n == 2)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    puts("Enter a positive integer: ");
    scanf("%d", &n);

    clock_t start_time = clock();  // Record the start time
    int result = fibonacci(n);     // Calculate the Fibonacci number
    clock_t end_time = clock();    // Record the end time

    double elapsed_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;
    printf("The %dth term of the Fibonacci sequence is: %d\n", n, result);
    printf("Execution Time: %.4f seconds\n", elapsed_time);

    if (elapsed_time > 10.0) {
        printf("Execution time exceeded 10 seconds. Terminating.\n");
        return 1;  // Return a non-zero value to indicate an abnormal termination
    }

    return 0;
}
