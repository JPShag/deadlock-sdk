#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CCitadel_Modifier_BaseEventProcVData.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x648
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_TechDefenderShreddersProcVData : public client::CCitadel_Modifier_BaseEventProcVData
    {
    public:
        // metadata: MPropertyGroupName "Modifiers"
        // m_TechDebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_TechDebuffModifier;
        char m_TechDebuffModifier[0x10]; // 0x638        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_TechDefenderShreddersProcVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_TechDefenderShreddersProcVData) == 0x648);
};