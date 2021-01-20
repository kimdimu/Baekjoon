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



	//수시 6개 줬는데
	// 최소 지거국은 되야함(부산, 부경대도 국립대니까 지거국은 아니더라도 여까지 국립라인까지 ㅇㅈ)
	// 그 밑으로는 다 == 이라고 생각하거든 (과가 중요) -> 성적맞춰서 간 친구 하나 있는데 지금 상황이 좀 verry bad..
	// 그래서 성적맞춰서 가는거 비추천..... 하지만 하고싶은게 아직 생각ㅇ이 안난다니 어쩔수없는 노릇,,,,,
	// 내기준 상향 -> 동의대, 경성대, 이 윗라인(동아, 부경, 부산 -> 아예 못감)  534 44 1(필수) 1은ㅁ뭐야한국사? 수3?
	// 동서대 컴공 -> 추가합격 연락옴(감) // 하향
	// 대학은 가야하니까 신라, 동명, 영산 역대급 개쓰레기학교 3개 넣어놓고
	// 신라대 컴공 -> 탙ㄹ락? 붙었나 기억안남
	// 동명대 컴공 -> 확실히 떨어짐(기억남)
	// 영산대 컴공 -> 추가합격 연락옴(이미 딴데 붙었다고 안간다고함)
	// 2장 돈아까워서 안씀

}