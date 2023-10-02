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

    // ��������� ����� � ���������� �����(�� ��� �� ������ ��������� ��-��
    // ���������� � cpp ����� ����� ��������� ������� ��� �������������� �����)
    //template class Stack<int>;
    //template class Stack<double>;
    //template class Stack<float>;
}