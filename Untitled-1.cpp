#include <iostream>

int main() {
    // Variables to store dimensions of the array
    int rows, cols;

    // Prompt user for dimensions of the array
    std::cout << "Enter the number of rows (max 3): ";
    std::cin >> rows;
    if (rows > 3) {
        std::cout << "Maximum number of rows exceeded. Setting rows to 3." << std::endl;
        rows = 3;
    }

    std::cout << "Enter the number of columns (max 3): ";
    std::cin >> cols;
    if (cols > 3) {
        std::cout << "Maximum number of columns exceeded. Setting columns to 3." << std::endl;
        cols = 3;
    }

    // Dynamically allocate a 2D array of doubles
    double **array = new double *[rows];
    for (int i = 0; i < rows; ++i) {
        array[i] = new double[cols];
    }

    // Assign values to each element of the array
    std::cout << "Enter values for the array:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << "Enter value for element [" << i << "][" << j << "]: ";
            std::cin >> array[i][j];
        }
    }

    // Output the values of each element of the array
    std::cout << "Values of the array:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Free the dynamically allocated memory
    for (int i = 0; i < rows; ++i) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}
