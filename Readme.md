# Домашнее задание к работе 2

## Условие задачи
Вычислить силу тяжести, действующую на тело заданной массы, находящееся на заданной высоте над поверхностью Земли.

## 1. Алгоритм и блок-схема

### Алгоритм

1. **Начало**
2. Задать гравитационную постоянную G, массу Земли M, радиус Земли R, массу тела m и высоту h;
3. Вычислить расстояние от тела до центра Земли: d = R + h;
4. Вычислить силу тяготения: F = G * M * m / (d * d);
5. Вывести исходные данные, формулу и результат в ньютонах;
6. **Конец**

### Блок-схема

<img width="238" height="864" alt="дз2" src="https://drive.google.com/file/d/1G_Sxa8Rgw1EAAtx3l2HFiMOcVkKCtCAv/view?usp=sharing" />

## 2. Реализация программы

#include <stdio.h>
#include <locale.h>

void calculate_gravity_force(void);

void dz3();
int main()
{
	setlocale(LC_ALL, "ru_RU.UTF-8");
	calculate_gravity_force();
	printf("\nДомашнее задание\n");
	dz3();
	return 0;
}
void dz3()
void calculate_gravity_force(void)
{
    const double GRAVITATIONAL_CONSTANT = 6.67430e-11; /* Н·м²/кг² */
    const double EARTH_MASS = 5.972e24;                /* кг */
    const double EARTH_RADIUS = 6.371e6;               /* м */
    const double body_mass = 10.0;                     /* кг */
    const double height = 1000.0;                      /* м */

    const double distance = EARTH_RADIUS + height;
    const double force = GRAVITATIONAL_CONSTANT * EARTH_MASS * body_mass
                       / (distance * distance);

    printf("Задача: вычислить силу тяжести для падающего тела.\n");
    printf("Масса тела: %.2f кг; высота над поверхностью Земли: %.2f м.\n",
           body_mass, height);
    printf("Формула: F = G * M * m / (R + h)^2.\n");
    printf("Подстановка: F = %.5e * %.5e * %.2f / (%.2f + %.2f)^2.\n",
           GRAVITATIONAL_CONSTANT, EARTH_MASS, body_mass,
           EARTH_RADIUS, height);
    printf("Сила тяжести на этой высоте: %.2f Н.\n", force);
}
## 3. Результаты работы программы

Ответ: Сила тяжести на этой высоте: 98,17 Н.

## 4. Информация о разработчике

Киценко Ирина Владимировна бИД - 262 2пг