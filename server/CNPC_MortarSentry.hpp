#pragma once
#include "source2sdk/server/CAI_CitadelNPC.hpp"
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
    // Size: 0x1848
    // Has VTable
    #pragma pack(push, 1)
    class CNPC_MortarSentry : public server::CAI_CitadelNPC
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x17f0[0xc]; // 0x17f0
        float m_flAttackCone; // 0x17fc        
        float m_flLastAlertSound; // 0x1800        
        float m_flTrackingSpeed; // 0x1804        
        Vector m_vTargetPosition; // 0x1808        
        float m_flSearchRadius; // 0x1814        
        [[maybe_unused]] std::uint8_t pad_0x1818[0x30];
        
        // Static fields:
        static CUtlSymbolLarge &Get_SCHED_MORTAR_ATTACK() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_MortarSentry")->GetStaticFields()[0]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_MORTAR_SENTRY() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_MortarSentry")->GetStaticFields()[1]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_MORTAR_ATTACK() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_MortarSentry")->GetStaticFields()[2]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_MORTAR_NO_TARGET_VOLLEY() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_MortarSentry")->GetStaticFields()[3]->m_pInstance);};
        
        // Datamap fields:
        // float m_flLifeTime; // 0x1818
        // void m_nCurrentVolley; // 0x1828
        // void m_nGrenadesPerVolley; // 0x182c
        // void m_flNextAttackTime; // 0x1830
        // void m_flAttackRateInnerVolley; // 0x1834
        // void m_flAttackRate; // 0x1838
        // void m_vLastTargetPos; // 0x183c
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_MortarSentry because it is not a standard-layout class
    static_assert(sizeof(CNPC_MortarSentry) == 0x1848);
};