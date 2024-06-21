//説明スライドを参考に、現実世界のポリフォーズムを名前にしてください

#include <stdio.h>

class OYA
{
public:
	virtual void Voice() {
		printf("あにまる?n");
	};
};

class KoA : public OYA
{
public:
	void Voice(){
		printf("子供Aっす\n");
	};
};

class KoB : public OYA
{
public:
	void Voice() {
		printf("子供Bっす\n");
	};
};

int main(void) {

	OYA* animal[2] = {new KoA,new KoB};

	animal[0]->Voice();
	animal[1]->Voice();

	delete animal[0];
	delete animal[1];

	return 0;
}

