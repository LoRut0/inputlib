#pragma once
#include "pch.h"


namespace Input 
{

	//���� int, min <= int <= max
	int int_(int min = INT_MIN / 10, int max = INT_MAX / 10);
	//���������� ��������� int, min <= int <= max
	int int_rand(int min = INT_MIN, int max = INT_MAX);

	//����� ��� �������, ����������� ��������� �����, ������� ����� ������������ � ��������� �� min �� max, ��� ������� esc ���������� esc_return (-1 �� �������)
	int choice(int min = 0, int max = 9, int esc_return = -1);
	//
	bool bool_(char lie = '0', char truth = '1');

	/*���� double, min <= double <= max
	* ESC returns DBL_MIN*/
	double double_(double min = ((DBL_MAX / 10) * -1), double max = (DBL_MAX / 10), unsigned max_after_comma = 10);
	//���������� ��������� double, min <= double <= max
	double double_rand(double min = DBL_MIN, double max = DBL_MAX);

	//���� ������, min_len <= ����� <= max_len (��� ����� �������� ������ ����� � �����)
	std::string str(int max_len, int min_len = 1);
	//���� ������, min_len <= ����� <= max_len (��� ����� �������� ������ �����, ������ ����� ������ ���������)
	std::string name(int max_len, int min_len = 1);

	//���� ����, min_year <= ��� <= max_year
	std::string date(unsigned min_year = 0, unsigned max_year = 9999, bool esc = 0);

}