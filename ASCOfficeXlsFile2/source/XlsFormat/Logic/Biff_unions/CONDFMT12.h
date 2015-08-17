#pragma once

#include <Logic/CompositeObject.h>

namespace XLS
{


// Logical representation of CONDFMT12 union of records 
class CONDFMT12: public CompositeObject
{
	BASE_OBJECT_DEFINE_CLASS_NAME(CONDFMT12)
public:
	CONDFMT12();
	~CONDFMT12();

	BaseObjectPtr clone();

	virtual const bool loadContent(BinProcessor& proc);

	static const ElementType	type = typeCONDFMT12;
};

} // namespace XLS

