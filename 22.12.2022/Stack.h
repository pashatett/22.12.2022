#pragma once

class Stack {

	//������ � ������� ������� �����
	enum {EMPTY = -1, FULL = 20};

	//������ ��� �������� ������
	char st[FULL + 1];

	//������� �����
	int top;

public:
	Stack();
	//����� ��� ���������� ��������
	void Push(char c);
	//����� ��� ����������
	char Pop();
	//����� ��� ������� �����
	void Clear();
	//����� ��� ��������, ���� �� �������� � �����
	bool isEmpty();
	//�������� �� ������������ �����
	bool isFull();
	//���-�� ��������� � �����
	int getCount();
};

Stack::Stack() {
	//���������� �������� ������
	top = EMPTY;
}

void Stack::Clear() {
	top = EMPTY;
}

bool Stack::isEmpty() {
	return top == EMPTY;
}

int Stack::getCount() {
	return top + 1;
}

void Stack::Push(char c) {
	//���� � ����� ���� �����, �� ����������� top(������� �����)
	//� ��������� ����� �������
	if (!isFull()) {
		st[++top] = c;
	}
}

char Stack::Pop() {
	//���� � ����� ���� ��������, �� ����������
	//������� ������� � ��������� top
	if (!isEmpty()) {
		return st[top--];
	}
	else
		return 0;
}

bool Stack::isFull() {
	return top == FULL;
}