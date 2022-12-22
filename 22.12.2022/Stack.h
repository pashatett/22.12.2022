#pragma once

class Stack {

	//нижняя и верхняя граница стека
	enum {EMPTY = -1, FULL = 20};

	//массив дял хранения данных
	char st[FULL + 1];

	//вершина стека
	int top;

public:
	Stack();
	//метод для добавления элемента
	void Push(char c);
	//метод для извлечения
	char Pop();
	//метод для очистки стека
	void Clear();
	//метод для проверки, есть ли элементы в стеке
	bool isEmpty();
	//проверка на переполнение стека
	bool isFull();
	//кол-во элементов в стеке
	int getCount();
};

Stack::Stack() {
	//изначально является пустым
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
	//если в стеке есть место, то увеличиваем top(вершина стека)
	//и вставляем новый элемент
	if (!isFull()) {
		st[++top] = c;
	}
}

char Stack::Pop() {
	//если в стеке есть элементы, то возвращаем
	//верхний элемент и уменьшаем top
	if (!isEmpty()) {
		return st[top--];
	}
	else
		return 0;
}

bool Stack::isFull() {
	return top == FULL;
}