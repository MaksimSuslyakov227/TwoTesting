using namespace std;

double add(double x, double y);

int main() {
    int x, y, sum, pr, razn, chastn; //объявление
    setlocale(LC_ALL, "Russian"); //руссификация командной строки
    cout << "Введите два целых числа через пробел "; //приглашение
    cin >> x >> y; //прочитать два целых числа
    sum = x + y;
    pr = x * y;
    razn = x - y;
    chastn = x / y;
    cout << "Сумма чисел\n" << sum << "Произведение чисел\n" << pr;
    cout << "Разность чисел\n" << razn << "Частное чисел\ n" << chastn << endl;
    getchar();
    return 0; //показывает, что программа успешно завершена
}
