#pragma once
#include "source2sdk/client/CCitadel_Modifier_InvisVData.hpp"
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
    // Size: 0x8e0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_LurkersAmbush_InvisVData : public client::CCitadel_Modifier_InvisVData
    {
    public:
        // metadata: MPropertyStartGroup "+Properties"
        float m_flMaxCameraAngleForSeeing; // 0x8d0        
        // metadata: MPropertyDescription "Max distance a player can look at Fathom to reveal him"
        float m_flMaxDistanceForSeeing; // 0x8d4        
        // metadata: MPropertyDescription "Visual bias on how the invis is applied"
        float m_flInvisBias; // 0x8d8        
        // metadata: MPropertyDescription "How long a player needs to look at Fathom before the invis even starts to reveal"
        float m_flSpottedMinTimeToStart; // 0x8dc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_LurkersAmbush_InvisVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_LurkersAmbush_InvisVData) == 0x8e0);
};