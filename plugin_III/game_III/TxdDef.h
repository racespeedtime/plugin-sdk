/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_III.h"
#include "RenderWare.h"

class TxdDef {
public:
	RwTexDictionary *m_pRwDictionary;
	unsigned short m_nRefCount;
    char m_szName[20];
};

VALIDATE_SIZE(TxdDef, 0x1C);