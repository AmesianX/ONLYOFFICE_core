#pragma once

#include "BiffStructure.h"
#include <Logic/Biff_structures/CellRangeRef.h>
#include <Binary/CFRecordType.h>
#include <Logic/Biff_structures/BitMarkedStructs.h>

namespace XLS
{

class CFRecord;

class FrtRefHeaderNoGrbit : public BiffStructure
{
	BASE_STRUCTURE_DEFINE_CLASS_NAME(FrtRefHeaderNoGrbit)
public:
	FrtRefHeaderNoGrbit(const CFRecordType::TypeId type);
	FrtRefHeaderNoGrbit(const CFRecordType::TypeId type, const Ref8U& ref8_init);

	BiffStructurePtr clone();

	static const ElementType	type = typeFrtRefHeaderNoGrbit;

	virtual void load(CFRecord& record);
	virtual void store(CFRecord& record);

	CFRecordType::TypeId rt;
	Ref8U ref8;
};

} // namespace XLS

