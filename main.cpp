#include <iostream>
#include <cmath>
using namespace std;
struct diem {
    int x, y;
};

void nhapdiem(diem &newPoint) { // khởi tạo điểm mới như là a hoặc b
    cout << "Nhap diem x: " << endl;
    cin >> newPoint.x;
    cout << "Nhap diem y: " << endl;
    cin >> newPoint.y;
}

void xuatdiem(diem currentPoint) { // currentPoint ở đây là điểm hiện tại như là điểm a hay b vừa nhập bên trên
    cout << "(" << currentPoint.x << ", " << currentPoint.y << ")" << endl;
}

float khoangcach(diem currentPtA, diem currentPtB) {
    // còn đây là 2 điểm bất kỳ để tính khoảng cách như a và c hay b và c, chứ không phải là điểm a hiện tại vừa được tạo ra
    return sqrt((currentPtA.x - currentPtB.x)*(currentPtA.x - currentPtB.x)
                + (currentPtA.y - currentPtB.y)*(currentPtA.y - currentPtB.y));
}

void kiemtra(diem a, diem b, diem c) {
    float d1 = khoangcach(a, b);
    float d2 = khoangcach(b, c);
    float d3 = khoangcach(c, a);

    if (d1 + d2 == d3 || d2 + d3 == d1 || d1 + d3 == d2) {
        cout << "Diem nay thang hang" << endl;
    } else {
        cout << "Diem nay khong thang hang" << endl;
    }

}

int main() {
    diem a{};
    diem b{};
    diem c{};

    nhapdiem(a);
    cout << "A";
    xuatdiem(a);

    nhapdiem(b);
    cout << "B";
    xuatdiem(b);

    nhapdiem(c);
    cout << "C";
    xuatdiem(b);

    cout << "AB: " << khoangcach(a, b) << endl;

    kiemtra(a, b, c);
}









/*
void bien(int n, int a[4][4]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || i + j == n - 1) {
                cout << a[i][j] << " ";
            } else {
                cout << "* ";
            }
        }
        cout << endl;
    }
}

void xuatmang(int n, int a[4][4]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 4;
    int a[4][4] = {
            {1, 0, 0, 4},
            {0, 6, 7, 0},
            {0, 8, 7, 0},
            {5, 0, 0, 2},
    };

    bien(n, a);
}
*/
















//struct NgayThang {
//    int ngay, thang, nam;
//};
//bool KtNT(NgayThang a) {
//    if (a.nam % 4 == 0 && a.nam % 100 != 0 || a.nam % 400 == 0 && a.nam < 1900) {
//        return false;
//    } else {
//        return true;
//    }
//}
//
//void NhapNgayThang(NgayThang &a) {
//    do {
//        cout << "Nhap ngay thang nam: ";
//        cin >> a.ngay >> a.thang >> a.nam;
//    } while (KtNT(a));
//}
//
//void xuatNgayThang(NgayThang a) {
//    if (KtNT(a)) {
//        cout << "Ngay thang ko chap nhan!" << endl;
//    } else {
//        cout << "mm:" << a.thang << "/dd:" << a.ngay << "/yy:" << a.nam;
//    }
//}
//
//
//int main() {
//    NgayThang a{};
//    NhapNgayThang(a);
//    xuatNgayThang(a);
//}















//struct diem {
//    int x, y;
//};
//
//void nhapdiem(diem &a) {
//    cout << "Nhap X, Y: ";
//    cin >> a.x >> a.y;
//}
//
//void xuatdiem(diem a) {
//    cout << "X: " << a.x << " " << "Y: " << a.y << "\n";
//}
//
// float khoangcach(diem a, diem b) {
//    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
//}
//
//bool kiemtra(diem a, diem b, diem c) {
//    float d1 = khoangcach(a, b);
//    float d2 = khoangcach(b, c);
//    float d3 = khoangcach(a, c);
//
//    if (d1 + d2 == d3 || d2 + d3 == d1 || d1 + d3 == d2) {
//        return true;
//    } else {
//        return false;
//    }
//}
//
//int main() {
//    diem a{};
//    diem b{};
//    diem c{};
//
//    cout << "Nhap diem A:\n";
//    nhapdiem(a);
//    xuatdiem(a);
//
//    cout << "Nhap diem B:\n";
//    nhapdiem(b);
//
//    cout << "Nhap diem C:\n";
//    nhapdiem(c);
//
//    if(kiemtra(a, b, c)){
//        cout << "True";
//    } else {
//        cout << "False";
//    }
//    return 0;
//}

