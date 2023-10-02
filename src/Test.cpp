#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "TemplateClass.h"

using std::cout;
using std::endl;

int main()
{
    setlocale(LC_ALL, "Rus");

    Stack<float> s(5);

    for (int i(0); !s.full(); i++)
    {
        s.push(i + 1);
    }

    for (int i(0); !s.empty(); i++)
    {
        cout << s.pop() << endl;
    };

    // Шаблонный класс и реализация стека(Он тут не совсем шаблонный из-за
    // сделанного в cpp файле явной инстанций шаблона для поддерживаемых типов)
    //template class Stack<int>;
    //template class Stack<double>;
    //template class Stack<float>;
}