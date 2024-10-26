#pragma once
#include "pch.h"

//�������� ������� ����� � ��������� �������
void back(std::string& str);

//������ ����� ��� ����������� ����������� 0, �� ���� ��� ����� ������ 0, ������ �������� �� ������� �� ������ ��������� ����������, ����� ������������ �� ������ ������ ��������)
int event(int min, int max);
//������ ����� ��� ����������� ����������� 0, �� ���� ��� ����� ������ 0, ������ �������� �� ������� �� ������ ��������� ����������, ����� ������������ �� ������ ������ ��������)
int event(double min, double max);

//���� �������� �������, �� ����� �������� ���������/�������� ��� int
bool size_check(std::string number, int min, int max, int event);

//���� �������� �������, �� ����� �������� ���������/�������� ��� double
bool size_check(std::string number, double min, double max, int event);
//�������� �� ����� �������� ����� �����
bool max_after_comma_check(std::string number, size_t comma_place, unsigned max_after_comma);


//�������� ������������� ����
bool isValidDate(int day, int month, int year, int min_year, int max_year);