/*******************************************************************************
 * Singleton (싱글톤) 
 *
 * 생성자가 여러번 호출 되더라도 실제로 생성되는 객체는 하나이고,
 * 최초 생성 이후에 호출된 생성자는 최초의 생성자가 생성한 객체를 리턴한다		
 * (참고: 파이썬의 모듈은 그 자체로 싱글턴임)
 *
 * lazy initialization 방법으로 getInstance()가 호출 되는 시점에 instance를 load
 *
 * multi thread 방식일 경우 getInstance()가 두번 호출되어 객체가 2개 생길 가능성 있음
 * --> synchronized(동기화) 기법 사용
 *
 *
 *
 * *****************************************************************************/

#include <iostream>
using namespace std;

class singleton {
	private:
		static singleton* instance_;
		singleton () {
			cout << "[singleton]생성자 호출" << endl;
		};	//생성자
		int value=0;
	public:
		static singleton* getInstance () {
			if (instance_ == NULL){
				instance_ = new singleton;
			}
			return instance_;
		}
		int getValue () {
			return value;
		}
		void incValue () {
			value++;
		}
};


singleton* singleton::instance_ = NULL;

int main (void) {
	singleton* mySingleton1;
	singleton* mySingleton2;

	//아래 경우 애러: 생성자가 private (error: ‘singleton::singleton()’ is private within this context)
	//singleton mySingleton3 = singleton();

	mySingleton1 = mySingleton1->getInstance();
	mySingleton2 = singleton::getInstance();

	cout <<	" mySingleton1.getValue() : " << mySingleton1->getValue() << endl;
	cout << "mySingleton2.incValue() : " << endl;
	mySingleton2->incValue();
	cout << " mySingleton1.getValue() : " << mySingleton1->getValue() << endl;

	return 0;
}
