#include <iostream> //std:cout���g���̂ɕK�v
#include <stdio.h>

class MikanBox {/*�~�J�����N���X�̒�`*/
public:
	void Add(int addmikan);//�݂��������
	void Del(int delmikan);//�݂�������o��
	void Empty();//������ɂ���
	int GetTotal() {//�݂���̑�����Ԃ�
		return total;
	}
private: //�A�N�Z�X�w��q���ȗ������ꍇ�̓v���C�x�[�g�ɂȂ�B
	int total;
};

void MikanBox::Add(int addmikan)//add���\�b�h�̒�`
{
	total += addmikan;
}

void MikanBox::Del(int delmikan)
{
	total -= delmikan;
	if (total < 0)//total��0��������
		Empty();//empty���\�b�h�ŋ�ɂ���B
}



void MikanBox::Empty() //��ɂ���葱���u���\�b�h�v�̒�`
{
	total = 0;
}

int main() {
	MikanBox myMikanBox;//�I�u�W�F�N�g�̐���

	myMikanBox.Empty();//�ŏ��ɔ�����ɂ���B
	myMikanBox.Add(5);//5��ǉ�����
	myMikanBox.Del(2);//2�����炷
	printf("���̒��̃~�J��:%d��\n", myMikanBox.GetTotal());
	return 0;

}
