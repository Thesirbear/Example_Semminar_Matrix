////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Contest X Problem Y
/// \author     Student's Name
/// \version    0.1.0
/// \date       25.01.2021
///
/// Разработать класс матрицу, удоволетворяющую следующим требованиям:
/// 1. Компактное представление
/// 2. Правильное управление памятью
/// 3. Операционная семантика
/// 4. Лекговесные обертки
/// 5. Воспитываем быть контейнером
/// 6. Научим матрицу быть перемещаемым объектом
/// 7. Сделаем обобщеным типом
/// А. Будем тестировать с помощью assertов
/// Модель памяти на с++ - линейная
/// nullptr - это 0 адрес
/// 1-5 - системные?
/// Минимально можно прочесть и записать одну ячейку памяти
/// В одной ячейке 1 байт = (1 актет = 8 бит)
/// 4 байта - (машинное слово в 32-ой системе) это int
/// У объекта есть адрес он записывается в 1-й байт объекта
/// Правило: Указатель должный быть немедленно инитиализирован, после его объявления
/// Указатель на объект любого типа имеет(любого размера), всегда имеет фикс. размер(в зависимости от компилятора) 
/// Оператор взятия адреса(&)
/// (*)p - оператор разоминонования 
/// p([]) - оператор взятия индексации
/// Указатель не несет информации указывает, он на один или несколько объектов
/// Стековая и (На куче) память
/// Провокация #1 В программе на с++ все что вы видите лежит в стековой памяти.
/// Провокация #2 Признак стека наличие фигурных скобочек { ... } А если фигурных скобок нет все равно стек
/// new аллоцирует на куче (внешней памяти) объекта получаем ключ на объект в куче
/// new это malloc + default контейнер 
/// Правило №42 Память отправляется в кучу самостоятельно программистом
/// На каждый new будет свой delete иначе утечки памяти(с учётом циклов)
/// См. политики управления памятью
/// память для new[] освобождаем delete[]
/// delete - это ~ + free
/// Удалять память можно только (динамическую). 
/// В программе удаляется только указатель(ключ) на объект(квартиру) в динамической памяти
////////////////////////////////////////////////////////////////////////////////

#include "matrix.h"

void test1() {
    Matrix m;           // TODO: Исследовать с помощью точки остановки, что нули будут 
}

int main()
{
    // TODO: provide your solution here.    
    test1();
    return 0;
}
