#pragma once

#include "BiffRecord.h"

namespace XLS
{


// Logical representation of SBaseRef record in BIFF8
class SBaseRef: public BiffRecord
{
	BIFF_RECORD_DEFINE_TYPE_INFO(SBaseRef)
	BASE_OBJECT_DEFINE_CLASS_NAME(SBaseRef)
public:
	SBaseRef();
	~SBaseRef();

	BaseObjectPtr clone();

	void writeFields(CFRecord& record);
	void readFields(CFRecord& record);

	static const ElementType	type = typeSBaseRef;

//-----------------------------
//	BIFF_WORD userName;
public:
	//BO_ATTRIB_MARKUP_BEGIN
//		//BO_ATTRIB_MARKUP_ATTRIB(userName)
	//BO_ATTRIB_MARKUP_END

};

} // namespace XLS

