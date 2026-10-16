#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
void calculate_gravity_force(void);
int task1(void);
int task2(void);
int task3(void);
int dz3(void);
int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");

    task1();
    task2();
    task3();
    dz3();
    return 0;
}

int task1(void)
{
    int num1;
    int num2;

    puts("Введите первое целое число:");
    scanf("%d", &num1);
    printf("Введено число A = %d\n\n", num1);

    puts("Введите второе целое число:");
    scanf("%d", &num2);
    printf("Введено число B = %d\n\n", num2);

    if (num1 == 0) {
        puts("На ноль делить нельзя.");
        return 0;
    }

    printf("--- Результаты вычислений (B над A) ---\n");
    printf("Сумма: %d + %d = %d\n", num2, num1, num2 + num1);
    printf("Разность: %d - %d = %d\n", num2, num1, num2 - num1);
    printf("Произведение: %d * %d = %d\n", num2, num1, num2 * num1);
    printf("Частное (целое): %d / %d = %d\n", num2, num1, num2 / num1);
    printf("Остаток от деления: %d %% %d = %d\n",
        num2, num1, num2 % num1);

    return 0;
}

#define D 2.54

int task2(void)
{
    int dym;
    float result;

    puts("Введите количество дюймов:");
    scanf("%d", &dym);

    result = D * dym;
    printf("%d дюймов — это %.1f см\n\n", dym, result);

    printf("--- Расчет для других единиц измерения ---\n");

    float result_isp = 2.32166 * dym;
    printf("%d испанских дюймов (pulgada) — это %.2f см\n",
        dym, result_isp);

    float result_rus = 2.7076 * dym;
    printf("%d старорусских дюймов — это %.2f см\n",
        dym, result_rus);

    return 0;
}

int task3(void)
{
    double a, b;

    printf("Введите число a: ");
    scanf("%lf", &a);

    printf("Введите число b: ");
    scanf("%lf", &b);

    printf("\n");
    printf("|%6s|%6s|%6s|\n", "a*b", "a+b", "a-b");
    printf("----------------------\n");
    printf("|%6.0lf|%6.0lf|%6.0lf|\n", a, b, a - b);
    printf("----------------------\n");
    printf("|%6.0lf|%6.0lf|%6.0lf|\n",
        a * b, a + b, a - b);

    return 0;
}

int dz3(void)
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    calculate_gravity_force();
    return 0;
}

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