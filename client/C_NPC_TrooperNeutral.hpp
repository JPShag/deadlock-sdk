#pragma once
#include "source2sdk/client/C_AI_CitadelNPC.hpp"
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
    // Size: 0x14a0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bPlayingIdle"
    // static metadata: MNetworkVarNames "bool m_bShieldActive"
    #pragma pack(push, 1)
    class C_NPC_TrooperNeutral : public client::C_AI_CitadelNPC
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnPlayingIdleChanged"
        bool m_bPlayingIdle; // 0x1470        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnShieldActiveChanged"
        bool m_bShieldActive; // 0x1471        
        [[maybe_unused]] std::uint8_t pad_0x1472[0x2e];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_NPC_TrooperNeutral because it is not a standard-layout class
    static_assert(sizeof(C_NPC_TrooperNeutral) == 0x14a0);
};
