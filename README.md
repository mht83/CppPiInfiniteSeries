# CppPiInfiniteSeries

This repository contains a C++ program that calculates an approximation of Pi using the infinite series method. The series used is the Gregory-Leibniz series, which is a simple yet effective way to approximate Pi.

## Getting Started

To run this program, you'll need a C++ compiler that supports C++11 or later. The code uses standard libraries only.

### Prerequisites

Ensure you have a C++ compiler installed. GCC, Clang, or MSVC are recommended.

### Installing

Clone the repository to your local machine using the following command:

git clone https://github.com/mht83/CppPiInfiniteSeries.git

Navigate to the cloned directory, compile the program using your C++ compiler, for example:

g++ -o PiCalculator main.cpp

### Running the Program

After compiling, run the program:

./PiCalculator

The program will output the value of Pi after performing the calculation with the specified number of iterations.

## Understanding the Code

The program calculates Pi using the Gregory-Leibniz series:

$$\pi = 4 \times \sum_{i=1}^{n} \frac{(-1)^{i+1}}{(2i-1)}$$

where `n` is the number of terms in the series. In this implementation, `n` is set to 100,000,000.

## Contributing

Contributions to improve the accuracy or performance of the Pi calculation are welcome. Please feel free to fork the repository and submit a pull request.

## Authors

* **mht83** - *Initial work*

## License

This project is open source and available under the MIT License.

## Acknowledgments

* This code was inspired by the mathematical work on infinite series for Pi approximation.
