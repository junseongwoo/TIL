/*
-- ������ �������� ������ ���� �����̳� �����
�پ��� Ÿ���� ������ ���� ���� ���ڷ� �޾� ���� Ÿ������ ��ȯ�ϴ� �Լ� 
*/

#include <array>
#include <iostream>
#include <type_traits>

// �����̳ʸ� �����ϴ� �Լ� ����
// ���� ������ �Ű������� ����ϱ� ���� ���� ���ø� ���
template <typename ... Args>
std::array<?,?> build_array(Args&& ... args)
