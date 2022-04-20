# C++ - modules

CPP modules серия задач для изучения различных аспектов языка C++ и ООП.

## Ссылки на другие модули

0. C++ - module 00
1. [C++ - module 01](https://github.com/vrivka/cpp_01)
2. [C++ - module 02](https://github.com/vrivka/cpp_02)
3. [C++ - module 03](https://github.com/vrivka/cpp_03)
4. [C++ - module 04](https://github.com/vrivka/cpp_04)
5. [C++ - module 05](https://github.com/vrivka/cpp_05)
6. [C++ - module 06](https://github.com/vrivka/cpp_06)
7. [C++ - module 07](https://github.com/vrivka/cpp_07)
8. [C++ - module 08](https://github.com/vrivka/cpp_08)

# C++ - Module 00

## Описание модуля
Этот первый модуль C++ предназначен для того, чтобы помочь понять особенности языка по сравнению с C. Изучить пространства имен, классы, функции-члены, потоки stdio, списки инициализации, static, const и некоторые другие базовые вещи.
## Задачи
### Exercise 00: Megaphone
Написать программу принимающую в качестве аргумента строку и вывести эту строку в верхнем регистре.

### Exercise 01: My Awesome PhoneBook
Написать программу "Телефонная книга".

Нужно реализовать два класса:
- `PhoneBook`
	- Она имеет массив контактов.
	- Она может хранить до 8 контактов. Если пользователь попытается добавить 9-й контакт, самый старый контакт заменятется на новый.
- `Contact`
	- Обозначает контакт из телефонной книги.

При запуске программы `PhoneBook` пуста и пользователю предлагается ввести одну из трех команд. Программа принимает только `ADD`, `SEARCH` и `EXIT`.
- `ADD`: доавяет новый контакт
	- Если пользователь вводит эту команду, ему предлагается ввести информацию о новом контакте по одному полю за раз. После заполнения всех полей контакт добавляется в `PhoneBook`.
	- Поля для контактов: `first name`, `last name`, `nickname`, `phone number` и `darkest secret`.
- `SEARCH`: отображение определенного контакта
	- Отображение сохраненных контактов в виде списка из 4 столбцов: `index`, `first name`, `last name` и `nickname`.
	- Затем предложит пользователю указать `index` записи для отображения полной информации о контакте, по одному полю в строке.
- `EXIT`: завершает работу программы, и контакты теряются навсегда!
- Любой другой ввод отбрасывается.

### Exercise 02: The Job Of Your Dreams
Восстановить класс `Account` на основе сохраненного лог файла.

###### Навигация по модулям
00 |
[01](https://github.com/vrivka/cpp_01) |
[02](https://github.com/vrivka/cpp_02) |
[03](https://github.com/vrivka/cpp_03) |
[04](https://github.com/vrivka/cpp_04) |
[05](https://github.com/vrivka/cpp_05) |
[06](https://github.com/vrivka/cpp_06) |
[07](https://github.com/vrivka/cpp_07) |
[08](https://github.com/vrivka/cpp_08) |
[>>>>](https://github.com/vrivka/cpp_01)