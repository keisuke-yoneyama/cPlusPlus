#include <iostream> //std:coutを使うのに必要
#include <stdio.h>

class MikanBox {/*ミカン箱クラスの定義*/
public:
	void Add(int addmikan);//みかんを入れる
	void Del(int delmikan);//みかんを取り出す
	void Empty();//箱を空にする
	int GetTotal() {//みかんの総数を返す
		return total;
	}
private: //アクセス指定子を省略した場合はプライベートになる。
	int total;
};

void MikanBox::Add(int addmikan)//addメソッドの定義
{
	total += addmikan;
}

void MikanBox::Del(int delmikan)
{
	total -= delmikan;
	if (total < 0)//totalが0だったら
		Empty();//emptyメソッドで空にする。
}



void MikanBox::Empty() //空にする手続き「メソッド」の定義
{
	total = 0;
}

int main() {
	MikanBox myMikanBox;//オブジェクトの生成

	myMikanBox.Empty();//最初に箱を空にする。
	myMikanBox.Add(5);//5を追加する
	myMikanBox.Del(2);//2を減らす
	printf("箱の中のミカン:%d個\n", myMikanBox.GetTotal());
	return 0;

}
