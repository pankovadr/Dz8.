# Домашнее задание №8
## Условие задачи
Вычислить с использованием цикла for значение для заданного n:
\left(1 - \frac{1}{2}\right)\left(1 - \frac{1}{4}\right)\left(1 - \frac{1}{6}\right) \times \ldots \times \left(1 - \frac{1}{2n}\right)
## 1. Алгоритм и блок-схема
### Алгоритм
1. **Начало**
2. Ввести значение переменной n.
3. Инициализировать переменную res=1.0.
4. Вывести на экран: "Введите значение n:".
5. Считать введенное значение с клавиатуры в переменную n.
6. Проверка условия: Если n<=0, то:
   Вывести сообщение об ошибке
   Завершить программу
8. Начать цикл for с переменной от i до n:
   вычислить множитель: res *= (1.0 - 1.0 / (2.0 * i)).
9. Вывести результат
10. **Конец**
   ### Блок-схема
   ![Screenshot of a comment on a GitHub issue showing an image, added in the Markdown, of an Octocat smiling and raising a tentacle.]()
## 2. Реализация программы 
![Screenshot of a comment on a GitHub issue showing an image, added in the Markdown, of an Octocat smiling and raising a tentacle.](https://github.com/pankovadr/Dz8./blob/master/2026-10-18_17-46-13.png)
## 3.Результаты работы программы
Введите значение n: 6
Результат произведения для n = 6: 0,225586
Введите значение n: -2
Ошибка: n должно быть целым положительным числом.
## 4. Информация о разработчике
Панкова Дарья, бИЦТ-262
