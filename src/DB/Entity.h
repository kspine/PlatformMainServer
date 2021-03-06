/*
 * Entity.h
 *
 *  Created on: Aug 11, 2017
 *      Author: user
 */

#ifndef ENTITY_H_
#define ENTITY_H_
#include <iostream>
#include <string.h>
#include <strings.h>
#include <string>
#include <vector>
using namespace std;

namespace networkingLab
{

class Entity
{
private:
	string id;
	vector<string> params;
public:
	Entity(const string & id);
	Entity(const string & id, const vector<string> oParams);
	virtual void setParams(vector<string> oParams);
	virtual vector<string> getParams()const;
	virtual bool equals(const Entity * other);
	virtual ~Entity();
};

} /* namespace networkingLab */

#endif /* ENTITY_H_ */
