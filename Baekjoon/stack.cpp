#include<iostream>
using namespace std;

class Stack {
private:
	int top, MaxSize;
	char* stack;
public:
	Stack(int size);
	bool isFull(), isEmpty();
	char pop();
	void push(char element);
	void print();
};

Stack::Stack(int size) {
	MaxSize = size;
	stack = new char[MaxSize];
	top = -1;
}

bool Stack::isFull() {
	if (top == MaxSize - 1) return 1;
	else return 0;
}

bool Stack::isEmpty() {
	if (top == -1) return 1;
	else return 0;
}

char Stack::pop() {
	if (isEmpty() == 1) cout << "Empty!\n";
	else return stack[top--];
}

void Stack::push(char element) {
	if (isFull() == 1) cout << "Full!\n";
	else stack[++top] = element;
}


void Stack::print() {
	for (int i = 0; i < top + 1; ++i)
		cout << stack[i] << endl;
}

int main() {
	Stack ohohoh(6);

	ohohoh.push('a');
	ohohoh.push('b');
	ohohoh.push('c');
	ohohoh.push('d');
	ohohoh.push('e');
	ohohoh.push('f');
	ohohoh.push('g');
	ohohoh.pop();

	ohohoh.print();



	//���� 6�� ��µ�
	// �ּ� ���ű��� �Ǿ���(�λ�, �ΰ�뵵 ������ϱ� ���ű��� �ƴϴ��� ������ �������α��� ����)
	// �� �����δ� �� == �̶�� �����ϰŵ� (���� �߿�) -> �������缭 �� ģ�� �ϳ� �ִµ� ���� ��Ȳ�� �� verry bad..
	// �׷��� �������缭 ���°� ����õ..... ������ �ϰ������ ���� �������� �ȳ��ٴ� ��¿������ �븩,,,,,
	// ������ ���� -> ���Ǵ�, �漺��, �� ������(����, �ΰ�, �λ� -> �ƿ� ����)  534 44 1(�ʼ�) 1���������ѱ���? ��3?
	// ������ �İ� -> �߰��հ� ������(��) // ����
	// ������ �����ϴϱ� �Ŷ�, ����, ���� ����� ���������б� 3�� �־����
	// �Ŷ�� �İ� -> �y����? �پ��� ���ȳ�
	// ����� �İ� -> Ȯ���� ������(��ﳲ)
	// ����� �İ� -> �߰��հ� ������(�̹� ���� �پ��ٰ� �Ȱ��ٰ���)
	// 2�� ���Ʊ���� �Ⱦ�

}