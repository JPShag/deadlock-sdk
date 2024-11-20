#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class TaskHandshakeScope_t : std::uint32_t
    {
        eTask = 0x0,
        eSchedule = 0x1,
        eInvalid = 0x2,
    };
};