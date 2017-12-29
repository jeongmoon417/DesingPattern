/***i****************************************************************************
 * singletonMulFile.cpp
 *
 * Singleton (싱글톤)
 *
 * 생성자가 여러번 호출 되더라도 실제로 생성되는 객체는 하나이고,
 * 최초 생성 이후에 호출된 생성자는 최초의 생성자가 생성한 객체를 리턴한다
 *
 * *****************************************************************************/

#include <iostream>
#include "singletonMulFile.h"
using namespace std;

singleton* singleton::instance_ = NULL;
singleton::singleton(){};
singleton* singleton::getInstance () {
	if (instance_ == NULL){
		instance_ = new singleton;
	}
	return instance_;
}
int singleton::getValue() {
	return value;
}
void singleton::incValue() {
	value++;
}
/*
int main (void) {
	return 0;
}
*/
