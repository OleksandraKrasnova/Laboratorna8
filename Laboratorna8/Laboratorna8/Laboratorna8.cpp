#include <iostream>
#include <Windows.h>
#include <locale>
#include <cmath>
#include <cstdlib>

/*
Скласти програму для розв’язання наведеного нижче завдання двома способами, використовуючи:
b) команду if;
Придумати і задати дані так, щоб вибір був здійснений з семи варіантів.
*/
void first()
{
    int a;
    std::cout << "1.б) задача\n";
    std::cout << "Введіть значення від 1 до 7\n";
    std::cin >> a;
    if (a >= 1 && a <= 7)
    {
        if (a == 1)
        {
            std::cout << "Січень/January\n";
        }
        else if (a == 2)
        {
            std::cout << "Лютий/February\n";
        }
        else if(a == 3)
        {
            std::cout << "Березень/March\n";
        }
        else if(a == 4)
        {
            std::cout << "Квітень/April\n";
        }
        else if(a == 5)
        {
            std::cout << "Травень/May\n";
        }
        else if(a == 6)
        {
            std::cout << "Червень/June\n";
        }
        else if(a == 7)
        {
            std::cout << "Липень/July\n";
        }
        else
        {
            std::cout << "Помилка!\n";
        }
        
    }
    else
    {
        std::cout << "Помилка!\n";
    }

}

/*
Скласти програму для розв’язання наведеного нижче завдання двома способами, використовуючи:
a) команду switch; 
Придумати і задати дані так, щоб вибір був здійснений з семи варіантів.
*/

void second()
{
    int a;
    std::cout << "1.а) задача\n";
    std::cout << "Введіть значення від 1 до 7\n";
    std::cin >> a;
    switch (a)
    {
        case 1:
            std::cout << "Січень/January\n";
        break;

        case 2:
            std::cout << "Лютий/February\n";
        break;

        case 3:
            std::cout << "Березень/March\n";
        break;

        case 4:
            std::cout << "Квітень/April\n";
        break;

        case 5:
            std::cout << "Травень/May\n";
        break;

        case 6:
            std::cout << "Червень/June\n";
        break;

        case 7:
            std::cout << "Липень/July\n";
        break;

        default:
            std::cout << "Помилка!\n";
        break;
    }
}

/*
Створити додаток з допомогою якого можна ввести координати точки (x, y) і визначити,
чи попадає введена точка в заштриховану область на малюнку, що поданий.
Влучення на границю області вважати влученням в область.
*/
void third()
{
    std::cout << "2 задача\n";
    double x, y, r;
    std::cout << "X, Y, R\n";
    std::cin >> x >> y >> r;
    if (x >= 0 && y >= 0)
    {
        if (x<= r && y <= r)
        {
            std::cout << "Належить області\n";
        }
        else
        {
            std::cout << "Не належить області\n";
        }
    }
    if (x <= 0 && y <= 0)
    {
        if (x <= r && y <= r)
        {
            std::cout << "Належить області\n";
        }
        else
        {
            std::cout << "Не належить області\n";
        }
    }
    if (x <= 0 && y >= 0)
    {
        if (x <= -5 && y >= 0)
        {
            std::cout << "Належить області\n";
        }
        else
        {
            std::cout << "Не належить області\n";
        }
    }
}

/*
Компанія бабусь поїхала на мотоциклах на курси комп’ютерної грамотності.
Попереду на мотоциклі без глушника їхала одна бабуся, за нею – дві, потім три і т.д.
Скільки бабусь їхало на заняття, якщо приголомшливі пішоходи всього нарахували 𝑁 рядків.
Чи змогли бабуся зайняти всі місця у класі, кщо там стояло 𝑘 рядків по 𝑙 комп’ютерів у кожному.
Скільки вільних місць залишилося?
*/
void four()
{
    std::cout << "3.1 задача\n";
    int N, k, l;
    std::cout << "Введіть кількість рядків N: ";
    std::cin >> N;
    std::cout << "Введіть кількість рядків у класі k: ";
    std::cin >> k;
    std::cout << "Введіть кількість комп'ютерів у кожному рядку l: ";
    std::cin >> l;

    int total_grannies = 0; // Змінна для збереження кількості бабусь
    int total_seats = k * l; // Загальна кількість місць у класі
    int remaining_seats = total_seats; // Змінна для збереження кількості вільних місць

    while (N >= total_grannies + 1)
    {
        total_grannies += (total_grannies + 1);
        remaining_seats -= total_grannies * l;
    }

    std::cout << "Кількість бабусь, які їхали на заняття: " << total_grannies << std::endl;
    std::cout << "Вільні місця у класі: " << remaining_seats << std::endl;
}

/*
Дано натуральне число 𝑘. Визначити суму цифр цього числа.
*/
void five()
{
    std::cout << "3.2 задача\n";
    int k;
    std::cout << "Введіть натуральне число k: ";
    std::cin >> k;

    int sum = 0;
    int digit;
    // Особливий випадок для однозначного числа
    if (k < 10)
    {
        sum = k;
    }
    else
    {
        while (k > 0)
        {
            digit = k % 10;  // Отримуємо останню цифру числа
            sum += digit;   // Додаємо цифру до суми
            k /= 10;        // Відкидаємо останню цифру числа
        }
    }

     std::cout << "Сума цифр числа: " << sum << std::endl;
}

/*
З метою боротьби з тіньовою економікою банк вирішив впровадити об'єднання N рахунків фірми в один.
За одну операцію об'єднуються 2 рахунки і банк автоматично перераховує на свій рахунок Р%
від суми об'єднання за виконання операції та закриття одного з рахунків.
Яка найбільша сума може залишитися на рахунку фірми?
На кожному з рахунків до впровадження політики об'єднання було не більше ніж G грн.
Вхідні дані. У першому рядку 2 числа: кількість рахунків N і відсоток відрахувань P.
У другому рядку N чисел: сума на кожному з рахунків фірми.
*/
void sixth()
{
    std::cout << "3.3 задача\n";
    int N, P;
    std::cin >> N >> P;

    int maxSum = 0;
    int currentSum;

    for (int i = 0; i < N; i++)
    {
        std::cin >> currentSum;

        if (currentSum > maxSum)
        {
            maxSum = currentSum;
        }
    }

    int totalDeductions = 0;

    while (N > 1)
    {
        int combinedSum = maxSum + (maxSum * P) / 100;
        totalDeductions += (maxSum * P) / 100;

        if (combinedSum > maxSum)
        {
            maxSum = combinedSum;
        }

        N--;
    }

    int finalSum = maxSum - totalDeductions;
    std::cout << finalSum << std::endl;
}

/* Програму організувати таким чином,
щоб користувач міг задавати номер задачі,
яку хоче запустити на виконання.
*/
void choose() 
{
    int num;
    std::cout << "Завдання третє, оберіть цифру від 1 до 3 для вибору підзадачі: ";
    std::cin >> num;

    if (num == 1)
    {
        four();
    }
    else if (num == 2)
    {
        five();
    }
    else if (num == 3)
    {
        sixth();
    }
    else
    {
        std::cout << "Помилка!";
    }
}

/*
Обчислити значення змінної z
Z=(a+b)^2
a = 7log(3,8+|x|)/(x2+2)
b = 4sin(2x2+cos(x))
*/
void seventh()
{
    std::cout << "4 задача\n";
    double z;
    double a = 0;
    double b = 0;
    double i = 4;
    double k = i;

    for (int j = 4; j <= i + 5; j++)
    {
        a = 7 * log(3.8 + abs(k)) / (pow(k, 2) + 2);
    }

    for (int j = 4; j <= i + 8; j++)
    {
        b = 4 * sin(2 * pow(k, 2) + cos(k));
    }

    z = pow(a + b, 2);
    std::cout << z;

}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, ".1251");
    first();
    second();
    third();
    choose();
    seventh();
}
