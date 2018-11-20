#ifndef CLASS_BITKEY_UTIL_H
#define CLASS_BITKEY_UTIL_H

#include <iostream>
#include <string>
#include <map>

class BitkeyUtil {
	public:
		std::map<std::string, std::string> getPrincipalKeyList();
		std::map<std::string, std::string> getNumberRistrictedKeyList();
		void setNumberRistrictedKeyList();
		int getTime();
};

#endif