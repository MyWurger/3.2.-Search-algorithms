/*******************************************************************************
 * � � � � � � � � � � � �   � � � � � �  �2  � �   3   � � � � � � �   �  +  +*
 *-----------------------------------------------------------------------------*
 * Project Type  : Win64 Console Application                                   *
 * Project Name  : Search algorithms                                           *
 * File Name     : ��������� ������. CPP                                       *
 * Programmer(s) : ������� �.�.                                                *
 * Modifyed By   :                                                             *
 * Created       : 16/10/22                                                    *
 * Last Revision : 20/10/22                                                    *
 * Comment(s)    : ���������� ���������� ������ BLS, SLS, T-�����������������  *
 *                 ������ � ������������� �������, B - ��������� ������        *
 *******************************************************************************/

#include <iostream>     // ����������� ������ �����/������
#include "Functions.h"


/**************************************************************/
/*            � � � � � � � �   � � � � � � � � �             */
/**************************************************************/
int main()
{
	system("color F0");                      // ������ ������� �������
	setlocale(LC_ALL, "Rus");                // ���������� ������� ����
	system("cls");                           // ������ ������� ����� �������

	int number = 0;                          // ���������� ��������� �������
	int search = 0;                          // ������� ��� ������ � ������������ �������
	int* pznachenue = NULL;                  // ��������� �� ������������ ������ ����� �����
	pechat_mass_search(pznachenue, number, search); // ����� �������� �������, ��� ����� ���������� ������
	return 0;                                // ���������� ��������� ��������
} //main()

 