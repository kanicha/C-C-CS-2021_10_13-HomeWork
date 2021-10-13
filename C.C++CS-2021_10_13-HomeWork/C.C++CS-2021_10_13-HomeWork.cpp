#include <iostream>


class Array
{
private:
	int* arrayNum;
	int createNum = 0;

public:
	// コンストラクタ
	Array()
	{
		// 関数が呼ばれたときに初期化
		arrayNum = nullptr;
	}

	void Create(int array);
	int Get(int getArrayNum);
	void Set(int setArrayNum);

	// デストラクタ 
	~Array()
	{
		// 削除し、初期化
		delete[] arrayNum;
		arrayNum = nullptr;
	}
};

/// <summary>
/// 配列生成を行う関数
/// </summary>
/// <param name="array">配列を生成する数値</param>
void Array::Create(int array)
{
	arrayNum = new int[array];
	createNum = array;
}

/// <summary>
/// 配列を設定する関数
/// </summary>
/// <param name="setArrayNum">配列を設定する数値</param>
int Array::Get(int getArrayNum)
{
	if (getArrayNum >= 0 && getArrayNum < createNum)
		return arrayNum[getArrayNum];
	else
		return NULL;
}

/// <summary>
/// 配列を設定する関数
/// </summary>
/// <param name="setArrayNum">配列を設定する数値</param>
void Array::Set(int setArrayNum)
{
	if (setArrayNum >= 0 && setArrayNum < createNum)
		arrayNum[setArrayNum] = setArrayNum;
	else
		return;
}

int main()
{
	Array array;
	array.Create(1000);

	for (int i = 0; i < 1000; i++)
	{
		array.Set(i);
	}

	for (int i = 0; i < 1000; i++)
	{
		printf("num = %d\n", array.Get(i));
	}

	// 例外チェック
	"num = %d\n", array.Get(-1);
	"num = %d\n", array.Get(1000);
}

