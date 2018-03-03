#ifndef Matrix_H
#define Matrix_H

#include <iostream>
#include <iomanip>

template <class T>
class Matrix
{
  private:
    T **m;
    int dim;

    T calcValue(int row, int column, const Matrix &b)
    {
        T result = 0; // DANGER
        int i;
        for (i = 0; i < dim; i++)
        {
            T valueA = m[row][i];
            T valueB = b.m[i][column];
            result += valueA * valueB;
        }
        return result;
    }

  public:
    Matrix(int dim)
    {
        this->dim = dim;

        m = new T *[dim]; // Zeilen (dim ist Anzahl d. Zeilen)
        int i;
        for (i = 0; i < dim; i++)
        {
            m[i] = new T[dim]; // Spalten (dim ist Anzahl d. Einträge in Zeilen)

            int j;
            for (j = 0; j < dim; j++)
            {
                m[i][j] = 0; // Initialisierung
            }
        }
    }
    ~Matrix()
    {
        int i;
        for (i = 0; i < dim; i++)
        {
            delete[] m[i]; // Spalten (dim ist Anzahl d. Einträge in Zeilen)
        }
        delete[] m; // Zeilen (dim ist Anzahl d. Zeilen)
    }
    Matrix(const Matrix &obj) : Matrix(obj.dim)
    {
        this->dim = obj.dim;

        int i;
        for (i = 0; i < dim; i++)
        {
            int j;
            for (j = 0; j < dim; j++)
            {
                set(i, j, obj.m[i][j]);
            }
        }
    }
    int getDim() const
    {
        return dim;
    }
    T get(int row, int column) const
    {
        return m[row][column];
    }
    void set(int row, int column, T value)
    {
        m[row][column] = value;
    }
    Matrix operator*(const Matrix &b)
    {
        Matrix<T> r(b.dim);

        int i;
        for (i = 0; i < dim; i++) // Zeilen
        {
            int j;
            for (j = 0; j < dim; j++) // Spalten
            {
                r.set(i, j, calcValue(i, j, b));
            }
        }
        return r;
    }
};

template <typename T>
std::ostream &operator<<(std::ostream &a, const Matrix<T> &b)
{
    int i;
    for (i = 0; i < b.getDim(); i++) // Zeilen
    {
        int j;
        for (j = 0; j < b.getDim(); j++) // Spalten
        {
            a << std::setw(10) << b.get(i, j);
            if (j < (b.getDim() - 1)) // Leerzeichen nach Wert
            {
                a << " ";
            }
        }
        a << std::endl;
    }
    return a;
}

#endif