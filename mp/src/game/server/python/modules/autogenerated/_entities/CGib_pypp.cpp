// This file has been generated by Py++.

#include "cbase.h"
// This file has been generated by Py++.

#include "cbase.h"
#include "npcevent.h"
#include "srcpy_entities.h"
#include "bone_setup.h"
#include "baseprojectile.h"
#include "basegrenade_shared.h"
#include "SkyCamera.h"
#include "ai_basenpc.h"
#include "modelentities.h"
#include "basetoggle.h"
#include "triggers.h"
#include "AI_Criteria.h"
#include "saverestore.h"
#include "vcollide_parse.h"
#include "iservervehicle.h"
#include "gib.h"
#include "spark.h"
#include "filters.h"
#include "EntityFlame.h"
#include "player_resource.h"
#include "props.h"
#include "physics_prop_ragdoll.h"
#include "tier0/valve_minmax_off.h"
#include "srcpy.h"
#include "tier0/valve_minmax_on.h"
#include "tier0/memdbgon.h"
#include "CGib_pypp.hpp"

namespace bp = boost::python;

struct CGib_wrapper : CGib, bp::wrapper< CGib > {

    CGib_wrapper()
    : CGib()
      , bp::wrapper< CGib >(){
        // null constructor
        
    }

    virtual void Spawn( char const * szGibModel ) {
        PY_OVERRIDE_CHECK( CGib, Spawn )
        PY_OVERRIDE_LOG( _entities, CGib, Spawn )
        bp::override func_Spawn = this->get_override( "Spawn" );
        if( func_Spawn.ptr() != Py_None )
            try {
                func_Spawn( szGibModel );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CGib::Spawn( szGibModel );
            }
        else
            this->CGib::Spawn( szGibModel );
    }
    
    void default_Spawn( char const * szGibModel ) {
        CGib::Spawn( szGibModel );
    }

    virtual void Spawn( char const * szGibModel, float flLifetime ) {
        PY_OVERRIDE_CHECK( CGib, Spawn )
        PY_OVERRIDE_LOG( _entities, CGib, Spawn )
        bp::override func_Spawn = this->get_override( "Spawn" );
        if( func_Spawn.ptr() != Py_None )
            try {
                func_Spawn( szGibModel, flLifetime );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CGib::Spawn( szGibModel, flLifetime );
            }
        else
            this->CGib::Spawn( szGibModel, flLifetime );
    }
    
    void default_Spawn( char const * szGibModel, float flLifetime ) {
        CGib::Spawn( szGibModel, flLifetime );
    }

    virtual void Activate(  ) {
        PY_OVERRIDE_CHECK( CBaseAnimating, Activate )
        PY_OVERRIDE_LOG( _entities, CBaseAnimating, Activate )
        bp::override func_Activate = this->get_override( "Activate" );
        if( func_Activate.ptr() != Py_None )
            try {
                func_Activate(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseAnimating::Activate(  );
            }
        else
            this->CBaseAnimating::Activate(  );
    }
    
    void default_Activate(  ) {
        CBaseAnimating::Activate( );
    }

    virtual bool CanBecomeRagdoll(  ) {
        PY_OVERRIDE_CHECK( CBaseAnimating, CanBecomeRagdoll )
        PY_OVERRIDE_LOG( _entities, CBaseAnimating, CanBecomeRagdoll )
        bp::override func_CanBecomeRagdoll = this->get_override( "CanBecomeRagdoll" );
        if( func_CanBecomeRagdoll.ptr() != Py_None )
            try {
                return func_CanBecomeRagdoll(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->CBaseAnimating::CanBecomeRagdoll(  );
            }
        else
            return this->CBaseAnimating::CanBecomeRagdoll(  );
    }
    
    bool default_CanBecomeRagdoll(  ) {
        return CBaseAnimating::CanBecomeRagdoll( );
    }

    virtual void ComputeWorldSpaceSurroundingBox( ::Vector * pWorldMins, ::Vector * pWorldMaxs ) {
        PY_OVERRIDE_CHECK( CBaseEntity, ComputeWorldSpaceSurroundingBox )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, ComputeWorldSpaceSurroundingBox )
        bp::override func_ComputeWorldSpaceSurroundingBox = this->get_override( "ComputeWorldSpaceSurroundingBox" );
        if( func_ComputeWorldSpaceSurroundingBox.ptr() != Py_None )
            try {
                func_ComputeWorldSpaceSurroundingBox( boost::python::ptr(pWorldMins), boost::python::ptr(pWorldMaxs) );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseEntity::ComputeWorldSpaceSurroundingBox( pWorldMins, pWorldMaxs );
            }
        else
            this->CBaseEntity::ComputeWorldSpaceSurroundingBox( pWorldMins, pWorldMaxs );
    }
    
    void default_ComputeWorldSpaceSurroundingBox( ::Vector * pWorldMins, ::Vector * pWorldMaxs ) {
        CBaseEntity::ComputeWorldSpaceSurroundingBox( pWorldMins, pWorldMaxs );
    }

    virtual bool CreateVPhysics(  ) {
        PY_OVERRIDE_CHECK( CBaseEntity, CreateVPhysics )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, CreateVPhysics )
        bp::override func_CreateVPhysics = this->get_override( "CreateVPhysics" );
        if( func_CreateVPhysics.ptr() != Py_None )
            try {
                return func_CreateVPhysics(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->CBaseEntity::CreateVPhysics(  );
            }
        else
            return this->CBaseEntity::CreateVPhysics(  );
    }
    
    bool default_CreateVPhysics(  ) {
        return CBaseEntity::CreateVPhysics( );
    }

    virtual void DeathNotice( ::CBaseEntity * pVictim ) {
        PY_OVERRIDE_CHECK( CBaseEntity, DeathNotice )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, DeathNotice )
        bp::override func_DeathNotice = this->get_override( "DeathNotice" );
        if( func_DeathNotice.ptr() != Py_None )
            try {
                func_DeathNotice( pVictim ? pVictim->GetPyHandle() : boost::python::object() );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseEntity::DeathNotice( pVictim );
            }
        else
            this->CBaseEntity::DeathNotice( pVictim );
    }
    
    void default_DeathNotice( ::CBaseEntity * pVictim ) {
        CBaseEntity::DeathNotice( pVictim );
    }

    virtual void DoImpactEffect( ::trace_t & tr, int nDamageType ) {
        PY_OVERRIDE_CHECK( CBaseEntity, DoImpactEffect )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, DoImpactEffect )
        bp::override func_DoImpactEffect = this->get_override( "DoImpactEffect" );
        if( func_DoImpactEffect.ptr() != Py_None )
            try {
                func_DoImpactEffect( boost::ref(tr), nDamageType );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseEntity::DoImpactEffect( tr, nDamageType );
            }
        else
            this->CBaseEntity::DoImpactEffect( tr, nDamageType );
    }
    
    void default_DoImpactEffect( ::trace_t & tr, int nDamageType ) {
        CBaseEntity::DoImpactEffect( tr, nDamageType );
    }

    virtual void DrawDebugGeometryOverlays(  ) {
        PY_OVERRIDE_CHECK( CBaseEntity, DrawDebugGeometryOverlays )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, DrawDebugGeometryOverlays )
        bp::override func_DrawDebugGeometryOverlays = this->get_override( "DrawDebugGeometryOverlays" );
        if( func_DrawDebugGeometryOverlays.ptr() != Py_None )
            try {
                func_DrawDebugGeometryOverlays(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseEntity::DrawDebugGeometryOverlays(  );
            }
        else
            this->CBaseEntity::DrawDebugGeometryOverlays(  );
    }
    
    void default_DrawDebugGeometryOverlays(  ) {
        CBaseEntity::DrawDebugGeometryOverlays( );
    }

    virtual int DrawDebugTextOverlays(  ) {
        PY_OVERRIDE_CHECK( CBaseAnimating, DrawDebugTextOverlays )
        PY_OVERRIDE_LOG( _entities, CBaseAnimating, DrawDebugTextOverlays )
        bp::override func_DrawDebugTextOverlays = this->get_override( "DrawDebugTextOverlays" );
        if( func_DrawDebugTextOverlays.ptr() != Py_None )
            try {
                return func_DrawDebugTextOverlays(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->CBaseAnimating::DrawDebugTextOverlays(  );
            }
        else
            return this->CBaseAnimating::DrawDebugTextOverlays(  );
    }
    
    int default_DrawDebugTextOverlays(  ) {
        return CBaseAnimating::DrawDebugTextOverlays( );
    }

    virtual void EndTouch( ::CBaseEntity * pOther ) {
        PY_OVERRIDE_CHECK( CBaseEntity, EndTouch )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, EndTouch )
        bp::override func_EndTouch = this->get_override( "EndTouch" );
        if( func_EndTouch.ptr() != Py_None )
            try {
                func_EndTouch( pOther ? pOther->GetPyHandle() : boost::python::object() );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseEntity::EndTouch( pOther );
            }
        else
            this->CBaseEntity::EndTouch( pOther );
    }
    
    void default_EndTouch( ::CBaseEntity * pOther ) {
        CBaseEntity::EndTouch( pOther );
    }

    virtual void Event_Killed( ::CTakeDamageInfo const & info ) {
        PY_OVERRIDE_CHECK( CBaseEntity, Event_Killed )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, Event_Killed )
        bp::override func_Event_Killed = this->get_override( "Event_Killed" );
        if( func_Event_Killed.ptr() != Py_None )
            try {
                func_Event_Killed( boost::ref(info) );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseEntity::Event_Killed( info );
            }
        else
            this->CBaseEntity::Event_Killed( info );
    }
    
    void default_Event_Killed( ::CTakeDamageInfo const & info ) {
        CBaseEntity::Event_Killed( info );
    }

    virtual void Event_KilledOther( ::CBaseEntity * pVictim, ::CTakeDamageInfo const & info ) {
        PY_OVERRIDE_CHECK( CBaseEntity, Event_KilledOther )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, Event_KilledOther )
        bp::override func_Event_KilledOther = this->get_override( "Event_KilledOther" );
        if( func_Event_KilledOther.ptr() != Py_None )
            try {
                func_Event_KilledOther( pVictim ? pVictim->GetPyHandle() : boost::python::object(), boost::ref(info) );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseEntity::Event_KilledOther( pVictim, info );
            }
        else
            this->CBaseEntity::Event_KilledOther( pVictim, info );
    }
    
    void default_Event_KilledOther( ::CBaseEntity * pVictim, ::CTakeDamageInfo const & info ) {
        CBaseEntity::Event_KilledOther( pVictim, info );
    }

    virtual char const * GetTracerType(  ) {
        PY_OVERRIDE_CHECK( CBaseEntity, GetTracerType )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, GetTracerType )
        bp::override func_GetTracerType = this->get_override( "GetTracerType" );
        if( func_GetTracerType.ptr() != Py_None )
            try {
                return func_GetTracerType(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->CBaseEntity::GetTracerType(  );
            }
        else
            return this->CBaseEntity::GetTracerType(  );
    }
    
    char const * default_GetTracerType(  ) {
        return CBaseEntity::GetTracerType( );
    }

    virtual bool KeyValue( char const * szKeyName, char const * szValue ) {
        PY_OVERRIDE_CHECK( CBaseEntity, KeyValue )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, KeyValue )
        bp::override func_KeyValue = this->get_override( "KeyValue" );
        if( func_KeyValue.ptr() != Py_None )
            try {
                return func_KeyValue( szKeyName, szValue );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->CBaseEntity::KeyValue( szKeyName, szValue );
            }
        else
            return this->CBaseEntity::KeyValue( szKeyName, szValue );
    }
    
    bool default_KeyValue( char const * szKeyName, char const * szValue ) {
        return CBaseEntity::KeyValue( szKeyName, szValue );
    }

    virtual bool KeyValue( char const * szKeyName, float flValue ) {
        PY_OVERRIDE_CHECK( CBaseEntity, KeyValue )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, KeyValue )
        bp::override func_KeyValue = this->get_override( "KeyValue" );
        if( func_KeyValue.ptr() != Py_None )
            try {
                return func_KeyValue( szKeyName, flValue );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->CBaseEntity::KeyValue( szKeyName, flValue );
            }
        else
            return this->CBaseEntity::KeyValue( szKeyName, flValue );
    }
    
    bool default_KeyValue( char const * szKeyName, float flValue ) {
        return CBaseEntity::KeyValue( szKeyName, flValue );
    }

    virtual bool KeyValue( char const * szKeyName, ::Vector const & vecValue ) {
        PY_OVERRIDE_CHECK( CBaseEntity, KeyValue )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, KeyValue )
        bp::override func_KeyValue = this->get_override( "KeyValue" );
        if( func_KeyValue.ptr() != Py_None )
            try {
                return func_KeyValue( szKeyName, boost::ref(vecValue) );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->CBaseEntity::KeyValue( szKeyName, vecValue );
            }
        else
            return this->CBaseEntity::KeyValue( szKeyName, vecValue );
    }
    
    bool default_KeyValue( char const * szKeyName, ::Vector const & vecValue ) {
        return CBaseEntity::KeyValue( szKeyName, vecValue );
    }

    virtual void MakeTracer( ::Vector const & vecTracerSrc, ::trace_t const & tr, int iTracerType ) {
        PY_OVERRIDE_CHECK( CBaseEntity, MakeTracer )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, MakeTracer )
        bp::override func_MakeTracer = this->get_override( "MakeTracer" );
        if( func_MakeTracer.ptr() != Py_None )
            try {
                func_MakeTracer( boost::ref(vecTracerSrc), boost::ref(tr), iTracerType );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseEntity::MakeTracer( vecTracerSrc, tr, iTracerType );
            }
        else
            this->CBaseEntity::MakeTracer( vecTracerSrc, tr, iTracerType );
    }
    
    void default_MakeTracer( ::Vector const & vecTracerSrc, ::trace_t const & tr, int iTracerType ) {
        CBaseEntity::MakeTracer( vecTracerSrc, tr, iTracerType );
    }

    virtual void ModifyOrAppendCriteria( ::AI_CriteriaSet & set ) {
        PY_OVERRIDE_CHECK( CBaseAnimating, ModifyOrAppendCriteria )
        PY_OVERRIDE_LOG( _entities, CBaseAnimating, ModifyOrAppendCriteria )
        bp::override func_ModifyOrAppendCriteria = this->get_override( "ModifyOrAppendCriteria" );
        if( func_ModifyOrAppendCriteria.ptr() != Py_None )
            try {
                func_ModifyOrAppendCriteria( boost::ref(set) );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseAnimating::ModifyOrAppendCriteria( set );
            }
        else
            this->CBaseAnimating::ModifyOrAppendCriteria( set );
    }
    
    void default_ModifyOrAppendCriteria( ::AI_CriteriaSet & set ) {
        CBaseAnimating::ModifyOrAppendCriteria( set );
    }

    virtual void OnRestore(  ) {
        PY_OVERRIDE_CHECK( CBaseAnimating, OnRestore )
        PY_OVERRIDE_LOG( _entities, CBaseAnimating, OnRestore )
        bp::override func_OnRestore = this->get_override( "OnRestore" );
        if( func_OnRestore.ptr() != Py_None )
            try {
                func_OnRestore(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseAnimating::OnRestore(  );
            }
        else
            this->CBaseAnimating::OnRestore(  );
    }
    
    void default_OnRestore(  ) {
        CBaseAnimating::OnRestore( );
    }

    virtual int OnTakeDamage( ::CTakeDamageInfo const & info ) {
        PY_OVERRIDE_CHECK( CBaseEntity, OnTakeDamage )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, OnTakeDamage )
        bp::override func_OnTakeDamage = this->get_override( "OnTakeDamage" );
        if( func_OnTakeDamage.ptr() != Py_None )
            try {
                return func_OnTakeDamage( boost::ref(info) );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->CBaseEntity::OnTakeDamage( info );
            }
        else
            return this->CBaseEntity::OnTakeDamage( info );
    }
    
    int default_OnTakeDamage( ::CTakeDamageInfo const & info ) {
        return CBaseEntity::OnTakeDamage( info );
    }

    virtual bool PassesDamageFilter( ::CTakeDamageInfo const & info ) {
        PY_OVERRIDE_CHECK( CBaseEntity, PassesDamageFilter )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, PassesDamageFilter )
        bp::override func_PassesDamageFilter = this->get_override( "PassesDamageFilter" );
        if( func_PassesDamageFilter.ptr() != Py_None )
            try {
                return func_PassesDamageFilter( boost::ref(info) );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->CBaseEntity::PassesDamageFilter( info );
            }
        else
            return this->CBaseEntity::PassesDamageFilter( info );
    }
    
    bool default_PassesDamageFilter( ::CTakeDamageInfo const & info ) {
        return CBaseEntity::PassesDamageFilter( info );
    }

    virtual void PostClientActive(  ) {
        PY_OVERRIDE_CHECK( CBaseEntity, PostClientActive )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, PostClientActive )
        bp::override func_PostClientActive = this->get_override( "PostClientActive" );
        if( func_PostClientActive.ptr() != Py_None )
            try {
                func_PostClientActive(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseEntity::PostClientActive(  );
            }
        else
            this->CBaseEntity::PostClientActive(  );
    }
    
    void default_PostClientActive(  ) {
        CBaseEntity::PostClientActive( );
    }

    virtual void PostConstructor( char const * szClassname ) {
        PY_OVERRIDE_CHECK( CBaseEntity, PostConstructor )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, PostConstructor )
        bp::override func_PostConstructor = this->get_override( "PostConstructor" );
        if( func_PostConstructor.ptr() != Py_None )
            try {
                func_PostConstructor( szClassname );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseEntity::PostConstructor( szClassname );
            }
        else
            this->CBaseEntity::PostConstructor( szClassname );
    }
    
    void default_PostConstructor( char const * szClassname ) {
        CBaseEntity::PostConstructor( szClassname );
    }

    virtual void Precache(  ) {
        PY_OVERRIDE_CHECK( CBaseAnimating, Precache )
        PY_OVERRIDE_LOG( _entities, CBaseAnimating, Precache )
        bp::override func_Precache = this->get_override( "Precache" );
        if( func_Precache.ptr() != Py_None )
            try {
                func_Precache(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseAnimating::Precache(  );
            }
        else
            this->CBaseAnimating::Precache(  );
    }
    
    void default_Precache(  ) {
        CBaseAnimating::Precache( );
    }

    virtual void Spawn(  ) {
        PY_OVERRIDE_CHECK( CBaseAnimating, Spawn )
        PY_OVERRIDE_LOG( _entities, CBaseAnimating, Spawn )
        bp::override func_Spawn = this->get_override( "Spawn" );
        if( func_Spawn.ptr() != Py_None )
            try {
                func_Spawn(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseAnimating::Spawn(  );
            }
        else
            this->CBaseAnimating::Spawn(  );
    }
    
    void default_Spawn(  ) {
        CBaseAnimating::Spawn( );
    }

    virtual void StartTouch( ::CBaseEntity * pOther ) {
        PY_OVERRIDE_CHECK( CBaseEntity, StartTouch )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, StartTouch )
        bp::override func_StartTouch = this->get_override( "StartTouch" );
        if( func_StartTouch.ptr() != Py_None )
            try {
                func_StartTouch( pOther ? pOther->GetPyHandle() : boost::python::object() );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseEntity::StartTouch( pOther );
            }
        else
            this->CBaseEntity::StartTouch( pOther );
    }
    
    void default_StartTouch( ::CBaseEntity * pOther ) {
        CBaseEntity::StartTouch( pOther );
    }

    virtual void StopLoopingSounds(  ) {
        PY_OVERRIDE_CHECK( CBaseEntity, StopLoopingSounds )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, StopLoopingSounds )
        bp::override func_StopLoopingSounds = this->get_override( "StopLoopingSounds" );
        if( func_StopLoopingSounds.ptr() != Py_None )
            try {
                func_StopLoopingSounds(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseEntity::StopLoopingSounds(  );
            }
        else
            this->CBaseEntity::StopLoopingSounds(  );
    }
    
    void default_StopLoopingSounds(  ) {
        CBaseEntity::StopLoopingSounds( );
    }

    void TraceAttack( ::CTakeDamageInfo const & info, ::Vector const & vecDir, ::trace_t * ptr, ::CDmgAccumulator * pAccumulator=0 ){
        CBaseEntity::TraceAttack( info, vecDir, ptr, pAccumulator );
    }

    virtual void UpdateOnRemove(  ) {
        PY_OVERRIDE_CHECK( CBaseEntity, UpdateOnRemove )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, UpdateOnRemove )
        bp::override func_UpdateOnRemove = this->get_override( "UpdateOnRemove" );
        if( func_UpdateOnRemove.ptr() != Py_None )
            try {
                func_UpdateOnRemove(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseEntity::UpdateOnRemove(  );
            }
        else
            this->CBaseEntity::UpdateOnRemove(  );
    }
    
    void default_UpdateOnRemove(  ) {
        CBaseEntity::UpdateOnRemove( );
    }

    virtual int UpdateTransmitState(  ) {
        PY_OVERRIDE_CHECK( CBaseEntity, UpdateTransmitState )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, UpdateTransmitState )
        bp::override func_UpdateTransmitState = this->get_override( "UpdateTransmitState" );
        if( func_UpdateTransmitState.ptr() != Py_None )
            try {
                return func_UpdateTransmitState(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->CBaseEntity::UpdateTransmitState(  );
            }
        else
            return this->CBaseEntity::UpdateTransmitState(  );
    }
    
    int default_UpdateTransmitState(  ) {
        return CBaseEntity::UpdateTransmitState( );
    }

    virtual void VPhysicsCollision( int index, ::gamevcollisionevent_t * pEvent ) {
        PY_OVERRIDE_CHECK( CBaseEntity, VPhysicsCollision )
        PY_OVERRIDE_LOG( _entities, CBaseEntity, VPhysicsCollision )
        bp::override func_VPhysicsCollision = this->get_override( "VPhysicsCollision" );
        if( func_VPhysicsCollision.ptr() != Py_None )
            try {
                func_VPhysicsCollision( index, boost::python::ptr(pEvent) );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->CBaseEntity::VPhysicsCollision( index, pEvent );
            }
        else
            this->CBaseEntity::VPhysicsCollision( index, pEvent );
    }
    
    void default_VPhysicsCollision( int index, ::gamevcollisionevent_t * pEvent ) {
        CBaseEntity::VPhysicsCollision( index, pEvent );
    }

    virtual PyObject *GetPySelf() const { return bp::detail::wrapper_base_::get_owner(*this); }

    virtual ServerClass* GetServerClass() {
        PY_OVERRIDE_CHECK( CBaseAnimating, GetServerClass )
        PY_OVERRIDE_LOG( _entities, CBaseAnimating, GetServerClass )
        ServerClass *pServerClass = SrcPySystem()->Get<ServerClass *>( "pyServerClass", GetPyInstance(), NULL, true );
        if( pServerClass )
            return pServerClass;
        return CBaseAnimating::GetServerClass();
    }

    static int m_lifeState_Get( CGib const & inst ) { return inst.m_lifeState.Get(); }

    static void m_lifeState_Set( CGib & inst, int val ) { inst.m_lifeState.Set( val ); }

    static int m_takedamage_Get( CGib const & inst ) { return inst.m_takedamage.Get(); }

    static void m_takedamage_Set( CGib & inst, int val ) { inst.m_takedamage.Set( val ); }

    static int m_nSkin_Get( CGib const & inst ) { return inst.m_nSkin.Get(); }

    static void m_nSkin_Set( CGib & inst, int val ) { inst.m_nSkin.Set( val ); }

};

void register_CGib_class(){

    bp::class_< CGib_wrapper, bp::bases< CBaseAnimating >, boost::noncopyable >( "CGib" )    
        .def( 
            "BounceGibTouch"
            , (void ( ::CGib::* )( ::CBaseEntity * ) )( &::CGib::BounceGibTouch )
            , ( bp::arg("pOther") ) )    
        .def( 
            "DieThink"
            , (void ( ::CGib::* )(  ) )( &::CGib::DieThink ) )    
        .def( 
            "GetFlame"
            , (::CBaseEntity * ( ::CGib::* )(  ) )( &::CGib::GetFlame )
            , bp::return_value_policy< bp::return_by_value >() )    
        .def( 
            "GetSprite"
            , (::CBaseEntity * ( ::CGib::* )(  ) )( &::CGib::GetSprite )
            , bp::return_value_policy< bp::return_by_value >() )    
        .def( 
            "HasPhysicsAttacker"
            , (::CBasePlayer * ( ::CGib::* )( float ) )( &::CGib::HasPhysicsAttacker )
            , ( bp::arg("dt") )
            , bp::return_value_policy< bp::return_by_value >() )    
        .def( 
            "InitGib"
            , (void ( ::CGib::* )( ::CBaseEntity *,float,float ) )( &::CGib::InitGib )
            , ( bp::arg("pVictim"), bp::arg("fMaxVelocity"), bp::arg("fMinVelocity") ) )    
        .def( 
            "LimitVelocity"
            , (void ( ::CGib::* )(  ) )( &::CGib::LimitVelocity ) )    
        .def( 
            "ObjectCaps"
            , (int ( ::CGib::* )(  ) )( &::CGib::ObjectCaps ) )    
        .def( 
            "OnPhysGunDrop"
            , (void ( ::CGib::* )( ::CBasePlayer *,::PhysGunDrop_t ) )( &::CGib::OnPhysGunDrop )
            , ( bp::arg("pPhysGunUser"), bp::arg("reason") ) )    
        .def( 
            "OnPhysGunPickup"
            , (void ( ::CGib::* )( ::CBasePlayer *,::PhysGunPickup_t ) )( &::CGib::OnPhysGunPickup )
            , ( bp::arg("pPhysGunUser"), bp::arg("reason") ) )    
        .def( 
            "SUB_AllowedToFade"
            , (bool ( ::CGib::* )(  ) )( &::CGib::SUB_AllowedToFade ) )    
        .def( 
            "SetBloodColor"
            , (void ( ::CGib::* )( int ) )( &::CGib::SetBloodColor )
            , ( bp::arg("nBloodColor") ) )    
        .def( 
            "SetFlame"
            , (void ( ::CGib::* )( ::CBaseEntity * ) )( &::CGib::SetFlame )
            , ( bp::arg("pFlame") ) )    
        .def( 
            "SetPhysicsAttacker"
            , (void ( ::CGib::* )( ::CBasePlayer *,float ) )( &::CGib::SetPhysicsAttacker )
            , ( bp::arg("pEntity"), bp::arg("flTime") ) )    
        .def( 
            "SetSprite"
            , (void ( ::CGib::* )( ::CBaseEntity * ) )( &::CGib::SetSprite )
            , ( bp::arg("pSprite") ) )    
        .def( 
            "Spawn"
            , (void ( ::CGib::* )( char const * ) )(&::CGib::Spawn)
            , (void ( CGib_wrapper::* )( char const * ) )(&CGib_wrapper::default_Spawn)
            , ( bp::arg("szGibModel") ) )    
        .def( 
            "Spawn"
            , (void ( ::CGib::* )( char const *,float ) )(&::CGib::Spawn)
            , (void ( CGib_wrapper::* )( char const *,float ) )(&CGib_wrapper::default_Spawn)
            , ( bp::arg("szGibModel"), bp::arg("flLifetime") ) )    
        .def( 
            "SpawnHeadGib"
            , (void (*)( ::CBaseEntity * ))( &::CGib::SpawnHeadGib )
            , ( bp::arg("pVictim") ) )    
        .def( 
            "SpawnRandomGibs"
            , (void (*)( ::CBaseEntity *,int,::GibType_e ))( &::CGib::SpawnRandomGibs )
            , ( bp::arg("pVictim"), bp::arg("cGibs"), bp::arg("eGibType") ) )    
        .def( 
            "SpawnSpecificGibs"
            , (void (*)( ::CBaseEntity *,int,float,float,char const *,float ))( &::CGib::SpawnSpecificGibs )
            , ( bp::arg("pVictim"), bp::arg("nNumGibs"), bp::arg("fMaxVelocity"), bp::arg("fMinVelocity"), bp::arg("cModelName"), bp::arg("flLifetime")=25 ) )    
        .def( 
            "SpawnStickyGibs"
            , (void (*)( ::CBaseEntity *,::Vector,int ))( &::CGib::SpawnStickyGibs )
            , ( bp::arg("pVictim"), bp::arg("vecOrigin"), bp::arg("cGibs") ) )    
        .def( 
            "StickyGibTouch"
            , (void ( ::CGib::* )( ::CBaseEntity * ) )( &::CGib::StickyGibTouch )
            , ( bp::arg("pOther") ) )    
        .def( 
            "Use"
            , (void ( ::CGib::* )( ::CBaseEntity *,::CBaseEntity *,::USE_TYPE,float ) )( &::CGib::Use )
            , ( bp::arg("pActivator"), bp::arg("pCaller"), bp::arg("useType"), bp::arg("value") ) )    
        .def( 
            "WaitTillLand"
            , (void ( ::CGib::* )(  ) )( &::CGib::WaitTillLand ) )    
        .def( 
            "Activate"
            , (void ( ::CBaseAnimating::* )(  ) )(&::CBaseAnimating::Activate)
            , (void ( CGib_wrapper::* )(  ) )(&CGib_wrapper::default_Activate) )    
        .def( 
            "CanBecomeRagdoll"
            , (bool ( ::CBaseAnimating::* )(  ) )(&::CBaseAnimating::CanBecomeRagdoll)
            , (bool ( CGib_wrapper::* )(  ) )(&CGib_wrapper::default_CanBecomeRagdoll) )    
        .def( 
            "ComputeWorldSpaceSurroundingBox"
            , (void ( ::CBaseEntity::* )( ::Vector *,::Vector * ) )(&::CBaseEntity::ComputeWorldSpaceSurroundingBox)
            , (void ( CGib_wrapper::* )( ::Vector *,::Vector * ) )(&CGib_wrapper::default_ComputeWorldSpaceSurroundingBox)
            , ( bp::arg("pWorldMins"), bp::arg("pWorldMaxs") ) )    
        .def( 
            "CreateVPhysics"
            , (bool ( ::CBaseEntity::* )(  ) )(&::CBaseEntity::CreateVPhysics)
            , (bool ( CGib_wrapper::* )(  ) )(&CGib_wrapper::default_CreateVPhysics) )    
        .def( 
            "DeathNotice"
            , (void ( ::CBaseEntity::* )( ::CBaseEntity * ) )(&::CBaseEntity::DeathNotice)
            , (void ( CGib_wrapper::* )( ::CBaseEntity * ) )(&CGib_wrapper::default_DeathNotice)
            , ( bp::arg("pVictim") ) )    
        .def( 
            "DoImpactEffect"
            , (void ( ::CBaseEntity::* )( ::trace_t &,int ) )(&::CBaseEntity::DoImpactEffect)
            , (void ( CGib_wrapper::* )( ::trace_t &,int ) )(&CGib_wrapper::default_DoImpactEffect)
            , ( bp::arg("tr"), bp::arg("nDamageType") ) )    
        .def( 
            "DrawDebugGeometryOverlays"
            , (void ( ::CBaseEntity::* )(  ) )(&::CBaseEntity::DrawDebugGeometryOverlays)
            , (void ( CGib_wrapper::* )(  ) )(&CGib_wrapper::default_DrawDebugGeometryOverlays) )    
        .def( 
            "DrawDebugTextOverlays"
            , (int ( ::CBaseAnimating::* )(  ) )(&::CBaseAnimating::DrawDebugTextOverlays)
            , (int ( CGib_wrapper::* )(  ) )(&CGib_wrapper::default_DrawDebugTextOverlays) )    
        .def( 
            "EndTouch"
            , (void ( ::CBaseEntity::* )( ::CBaseEntity * ) )(&::CBaseEntity::EndTouch)
            , (void ( CGib_wrapper::* )( ::CBaseEntity * ) )(&CGib_wrapper::default_EndTouch)
            , ( bp::arg("pOther") ) )    
        .def( 
            "Event_Killed"
            , (void ( ::CBaseEntity::* )( ::CTakeDamageInfo const & ) )(&::CBaseEntity::Event_Killed)
            , (void ( CGib_wrapper::* )( ::CTakeDamageInfo const & ) )(&CGib_wrapper::default_Event_Killed)
            , ( bp::arg("info") ) )    
        .def( 
            "Event_KilledOther"
            , (void ( ::CBaseEntity::* )( ::CBaseEntity *,::CTakeDamageInfo const & ) )(&::CBaseEntity::Event_KilledOther)
            , (void ( CGib_wrapper::* )( ::CBaseEntity *,::CTakeDamageInfo const & ) )(&CGib_wrapper::default_Event_KilledOther)
            , ( bp::arg("pVictim"), bp::arg("info") ) )    
        .def( 
            "GetTracerType"
            , (char const * ( ::CBaseEntity::* )(  ) )(&::CBaseEntity::GetTracerType)
            , (char const * ( CGib_wrapper::* )(  ) )(&CGib_wrapper::default_GetTracerType) )    
        .def( 
            "KeyValue"
            , (bool ( ::CBaseEntity::* )( char const *,char const * ) )(&::CBaseEntity::KeyValue)
            , (bool ( CGib_wrapper::* )( char const *,char const * ) )(&CGib_wrapper::default_KeyValue)
            , ( bp::arg("szKeyName"), bp::arg("szValue") ) )    
        .def( 
            "KeyValue"
            , (bool ( ::CBaseEntity::* )( char const *,float ) )(&::CBaseEntity::KeyValue)
            , (bool ( CGib_wrapper::* )( char const *,float ) )(&CGib_wrapper::default_KeyValue)
            , ( bp::arg("szKeyName"), bp::arg("flValue") ) )    
        .def( 
            "KeyValue"
            , (bool ( ::CBaseEntity::* )( char const *,::Vector const & ) )(&::CBaseEntity::KeyValue)
            , (bool ( CGib_wrapper::* )( char const *,::Vector const & ) )(&CGib_wrapper::default_KeyValue)
            , ( bp::arg("szKeyName"), bp::arg("vecValue") ) )    
        .def( 
            "MakeTracer"
            , (void ( ::CBaseEntity::* )( ::Vector const &,::trace_t const &,int ) )(&::CBaseEntity::MakeTracer)
            , (void ( CGib_wrapper::* )( ::Vector const &,::trace_t const &,int ) )(&CGib_wrapper::default_MakeTracer)
            , ( bp::arg("vecTracerSrc"), bp::arg("tr"), bp::arg("iTracerType") ) )    
        .def( 
            "ModifyOrAppendCriteria"
            , (void ( ::CBaseAnimating::* )( ::AI_CriteriaSet & ) )(&::CBaseAnimating::ModifyOrAppendCriteria)
            , (void ( CGib_wrapper::* )( ::AI_CriteriaSet & ) )(&CGib_wrapper::default_ModifyOrAppendCriteria)
            , ( bp::arg("set") ) )    
        .def( 
            "OnRestore"
            , (void ( ::CBaseAnimating::* )(  ) )(&::CBaseAnimating::OnRestore)
            , (void ( CGib_wrapper::* )(  ) )(&CGib_wrapper::default_OnRestore) )    
        .def( 
            "OnTakeDamage"
            , (int ( ::CBaseEntity::* )( ::CTakeDamageInfo const & ) )(&::CBaseEntity::OnTakeDamage)
            , (int ( CGib_wrapper::* )( ::CTakeDamageInfo const & ) )(&CGib_wrapper::default_OnTakeDamage)
            , ( bp::arg("info") ) )    
        .def( 
            "PassesDamageFilter"
            , (bool ( ::CBaseEntity::* )( ::CTakeDamageInfo const & ) )(&::CBaseEntity::PassesDamageFilter)
            , (bool ( CGib_wrapper::* )( ::CTakeDamageInfo const & ) )(&CGib_wrapper::default_PassesDamageFilter)
            , ( bp::arg("info") ) )    
        .def( 
            "PostClientActive"
            , (void ( ::CBaseEntity::* )(  ) )(&::CBaseEntity::PostClientActive)
            , (void ( CGib_wrapper::* )(  ) )(&CGib_wrapper::default_PostClientActive) )    
        .def( 
            "PostConstructor"
            , (void ( ::CBaseEntity::* )( char const * ) )(&::CBaseEntity::PostConstructor)
            , (void ( CGib_wrapper::* )( char const * ) )(&CGib_wrapper::default_PostConstructor)
            , ( bp::arg("szClassname") ) )    
        .def( 
            "Precache"
            , (void ( ::CBaseAnimating::* )(  ) )(&::CBaseAnimating::Precache)
            , (void ( CGib_wrapper::* )(  ) )(&CGib_wrapper::default_Precache) )    
        .def( 
            "Spawn"
            , (void ( ::CBaseAnimating::* )(  ) )(&::CBaseAnimating::Spawn)
            , (void ( CGib_wrapper::* )(  ) )(&CGib_wrapper::default_Spawn) )    
        .def( 
            "StartTouch"
            , (void ( ::CBaseEntity::* )( ::CBaseEntity * ) )(&::CBaseEntity::StartTouch)
            , (void ( CGib_wrapper::* )( ::CBaseEntity * ) )(&CGib_wrapper::default_StartTouch)
            , ( bp::arg("pOther") ) )    
        .def( 
            "StopLoopingSounds"
            , (void ( ::CBaseEntity::* )(  ) )(&::CBaseEntity::StopLoopingSounds)
            , (void ( CGib_wrapper::* )(  ) )(&CGib_wrapper::default_StopLoopingSounds) )    
        .def( 
            "TraceAttack"
            , (void ( CGib_wrapper::* )( ::CTakeDamageInfo const &,::Vector const &,::trace_t *,::CDmgAccumulator * ) )(&CGib_wrapper::TraceAttack)
            , ( bp::arg("info"), bp::arg("vecDir"), bp::arg("ptr"), bp::arg("pAccumulator")=bp::object() ) )    
        .def( 
            "UpdateOnRemove"
            , (void ( ::CBaseEntity::* )(  ) )(&::CBaseEntity::UpdateOnRemove)
            , (void ( CGib_wrapper::* )(  ) )(&CGib_wrapper::default_UpdateOnRemove) )    
        .def( 
            "UpdateTransmitState"
            , (int ( ::CBaseEntity::* )(  ) )(&::CBaseEntity::UpdateTransmitState)
            , (int ( CGib_wrapper::* )(  ) )(&CGib_wrapper::default_UpdateTransmitState) )    
        .def( 
            "VPhysicsCollision"
            , (void ( ::CBaseEntity::* )( int,::gamevcollisionevent_t * ) )(&::CBaseEntity::VPhysicsCollision)
            , (void ( CGib_wrapper::* )( int,::gamevcollisionevent_t * ) )(&CGib_wrapper::default_VPhysicsCollision)
            , ( bp::arg("index"), bp::arg("pEvent") ) )    
        .staticmethod( "SpawnHeadGib" )    
        .staticmethod( "SpawnRandomGibs" )    
        .staticmethod( "SpawnSpecificGibs" )    
        .staticmethod( "SpawnStickyGibs" )    
        .add_property( "lifestate", &CGib_wrapper::m_lifeState_Get, &CGib_wrapper::m_lifeState_Set )    
        .add_property( "takedamage", &CGib_wrapper::m_takedamage_Get, &CGib_wrapper::m_takedamage_Set )    
        .add_property( "skin", &CGib_wrapper::m_nSkin_Get, &CGib_wrapper::m_nSkin_Set );

}

