#pragma once

namespace cpdoccore { 
namespace oox {

class docx_conversion_context;
class xlsx_conversion_context;
class pptx_conversion_context;

class conversion_element
{
public:
    virtual void docx_convert(docx_conversion_context & Context)/* const*/;
    virtual void xlsx_convert(xlsx_conversion_context & Context)/* const*/;
	virtual void pptx_convert(pptx_conversion_context & Context)/* const*/;
	virtual ~conversion_element() = 0;
};

inline conversion_element::~conversion_element()
{
}

}
}
