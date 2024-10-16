#ifndef MATRIX_H_
#define MATRIX_H_

#include <cstddef>

extern int GLOBAL;

class Matrix {
   
public:
    // конструктор и декстурктор единственные ничего не возвращают
    Matrix()  
        : storage_(nullptr),
          row_count_(0),
          column_count_(0)
    {
        //Работать будет, но в целом это не правильно
        // storage_ = nullptr;
        // В явном случае this нужен тогда, когда никак без него нельзя обойтись
        // this->storage_ = nullptr; // на самом деле это так, но комплитор умеет догадыватся до таких вещей
        // this это T* const 
        // row_count_ = 0;
        // column_count_ = 0;
    }

    Matrix(size_t row_count, size_t column_count);

    // TODO: как избавиться от конструктора по умолчанию и использовать 26? 
    // TODO: реализовать этот конструктор
    Matrix(size_t row_count, size_t column_count, double def);

    ~Matrix();
    // Matrix(int dummy)
    // // Чисто поиграться
    // Matrix(int& dummy)  
    //     // : dummy_(dummy)
    //     : dummy_{dummy}
    //     // : dummy_(GLOBAL) 
    // {
    //     // мы здесь через имя dummy_ пытаемся записать новое значение обьекту, которое вообще не привязали
    //     //инициализация здесь слишком поздно
    //     // dummy_ = dummy;
    // }

public:
    class Row {
        friend Matrix;
    public:
        // Row();
        // Row(size_t pos, double* storage) :
        // {

        // }
    private:
    // В том случае когда нужно будет инит левоконст указ
    // на матрицу этот указ некуда будет засунуть в этом классе
    // 
        Row(Matrix* owner, size_t pos) 
            :owner_(owner),
             pos_(pos)
        {

        }
    public:
    // TODO: константную перегрузку см. константную пер
        double& operator[](size_t pos) {
           return owner_->at(pos_, pos);
        }
    private:
        size_t pos_;
        // такой вариант возможен, но он отрывает строку от матрицы
        // double* row_storage_;
        // Здесь можно создать указатель на матрицу
        // Мы добавляем один уровень косвенности
        Matrix* owner_;
    };


public:
// // Правило, если метод класса не изменяет состояние инстанс, он обязан быть объявлен константным
//     size_t GetRowCount() const {
//         // попытка через конст указатель изменить intance будет забанено компилятором
//         this->row_count_ = 0;
//         GetColumnCount();
//         return row_count_;
//     }

//     size_t GetColumnCount() {
//         this->row_count_ = 0;
//         // все ок, т.к. константый метод ничего не изменит, но 
//         GetRowCount();
//         return column_count_;
//     }
    // double* 
    // Изолируем арифметику перемещения по нашей матрице
    // TODO: константая перегрузка для квадратных скобки для Row
    Row operator[](size_t i) const {

    } 
    // TODO: константный row
    Row operator[](size_t i) {
        return Row(this, i);
    }


    size_t GetOffset(size_t i, size_t j) const {
        return i * column_count_ + j;
    }

    double& Getelem(size_t i, size_t j) {
        // return storage_[i * column_count_ + j];
       return storage_[GetOffset(i, j)];
    }
    
    // Константная перегрузка типа POD, действительно лучше вернуть копию, но при переходе в соотвествии к 7
    // заменим double на const T&  
    double Getelem(size_t i, size_t j) const {
        // return storage_[i * column_count_ + j];
       return storage_[GetOffset(i, j)];
    }    
    // TODO: тоже самое для at
    double& at(size_t i, size_t j);

// Правило, если метод класса не изменяет состояние инстанс, он обязан быть объявлен константным    
    size_t GetRowCount() const {
        // попытка через конст указатель изменить intance будет забанено компилятором
        return row_count_;
    }

    size_t GetColumnCount() const {
        return column_count_;
    }

    //readable, but not writable 
    const double* GetStorage() const {
        return storage_;
    }



private:
    // default constructor exist
    // для new Matrix[] обязательно должен быть констуктор по умолчанию либо его суррогат(компилятор?)
    // память распределяющая в куче(динамическая) динамическая т.к. размер памяти известен в runtime
    // ручная память(для своих классов и структур?)(может маллок)
    //    // Далее идут члены класса вида поля(поля), которые определяют разметку объекта(layout structer)
    // double* storage_ = nullptr;
    // double* storage_{};
    //В принципе инициализировать внутри разметки можно, НО мы воспользуемся единой точки инитициализации точки входа
    // И точки выхода из объекта
    double* storage_;
    size_t row_count_;
    size_t column_count_;
    // int& dummy_;
    
};

#endif


//Константность в с++
//Указатели бывают 4-х видов константности
//1. RAI (Random access iterator)
//2. лево константный указатель (const T*) readable not writable
// Можно перемещать указатель сам объект изменить нельзя, а указатель можно менять (двигать туда-сюда например)
//3. право константный указатель (T* const)
// можно изменять объект, а указатель менять нельзя
//4. Лево-Правый указатель (const T* const)
// нельзя менять объект, указатель тоже, только читать

// Можно писать (const T*) == (T const*)

// С ссылками всё тоже самое (почти) все ссылки право константные по умолчанию