#pragma once
#include "source2sdk/client/Class_T.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
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
    // Size: 0x530
    // Has VTable
    #pragma pack(push, 1)
    class CAI_Relationship : public server::CBaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x4e8[0x8]; // 0x4e8
        CUtlSymbolLarge m_iszSubject; // 0x4f0        
        CUtlSymbolLarge m_iszSubjectClass; // 0x4f8        
        client::Class_T m_nSubjectClassifyAs; // 0x500        
        [[maybe_unused]] std::uint8_t pad_0x504[0x4]; // 0x504
        CUtlSymbolLarge m_iszTargetClass; // 0x508        
        client::Class_T m_nTargetClassifyAs; // 0x510        
        int32_t m_iDisposition; // 0x514        
        int32_t m_iRank; // 0x518        
        bool m_fStartActive; // 0x51c        
        bool m_bIsActive; // 0x51d        
        [[maybe_unused]] std::uint8_t pad_0x51e[0x2]; // 0x51e
        int32_t m_iPreviousDisposition; // 0x520        
        float m_flRadius; // 0x524        
        int32_t m_iPreviousRank; // 0x528        
        bool m_bReciprocal; // 0x52c        
        [[maybe_unused]] std::uint8_t pad_0x52d[0x3];
        
        // Datamap fields:
        // void CAI_RelationshipApplyRelationshipThink; // 0x0
        // void InputApplyRelationship; // 0x0
        // void InputRevertRelationship; // 0x0
        // void InputRevertToDefaultRelationship; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_Relationship because it is not a standard-layout class
    static_assert(sizeof(CAI_Relationship) == 0x530);
};
