//�����X���C�h���Q�l�ɁA�������E�̃|���t�H�[�Y���𖼑O�ɂ��Ă�������

#include <stdio.h>

class OYA
{
public:
	virtual void Voice() {
		printf("���ɂ܂�?n");
	};
};

class KoA : public OYA
{
public:
	void Voice(){
		printf("�q��A����\n");
	};
};

class KoB : public OYA
{
public:
	void Voice() {
		printf("�q��B����\n");
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

