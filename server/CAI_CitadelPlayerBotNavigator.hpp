#pragma once
#include "source2sdk/server/CAI_Navigator.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x210
    // Has VTable
    #pragma pack(push, 1)
    class CAI_CitadelPlayerBotNavigator : public server::CAI_Navigator
    {
    public:
        bool m_bBlocked; // 0x208        
        [[maybe_unused]] std::uint8_t pad_0x209[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_CitadelPlayerBotNavigator because it is not a standard-layout class
    static_assert(sizeof(CAI_CitadelPlayerBotNavigator) == 0x210);
};
