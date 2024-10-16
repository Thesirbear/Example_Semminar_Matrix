#include "matrix.h"
#include <stdexcept>

int GLOBAL = 42;

// залезаем в scope Matrix через :: 
Matrix::Matrix(size_t row_count, size_t column_count) : Matrix() {
    if (column_count == 0 && row_count == 0) {
        return;
    }
    if (column_count == 0 || row_count == 0) {
        throw std::invalid_argument("Should be both zero or nonzero.");
    }
    // TODO: Возможно алгоритм подсчёта, нужно вытащить в отдельную функцию
    this->row_count_ = row_count;
    column_count_ = column_count;
    storage_ = new double[row_count_ * column_count_];
}

Matrix::~Matrix() {
    delete[] storage_;
}



double& Matrix::at(size_t i, size_t j) {
    if (i >= row_count_ || j >= column_count_) {
        // Так как этот класс требует за собой подключение здровенной библеотеки, то появление этого метода в интерфейсе
        // в (заголовке) не хорошо, нужно переместить в реализацию!
        throw std::out_of_range("Invalid matrix index.");
    }
    return Getelem(i, j);
}