#include <iostream>


class Array
{
private:
	int* arrayNum;

public:
	// コンストラクタ
	Array()
	{
		// 関数が呼ばれたときに初期化
		arrayNum = nullptr;
	}

	void Create(int array);
	void Get(int getArrayNum);
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
}

/// <summary>
/// 値を習得する関数
/// </summary>
/// <param name="getArrayNum">配列を習得する数値</param>
void Array::Get(int getArrayNum)
{
	printf("num = %d\n", arrayNum[getArrayNum]);

}

/// <summary>
/// 配列を設定する関数
/// </summary>
/// <param name="setArrayNum">配列を設定する数値</param>
void Array::Set(int setArrayNum)
{
	arrayNum[setArrayNum] = setArrayNum;
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
		array.Get(i);
	}
}

