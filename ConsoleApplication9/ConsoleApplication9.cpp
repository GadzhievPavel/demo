﻿// ConsoleApplication9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#pragma warni
struct qwer{
    int i;
    float f;
};

void write(FILE* l, qwer q) {
    fwrite(&q.i, sizeof(int), 1, l);
}

qwer read(FILE* l) {
    qwer q;
    fread(&q.i, sizeof(int), 1, l);
    return q;
}
int main()
{
    FILE* f;
    f = fopen("text.txt", "w");
    qwer q{5,12.5};
    write(f, q);
    qwer q1 = read(f);
    std::cout << q1.i;

    std::cout << "";

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
