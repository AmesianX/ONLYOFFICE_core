#pragma once

#include "ParsedFormula.h"

namespace XLS
{

class CFRecord;

class SharedParsedFormula : public ParsedFormula
{
	BASE_STRUCTURE_DEFINE_CLASS_NAME(SharedParsedFormula)
public:
	SharedParsedFormula(const bool is_part_of_a_revision, const CellRef& cell_base_ref);
	BiffStructurePtr clone();
	virtual void load(CFRecord& record);
	virtual void store(CFRecord& record);

private:
	bool is_part_of_a_revision_;
};

} // namespace XLS

