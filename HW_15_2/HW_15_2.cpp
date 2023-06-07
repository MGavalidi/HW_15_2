#include <iostream>
#include <string>
#include <Windows.h>//бибилиотека для контороля кодировки
using namespace std;

int main()
{
    //setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);//кодировка записи
    SetConsoleOutputCP(1251);//кодировка вывода

    //1
    string s = "привет Дима";
    int ind;
    cout << "какой элемент удалить ";
    cin >> ind;
    s.erase(ind, 1);
    cout << "\n" + s;

    //2
    string str = "Дфобрфый деньф";
    char del_sim;
    cout << "какой символ удалить ";
    cin >> del_sim;
    for (int i = 0; i < size(str); i++)
    {
        if (str[i] == del_sim) {
            str.erase(i, 1);
        }
    }
    cout << str;

    //3
    string str = "Добый день";
    int ind;
    string simv;
    cout << "какой символ вставить? ";
    cin >> simv;
    cout << "\nПозиция? ";
    cin >> ind;
    str.insert(ind, simv);
    cout << "\n" + str;

    //4
    string stroka;
    char t = '.';
    char v = '!';
    cout << "Написать два предложения, разделяя их точками. " << endl;
    getline(cin, stroka);//ввод строки
    for (int i = 0; i < size(stroka); i++)
    {
        if (stroka[i] == t) {
            stroka[i] = v;
        }
    }
    cout << "\n" + stroka; 

    //5
    string stroka;
    char isk_sim = '.';
    int col = 0;
    cout << "Написать предложения, разделяя их точками. " << endl;
    getline(cin, stroka);//ввод строки
    for (int i = 0; i < size(stroka); i++)
    {
        if (stroka[i] == isk_sim) {
            col++;
        }
    }
    cout << col; 

    //6
    string stroka;
    int col_buk = 0;
    int col_cif = 0;
    int col_sim = 0;
    cout << "Ввод пользователем " << endl;
    getline(cin, stroka);//ввод строки
    for (int i = 0; i < size(stroka); i++)
    {
        if (stroka[i] >= 'А' && stroka[i] <= 'Я' || stroka[i] >= 'а' && stroka[i] <= 'я' || stroka[i] >= 'A' && stroka[i] <= 'Z' || stroka[i] >= 'a' && stroka[i] <= 'z') {
            col_buk++;
        }
        else if (stroka[i] >= '0' && stroka[i] <= '9') {
            col_cif++;
        }
        else {
            col_sim++;
        }
    }
    cout << "Количество букв: " << col_buk << endl;
    cout << "Количество цифр: " << col_cif << endl;
    cout << "Количество символов: " << col_sim << endl;



  
}

