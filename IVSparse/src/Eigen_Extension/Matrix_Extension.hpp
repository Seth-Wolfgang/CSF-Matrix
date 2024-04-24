// #include "../../../SparseMatrix"

// If you have another plugin file, you can include it here
#ifdef ADDITIONAL_EIGEN_MATRIXBASE_PLUGIN
#include ADDITIONAL_EIGEN_MATRIXBASE_PLUGIN
#undef ADDITIONAL_EIGEN_MATRIXBASE_PLUGIN
#endif

template <typename T, typename indexT, bool columnMajor>
Derived operator+(IVSparse::VCSC<T, indexT, columnMajor>& mat) {
    Derived result = *this;

    #ifdef IVSPARSE_HAS_OPENMP
    #pragma omp parallel for
    #endif
    for (int i = 0; i < mat.cols(); ++i) {
        for (typename IVSparse::VCSC<T, indexT, columnMajor>::InnerIterator it(mat, i); it; ++it) {
            result(it.row(), it.col()) += it.value();
        }
    }
    return result;
}


template <typename T, bool columnMajor>
Derived operator+(IVSparse::IVCSC<T, columnMajor>& mat) {
    Derived result = *this;

    #ifdef IVSPARSE_HAS_OPENMP
    #pragma omp parallel for
    #endif
    for (int i = 0; i < mat.cols(); ++i) {
        for (typename IVSparse::IVCSC<T, columnMajor>::InnerIterator it(mat, i); it; ++it) {
            result(it.row(), it.col()) += it.value();
        }
    }

    return result; 
}

template <typename T, bool columnMajor>
Derived operator-(IVSparse::IVCSC<T, columnMajor>& mat) {
    Derived result = *this;

    #ifdef IVSPARSE_HAS_OPENMP
    #pragma omp parallel for
    #endif
    for (int i = 0; i < mat.cols(); ++i) {
        for (typename IVSparse::IVCSC<T, columnMajor>::InnerIterator it(mat, i); it; ++it) {
            result(it.row(), it.col()) -= it.value();
        }
    }

    return result; 
}

template <typename T, typename indexT, bool columnMajor>
Derived operator-(IVSparse::VCSC<T, indexT, columnMajor>& mat) {
    Derived result = *this;

    #ifdef IVSPARSE_HAS_OPENMP
    #pragma omp parallel for
    #endif
    for (int i = 0; i < mat.cols(); ++i) {
        for (typename IVSparse::VCSC<T, indexT, columnMajor>::InnerIterator it(mat, i); it; ++it) {
            result(it.row(), it.col()) -= it.value();
        }
    }

    return result; 
}

template <typename T, typename indexT, bool columnMajor>
Derived operator*(IVSparse::VCSC<T, indexT, columnMajor>& mat) {
    Derived result = *this;

    #ifdef IVSPARSE_HAS_OPENMP
    #pragma omp parallel for
    #endif
    for (int i = 0; i < mat.cols(); ++i) {
        for (typename IVSparse::VCSC<T, indexT, columnMajor>::InnerIterator it(mat, i); it; ++it) {
            result(it.row(), it.col()) *= it.value();
        }
    }

    return result; 
}

template <typename T, bool columnMajor>
Derived operator*(IVSparse::IVCSC<T, columnMajor>& mat) {
    Derived result = *this;

    #ifdef IVSPARSE_HAS_OPENMP
    #pragma omp parallel for
    #endif
    for (int i = 0; i < mat.cols(); ++i) {
        for (typename IVSparse::IVCSC<T, columnMajor>::InnerIterator it(mat, i); it; ++it) {
            result(it.row(), it.col()) *= it.value();
        }
    }

    return result; 
}

template <typename T, typename indexT, bool columnMajor>
Derived operator/(IVSparse::VCSC<T, indexT, columnMajor>& mat) {
    Derived result = *this;

    #ifdef IVSPARSE_HAS_OPENMP
    #pragma omp parallel for
    #endif
    for (int i = 0; i < mat.cols(); ++i) {
        for (typename IVSparse::VCSC<T, indexT, columnMajor>::InnerIterator it(mat, i); it; ++it) {
            result(it.row(), it.col()) /= it.value();
        }
    }

    return result; 
}

template <typename T, bool columnMajor>
Derived operator/(IVSparse::IVCSC<T, columnMajor>& mat) {
    Derived result = *this;

    #ifdef IVSPARSE_HAS_OPENMP
    #pragma omp parallel for
    #endif
    for (int i = 0; i < mat.cols(); ++i) {
        for (typename IVSparse::IVCSC<T, columnMajor>::InnerIterator it(mat, i); it; ++it) {
            result(it.row(), it.col()) /= it.value();
        }
    }

    return result; 
}

////////////////////////////////////////////////////////////////////////////////////////////////////


// template <typename T, typename indexT, bool columnMajor>
// Derived operator+(IVSparse::VCSC<T, indexT, columnMajor>& mat) {
//     Derived result = *this;

//     #ifdef IVSPARSE_HAS_OPENMP
//     #pragma omp parallel for
//     #endif
//     for (int i = 0; i < mat.cols(); ++i) {
//         for (typename IVSparse::VCSC<T, indexT, columnMajor>::InnerIterator it(mat, i); it; ++it) {
//             result(it.row(), it.col()) += it.value();
//         }
//     }
//     return result;
// }


// template <typename T, bool columnMajor>
// Derived operator+(IVSparse::IVCSC<T, columnMajor>& mat) {
//     Derived result = *this;

//     #ifdef IVSPARSE_HAS_OPENMP
//     #pragma omp parallel for
//     #endif
//     for (int i = 0; i < mat.cols(); ++i) {
//         for (typename IVSparse::IVCSC<T, columnMajor>::InnerIterator it(mat, i); it; ++it) {
//             result(it.row(), it.col()) += it.value();
//         }
//     }

//     return result; 
// }

// template <typename T, bool columnMajor>
// Derived operator-(IVSparse::IVCSC<T, columnMajor>& mat) {
//     Derived result = *this;

//     #ifdef IVSPARSE_HAS_OPENMP
//     #pragma omp parallel for
//     #endif
//     for (int i = 0; i < mat.cols(); ++i) {
//         for (typename IVSparse::IVCSC<T, columnMajor>::InnerIterator it(mat, i); it; ++it) {
//             result(it.row(), it.col()) -= it.value();
//         }
//     }

//     return result; 
// }

// template <typename T, typename indexT, bool columnMajor>
// Derived operator-(IVSparse::VCSC<T, indexT, columnMajor>& mat) {
//     Derived result = *this;

//     #ifdef IVSPARSE_HAS_OPENMP
//     #pragma omp parallel for
//     #endif
//     for (int i = 0; i < mat.cols(); ++i) {
//         for (typename IVSparse::VCSC<T, indexT, columnMajor>::InnerIterator it(mat, i); it; ++it) {
//             result(it.row(), it.col()) -= it.value();
//         }
//     }

//     return result; 
// }

// template <typename T, typename indexT, bool columnMajor>
// Derived operator*(IVSparse::VCSC<T, indexT, columnMajor>& mat) {
//     Derived result = *this;

//     #ifdef IVSPARSE_HAS_OPENMP
//     #pragma omp parallel for
//     #endif
//     for (int i = 0; i < mat.cols(); ++i) {
//         for (typename IVSparse::VCSC<T, indexT, columnMajor>::InnerIterator it(mat, i); it; ++it) {
//             result(it.row(), it.col()) *= it.value();
//         }
//     }

//     return result; 
// }

// template <typename T, bool columnMajor>
// Derived operator*(IVSparse::IVCSC<T, columnMajor>& mat) {
//     Derived result = *this;

//     #ifdef IVSPARSE_HAS_OPENMP
//     #pragma omp parallel for
//     #endif
//     for (int i = 0; i < mat.cols(); ++i) {
//         for (typename IVSparse::IVCSC<T, columnMajor>::InnerIterator it(mat, i); it; ++it) {
//             result(it.row(), it.col()) *= it.value();
//         }
//     }

//     return result; 
// }

// template <typename T, typename indexT, bool columnMajor>
// Derived operator/(IVSparse::VCSC<T, indexT, columnMajor>& mat) {
//     Derived result = *this;

//     #ifdef IVSPARSE_HAS_OPENMP
//     #pragma omp parallel for
//     #endif
//     for (int i = 0; i < mat.cols(); ++i) {
//         for (typename IVSparse::VCSC<T, indexT, columnMajor>::InnerIterator it(mat, i); it; ++it) {
//             result(it.row(), it.col()) /= it.value();
//         }
//     }

//     return result; 
// }

// template <typename T, bool columnMajor>
// Derived operator/(IVSparse::IVCSC<T, columnMajor>& mat) {
//     Derived result = *this;

//     #ifdef IVSPARSE_HAS_OPENMP
//     #pragma omp parallel for
//     #endif
//     for (int i = 0; i < mat.cols(); ++i) {
//         for (typename IVSparse::IVCSC<T, columnMajor>::InnerIterator it(mat, i); it; ++it) {
//             result(it.row(), it.col()) /= it.value();
//         }
//     }

//     return result; 
// }