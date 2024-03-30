// If you have another plugin file, you can include it here
#ifdef ADDITIONAL_EIGEN_SPARSEMATRIXBASE_PLUGIN
#include ADDITIONAL_EIGEN_SPARSEMATRIXBASE_PLUGIN
#endif

template <typename T, bool columnMajor>
SparseMatrix<T> operator+(IVSparse::IVCSC<T, columnMajor>& mat) {
    SparseMatrix<T> result = *this;

    #ifdef IVSPARSE_HAS_OPENMP
    #pragma omp parallel for
    #endif
    for (int i = 0; i < mat.cols(); ++i) {
        for (typename IVSparse::IVCSC<T, columnMajor>::InnerIterator it(mat, i); it; ++it) {
            result.coeffRef(it.row(), it.col()) += it.value();
        }
    }

    return result; 
}

template <typename T, typename indexT, bool columnMajor>
SparseMatrix<T> operator+(IVSparse::VCSC<T, indexT, columnMajor>& mat) {
    SparseMatrix<T> result = *this;

    #ifdef IVSPARSE_HAS_OPENMP
    #pragma omp parallel for
    #endif
    for (int i = 0; i < mat.cols(); ++i) {
        for (typename IVSparse::VCSC<T, indexT, columnMajor>::InnerIterator it(mat, i); it; ++it) {
            result.coeffRef(it.row(), it.col()) += it.value();
        }
    }

    return result; 
}

template <typename T, bool columnMajor>
SparseMatrix<T> operator-(IVSparse::IVCSC<T, columnMajor>& mat) {
    SparseMatrix<T> result = *this;

    #ifdef IVSPARSE_HAS_OPENMP
    #pragma omp parallel for
    #endif
    for (int i = 0; i < mat.cols(); ++i) {
        for (typename IVSparse::IVCSC<T, columnMajor>::InnerIterator it(mat, i); it; ++it) {
            result.coeffRef(it.row(), it.col()) -= it.value();
        }
    }

    return result; 
}

template <typename T, typename indexT, bool columnMajor>
SparseMatrix<T> operator-(IVSparse::VCSC<T, indexT, columnMajor>& mat) {
    SparseMatrix<T> result = *this;

    #ifdef IVSPARSE_HAS_OPENMP
    #pragma omp parallel for
    #endif
    for (int i = 0; i < mat.cols(); ++i) {
        for (typename IVSparse::VCSC<T, indexT, columnMajor>::InnerIterator it(mat, i); it; ++it) {
            result.coeffRef(it.row(), it.col()) -= it.value();
        }
    }

    return result; 
}

template <typename T, typename indexT, bool columnMajor>
SparseMatrix<T> operator*(IVSparse::VCSC<T, indexT, columnMajor>& mat) {
    SparseMatrix<T> result = *this;

    #ifdef IVSPARSE_HAS_OPENMP
    #pragma omp parallel for
    #endif
    for (int i = 0; i < mat.cols(); ++i) {
        for (typename IVSparse::VCSC<T, indexT, columnMajor>::InnerIterator it(mat, i); it; ++it) {
            result.coeffRef(it.row(), it.col()) *= it.value();
        }
    }

    return result; 
}

template <typename T, bool columnMajor>
SparseMatrix<T> operator*(IVSparse::IVCSC<T, columnMajor>& mat) {
    SparseMatrix<T> result = *this;

    #ifdef IVSPARSE_HAS_OPENMP
    #pragma omp parallel for
    #endif
    for (int i = 0; i < mat.cols(); ++i) {
        for (typename IVSparse::IVCSC<T, columnMajor>::InnerIterator it(mat, i); it; ++it) {
            result.coeffRef(it.row(), it.col()) *= it.value();
        }
    }

    return result; 
}

template <typename T, typename indexT, bool columnMajor>
SparseMatrix<T> operator/(IVSparse::VCSC<T, indexT, columnMajor>& mat) {
    SparseMatrix<T> result = *this;

    #ifdef IVSPARSE_HAS_OPENMP
    #pragma omp parallel for
    #endif
    for (int i = 0; i < mat.cols(); ++i) {
        for (typename IVSparse::VCSC<T, indexT, columnMajor>::InnerIterator it(mat, i); it; ++it) {
            result.coeffRef(it.row(), it.col()) /= it.value();
        }
    }

    return result; 
}

template <typename T, bool columnMajor>
SparseMatrix<T> operator/(IVSparse::IVCSC<T, columnMajor>& mat) {
    SparseMatrix<T> result = *this;

    #ifdef IVSPARSE_HAS_OPENMP
    #pragma omp parallel for
    #endif
    for (int i = 0; i < mat.cols(); ++i) {
        for (typename IVSparse::IVCSC<T, columnMajor>::InnerIterator it(mat, i); it; ++it) {
            result.coeffRef(it.row(), it.col()) /= it.value();
        }
    }

    return result; 
}
