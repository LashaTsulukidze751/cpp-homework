#include <iostream>
#include <istream>
using namespace std;

class Matrix1D {
protected:
    int row;
    double* data;

public:
    Matrix1D(int row) : row(row) {
        data = new double[row]; 
    }

    void displayMatrix() {
        for (int i = 0; i < row; i++) {
            cout << "[" << i << "]" << data[i] << "\n";
        }
        cout << "\n";
    }

    friend istream& operator>>(istream& is, Matrix1D& data) {
        double a;
        for (int i = 0; i < data.row; i++) {
            cout << "[" << i << "] = ";
            is >> a;
             data.data[i] = a; 
        }
        return is;
    }
};


class Matrix2D : public Matrix1D {
protected:
    int cols;
    int** data;

public:
    Matrix2D(int row, int cols) : Matrix1D(row), cols(cols) {
        data = new int*[row];
        for (int i = 0; i < row; i++) {
            data[i] = new int[cols];
        }
    }
    void display2DMatrix() {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < cols; j++) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }

    friend istream& operator>>(istream& is, Matrix2D& data) {
        double a;
        for (int i = 0; i < data.row; i++) {
            for (int j = 0; j < data.cols; j++) {
                cout << "[" << i << "][" << j << "] = ";
                is >> a;
                data.data[i][j]=a;
            }
        }
        return is;
    }
};

class Matrix3D : public Matrix2D {
	private:
	    int level;
	    int*** data;
	
	public:
	    Matrix3D(int rows, int cols, int level) : Matrix2D(rows, cols), level(level) {
	        data = new int**[rows];
	        for (int i = 0; i < rows; i++) {
	            data[i] = new int*[cols];
	            for (int j = 0; j < cols; j++) {
	                data[i][j] = new int[level];
	            }
	        }
	    }
	
	    void display3DMatrix() {
	        for (int i = 0; i < row; i++) {
	            cout << "Level " << (i + 1) << ":" << endl;
	            for (int j = 0; j < cols; j++) {
	                for (int k = 0; k < level; k++) {
	                    cout << data[i][j][k] << " ";
	                }
	                cout << endl;
	            }
	            cout << endl;
	        }
	    }
	
	    friend istream& operator>>(istream& is, Matrix3D& data) {
	        double a;
	        for (int i = 0; i < data.row; i++) {
	            for (int j = 0; j < data.cols; j++) {
	                for (int k = 0; k < data.level; k++) {
	                    cout << "[" << i << "][" << j << "][" << k << "] = ";
	                    is >> a;
	                    data.data[i][j][k] = a;
	                }
	            }
	        }
	        return is;
	    }
};

int main() {
    Matrix1D matrix1D(2);
	cin>>matrix1D;
    cout << "1D Matrix:" << endl;
    matrix1D.displayMatrix();

    Matrix2D matrix2D(2, 2);
    cin>>matrix2D;
    cout << "2D Matrix:" << endl;
    matrix2D.display2DMatrix();
	
	Matrix3D matrix3D(2, 2, 2);
    cin>>matrix3D;
    cout << "3D Matrix:" << endl;
    matrix3D.display3DMatrix();
	
    return 0;
}






