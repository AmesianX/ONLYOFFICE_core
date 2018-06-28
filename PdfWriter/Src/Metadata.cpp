﻿/*
 * (c) Copyright Ascensio System SIA 2010-2018
 *
 * This program is a free software product. You can redistribute it and/or
 * modify it under the terms of the GNU Affero General Public License (AGPL)
 * version 3 as published by the Free Software Foundation. In accordance with
 * Section 7(a) of the GNU AGPL its Section 15 shall be amended to the effect
 * that Ascensio System SIA expressly excludes the warranty of non-infringement
 * of any third-party rights.
 *
 * This program is distributed WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR  PURPOSE. For
 * details, see the GNU AGPL at: http://www.gnu.org/licenses/agpl-3.0.html
 *
 * You can contact Ascensio System SIA at Lubanas st. 125a-25, Riga, Latvia,
 * EU, LV-1021.
 *
 * The  interactive user interfaces in modified source and object code versions
 * of the Program must display Appropriate Legal Notices, as required under
 * Section 5 of the GNU AGPL version 3.
 *
 * Pursuant to Section 7(b) of the License you must retain the original Product
 * logo when distributing the program. Pursuant to Section 7(e) we decline to
 * grant you any rights under trademark law for use of our trademarks.
 *
 * All the Product's GUI elements, including illustrations and icon sets, as
 * well as technical writing content are licensed under the terms of the
 * Creative Commons Attribution-ShareAlike 4.0 International. See the License
 * terms at http://creativecommons.org/licenses/by-sa/4.0/legalcode
 *
 */
#include "Metadata.h"
#include "Streams.h"

namespace PdfWriter
{
	//----------------------------------------------------------------------------------------
	// Metadata
	//----------------------------------------------------------------------------------------
	CMetadata::CMetadata(CXref* pXref)
	{
		pXref->Add(this);

		Add("Type", "Metadata");
		Add("Subtype", "XML");

		m_pStream = new CMemoryStream();
		SetStream(pXref, m_pStream);

		m_pStream->WriteStr("<?xpacket begin=\"п»ї\" id=\"W5M0MpCehiHzreSzNTczkc9d\"?>\n\
<x:xmpmeta xmlns:x=\"adobe:ns:meta/\" x:xmptk=\"3.1-701\">\n\
<rdf:RDF xmlns:rdf=\"http://www.w3.org/1999/02/22-rdf-syntax-ns#\">\n\
<rdf:Description rdf:about=\"\" xmlns:pdf=\"http://ns.adobe.com/pdf/1.3/\">\n\
<pdf:Producer>Ascensio System SIA Copyright (c) 2018</pdf:Producer>\n\
</rdf:Description>\n\
<rdf:Description rdf:about=\"\" xmlns:xmp=\"http://ns.adobe.com/xap/1.0/\">\n\
<xmp:CreatorTool>OnlyOffice 2018</xmp:CreatorTool>\n\
</rdf:Description>\n\
<rdf:Description rdf:about=\"\" xmlns:pdfaid=\"http://www.aiim.org/pdfa/ns/id/\">\n\
<pdfaid:part>1</pdfaid:part><pdfaid:conformance>A</pdfaid:conformance>\n\
</rdf:Description>\n\
</rdf:RDF></x:xmpmeta><?xpacket end=\"w\"?>");
	}

}