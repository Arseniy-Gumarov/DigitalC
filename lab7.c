#include<stdio.h>
#include<math.h>

enum cars
{
    passenger,
    cargo,
    bus,
    racing
};

struct circle//создаём окружность
{
    int radius;//вводим её радиус
};
union keyboard //создаём множество
{
    int value;
    struct
    {
        unsigned NumLock: 1;
        unsigned CapsLock: 1;
        unsigned ScrollLock: 1;
    };
};

int main()
{
    printf("Task 1\n");
    enum cars s = bus; //задаём элемент, который надо отобразить
    printf("%d\n", s);
    printf("\n");//выводим его номер

    printf("Task 2\n");
    struct circle r; //вычисляем длину окружности
    printf("Radius = ");
    scanf("%d", &r.radius);
    double pi = 3.141592;
    printf("S = %lf\n\n", pi * pow(r.radius, 2));

    printf("Task 3\n");
    union keyboard cr;
    printf("Enter the number in hexadecimal: ");
    scanf("%x", &cr.value);
    printf("NumLock: %s || \ CapsLock: %s || \ ScrollLock: %s\n",
           cr.NumLock ? "ON" : "OFF",
           cr.CapsLock ? "ON" : "OFF",
           cr.ScrollLock ? "ON" : "OFF");
    return 0;
}
