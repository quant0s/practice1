#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void task1()
{
  int num;
  printf("Введите число: ");
  scanf("%d", &num);
  printf("Число: %d", num);
}

void task2()
{
  int num, num2;
  printf("Введите 2 числа через пробел: ");
  scanf("%d%d", &num, &num2);
  printf("%d+%d=%d\n", num, num2, num+num2);
  printf("%d-%d=%d\n", num, num2, num-num2);
  printf("%d*%d=%d\n", num, num2, num*num2);
  printf("%d/%d=%d", num, num2, num/num2);
}

void task3()
{
  int num, num2, num3;
  printf("Введите 3 числа через пробел: ");
  scanf("%d%d%d", &num, &num2, &num3);
  printf("Среднее арифметическое: %.2f", (num+num2+num3)/3.);
}

void task4()
{
  char name[25];
  printf("Введите имя: ");
  scanf("%s", name);
  printf("Привет, %s!", name);
}

void task5()
{
  int year;
  printf("Введите год рождения: ");
  scanf("%d", &year);
  printf("Вам %d лет (года)", 2025-year);
}

void task6()
{
  int num;
  printf("Введите число: ");
  scanf("%d", &num);
  if (num % 2 == 0)
  {
    printf("Число %d чётное", num);
  }
  else
  {
    printf("Число %d нечётное", num);
  }
}

void task7()
{
  int num;
  printf("Введите число: ");
  scanf("%d", &num);
  if (num > 0)
  {
    printf("Число %d положительное", num);
  }
  else if (num < 0)
  {
    printf("Число %d отрицательное", num);
  }
  else
  {
    printf("Число равно %d", num);
  }
}

void task8()
{
  int num;
  printf("Введите число: ");
  scanf("%d", &num);
  if (num % 3 == 0)
  {
    printf("Число %d кратно 3", num);
  }
  else
  {
    printf("Число %d не кратно 3", num);
  }
}

void task9()
{
  int num, num2;
  printf("Введите 2 числа через пробел: ");
  scanf("%d%d", &num, &num2);
  if (num > num2)
  {
    printf("Число %d больше числа %d", num, num2);
  }
  else if (num2 > num)
  {
    printf("Число %d больше числа %d", num2, num);
  }
  else
  {
    printf("Числа равны (%d=%d)", num, num2);
  }
}

void task10()
{
  int num, num2;
  printf("Введите 2 числа через пробел: ");
  scanf("%d%d", &num, &num2);
  if (num == num2)
  {
    printf("Числа равны (%d=%d)", num, num2);
  }
  else
  {
    printf("Числа не равны (%d!=%d)", num, num2);
  }
}

void task11()
{
  int num = 1;
  printf("Ряд: ");
  while (num != 11)
  {
    printf("%d ", num);
    num++;
  }
}

void task12()
{
  int num = 0;
  while (num != 11)
  {
    printf("5 * %d = %d\n", num, num*5);
    num++;
  }
}

void task13()
{
  int num = 1, sum = 0;
  while (num != 101)
  {
    sum += num;
    num++;
  }
  printf("Сумма чисел от 1 до %d равна %d", num-1, sum);
}

void task14()
{
  int num = 1, sum = 0;
  while (num != 101)
  {
    if (num % 3 == 0 && num % 5 == 0)
    {
      sum += num;
    }
    num++;
  }
  printf("Сумма чисел от 1 до %d, кратных 3 и 5 равна %d", num-1, sum);
}

void task15()
{
  int num, divider;
  printf("Введите число: ");
  scanf("%d", &num);
  divider = num - 1;
  printf("Все делители числа %d: ", num);
  if (num == 0)
  {
    printf("Нет делителей");
  }
  else
  {
    while (divider != 0)
    {
      if (num % divider == 0)
      {
        printf("%d ", divider);
      }
      divider--;
    }
  }
}

void task16()
{
  int numbers[10];
  printf("Массив чисел: ");
  for (int i = 0; i < 10; i++)
  {
    numbers[i] = i + 1;
    printf("%d ", numbers[i]);
  }
}

void task17()
{
  int numbers[10];
  printf("Массив чисел: ");
  for (int i = 0; i < 10; i++)
  {
    numbers[i] = (rand() % (100 - (-100) + 1)) - 100;
    printf("%d ", numbers[i]);
  }
}

void task18()
{
  int numbers[10];
  printf("Введите данные массива: \n");
  for (int i = 0; i < 10; i++)
  {
    printf("Введите %d элемент массива: ", i + 1);
    scanf("%d", &numbers[i]);
  }
  printf("Элементы массива: ");
  for (int i = 0; i < 10; i++)
  {
    printf("%d ", numbers[i]);
  }
}

void task19()
{
  int numbers[10], sum = 0;
  for (int i = 0; i < 10; i++)
  {
    numbers[i] = (rand() % (100 - (-100) + 1)) - 100;
    sum += numbers[i];
  }
  printf("Сумма чисел массива: %d", sum);
}

void task20()
{
  int numbers[10], numbers2[10], numbers3[10];
  printf("Массив суммы чисел первого и второго массивов: ");
  for (int i = 0; i < 10; i++)
  {
    numbers[i] = (rand() % (100 - (-100) + 1)) - 100;
    numbers2[i] = (rand() % (100 - (-100) + 1)) - 100;
    numbers3[i] = numbers[i] + numbers2[i];
    printf("%d ", numbers3[i]);
  }
}

int Factorial(int num)
{
  int factorial = 1;
  for (int i = 1; i < num + 1; i++)
  {
    factorial *= i;
  }
  return factorial;
}

void task21()
{
  int num;
  printf("Введите число: ");
  scanf("%d", &num);
  printf("Факториал числа %d равен %d", num, Factorial(num));
}

bool Prime(int num)
{
  bool isPrime = true;
  for (int i = 2; i * i <= num; i++)
  {
    if (num % i == 0)
    {
      isPrime = false;
      break;
    }
  }
  return isPrime;
}

void task22()
{
  int num;
  printf("Введите число: ");
  scanf("%d", &num);
  if (Prime(num))
  {
    printf("Число %d простое", num);
  }
  else
  {
    printf("Число %d не простое", num);
  }
}

void Dividers(int num)
{
  int divider = num - 1;
  printf("Все делители числа %d: ", num);
  if (num == 0)
  {
    printf("Нет делителей");
  }
  else
  {
    while (divider != 0)
    {
      if (num % divider == 0)
      {
        printf("%d ", divider);
      }
      divider--;
    }
  }
}

void task23()
{
  int num;
  printf("Введите число: ");
  scanf("%d", &num);
  Dividers(num);
}

void Between(int num, int num2)
{
    if (num2 < num)
    {
      int temp = num;
      num = num2;
      num2 = temp;
        
    }
    printf("Числа между %d и %d: ", num, num2);
    for (int i = num + 1; i < num2; i++)
    {
      printf("%d ", i);
    }
}

void task24()
{
  int num, num2;
  printf("Введите 2 числа через пробел: ");
  scanf("%d%d", &num, &num2);
  Between(num, num2);
}

int SumDividers(int num)
{
  int sum = 0;
  int divider = num - 1;
  while (divider != 0)
  {
    if (num % divider == 0)
    {
      sum += divider;
    }
    divider--;
  }
  return sum;
}

void task25()
{
  int num, num2;
  printf("Введите 2 числа через пробел: ");
  scanf("%d%d", &num, &num2);
  if (SumDividers(num) == num2 && SumDividers(num2) == num)
  {
    printf("Числа %d и %d являются дружественными", num, num2);
  }
  else
  {
    printf("Числа %d и %d не являются дружественными", num, num2);
  }
}

int main() 
{
  int choice;
  printf("Введите число для выбора номера задания (1-25) или 0 для выхода: ");
  scanf("%d", &choice);

  while (choice != 0)
  {
    switch (choice)
    {
      case 1: task1(); break;
      case 2: task2(); break;
      case 3: task3(); break;
      case 4: task4(); break;
      case 5: task5(); break;
      case 6: task6(); break;
      case 7: task7(); break;
      case 8: task8(); break;
      case 9: task9(); break;
      case 10: task10(); break;
      case 11: task11(); break;
      case 12: task12(); break;
      case 13: task13(); break;
      case 14: task14(); break;
      case 15: task15(); break;
      case 16: task16(); break;
      case 17: task17(); break;
      case 18: task18(); break;
      case 19: task19(); break;
      case 20: task20(); break;
      case 21: task21(); break;
      case 22: task22(); break;
      case 23: task23(); break;
      case 24: task24(); break;
      case 25: task25(); break;
      default: break;
    }
    printf("\nВведите число для выбора номера задания (1-25) или 0 для выхода: ");
    scanf("%d", &choice);
  }
  printf("Конец программы");
  return 0;
}