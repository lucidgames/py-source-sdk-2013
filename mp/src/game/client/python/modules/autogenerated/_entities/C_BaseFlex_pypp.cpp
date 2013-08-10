// This file has been generated by Py++.

#include "cbase.h"
// This file has been generated by Py++.

#include "cbase.h"
#include "srcpy_entities.h"
#include "bone_setup.h"
#include "basegrenade_shared.h"
#include "takedamageinfo.h"
#include "c_ai_basenpc.h"
#include "soundinfo.h"
#include "srcpy.h"
#include "tier0/memdbgon.h"
#include "C_BaseFlex_pypp.hpp"

namespace bp = boost::python;

struct C_BaseFlex_wrapper : C_BaseFlex, bp::wrapper< C_BaseFlex > {

    C_BaseFlex_wrapper( )
    : C_BaseFlex( )
      , bp::wrapper< C_BaseFlex >(){
        // null constructor
    
    }

    virtual void Spawn(  ) {
        #if defined(_WIN32)
        #if defined(_DEBUG)
        Assert( SrcPySystem()->IsPythonRunning() );
        Assert( GetCurrentThreadId() == g_hPythonThreadID );
        #elif defined(PY_CHECKTHREADID)
        if( GetCurrentThreadId() != g_hPythonThreadID )
            Error( "Spawn: Client? %d. Thread ID is not the same as in which the python interpreter is initialized! %d != %d. Tell a developer.\n", CBaseEntity::IsClient(), g_hPythonThreadID, GetCurrentThreadId() );
        #endif // _DEBUG/PY_CHECKTHREADID
        #endif // _WIN32
        #if defined(_DEBUG) || defined(PY_CHECK_LOG_OVERRIDES)
        if( py_log_overrides.GetBool() )
            Msg("Calling Spawn(  ) of Class: C_BaseFlex\n");
        #endif // _DEBUG/PY_CHECK_LOG_OVERRIDES
        bp::override func_Spawn = this->get_override( "Spawn" );
        if( func_Spawn.ptr() != Py_None )
            try {
                func_Spawn(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_BaseFlex::Spawn(  );
            }
        else
            this->C_BaseFlex::Spawn(  );
    }
    
    void default_Spawn(  ) {
        C_BaseFlex::Spawn( );
    }

    virtual void Activate(  ) {
        #if defined(_WIN32)
        #if defined(_DEBUG)
        Assert( SrcPySystem()->IsPythonRunning() );
        Assert( GetCurrentThreadId() == g_hPythonThreadID );
        #elif defined(PY_CHECKTHREADID)
        if( GetCurrentThreadId() != g_hPythonThreadID )
            Error( "Activate: Client? %d. Thread ID is not the same as in which the python interpreter is initialized! %d != %d. Tell a developer.\n", CBaseEntity::IsClient(), g_hPythonThreadID, GetCurrentThreadId() );
        #endif // _DEBUG/PY_CHECKTHREADID
        #endif // _WIN32
        #if defined(_DEBUG) || defined(PY_CHECK_LOG_OVERRIDES)
        if( py_log_overrides.GetBool() )
            Msg("Calling Activate(  ) of Class: C_BaseEntity\n");
        #endif // _DEBUG/PY_CHECK_LOG_OVERRIDES
        bp::override func_Activate = this->get_override( "Activate" );
        if( func_Activate.ptr() != Py_None )
            try {
                func_Activate(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_BaseEntity::Activate(  );
            }
        else
            this->C_BaseEntity::Activate(  );
    }
    
    void default_Activate(  ) {
        C_BaseEntity::Activate( );
    }

    virtual void ComputeWorldSpaceSurroundingBox( ::Vector * pVecWorldMins, ::Vector * pVecWorldMaxs ) {
        #if defined(_WIN32)
        #if defined(_DEBUG)
        Assert( SrcPySystem()->IsPythonRunning() );
        Assert( GetCurrentThreadId() == g_hPythonThreadID );
        #elif defined(PY_CHECKTHREADID)
        if( GetCurrentThreadId() != g_hPythonThreadID )
            Error( "ComputeWorldSpaceSurroundingBox: Client? %d. Thread ID is not the same as in which the python interpreter is initialized! %d != %d. Tell a developer.\n", CBaseEntity::IsClient(), g_hPythonThreadID, GetCurrentThreadId() );
        #endif // _DEBUG/PY_CHECKTHREADID
        #endif // _WIN32
        #if defined(_DEBUG) || defined(PY_CHECK_LOG_OVERRIDES)
        if( py_log_overrides.GetBool() )
            Msg("Calling ComputeWorldSpaceSurroundingBox( boost::python::ptr(pVecWorldMins), boost::python::ptr(pVecWorldMaxs) ) of Class: C_BaseEntity\n");
        #endif // _DEBUG/PY_CHECK_LOG_OVERRIDES
        bp::override func_ComputeWorldSpaceSurroundingBox = this->get_override( "ComputeWorldSpaceSurroundingBox" );
        if( func_ComputeWorldSpaceSurroundingBox.ptr() != Py_None )
            try {
                func_ComputeWorldSpaceSurroundingBox( boost::python::ptr(pVecWorldMins), boost::python::ptr(pVecWorldMaxs) );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_BaseEntity::ComputeWorldSpaceSurroundingBox( boost::python::ptr(pVecWorldMins), boost::python::ptr(pVecWorldMaxs) );
            }
        else
            this->C_BaseEntity::ComputeWorldSpaceSurroundingBox( boost::python::ptr(pVecWorldMins), boost::python::ptr(pVecWorldMaxs) );
    }
    
    void default_ComputeWorldSpaceSurroundingBox( ::Vector * pVecWorldMins, ::Vector * pVecWorldMaxs ) {
        C_BaseEntity::ComputeWorldSpaceSurroundingBox( boost::python::ptr(pVecWorldMins), boost::python::ptr(pVecWorldMaxs) );
    }

    virtual bool CreateVPhysics(  ) {
        #if defined(_WIN32)
        #if defined(_DEBUG)
        Assert( SrcPySystem()->IsPythonRunning() );
        Assert( GetCurrentThreadId() == g_hPythonThreadID );
        #elif defined(PY_CHECKTHREADID)
        if( GetCurrentThreadId() != g_hPythonThreadID )
            Error( "CreateVPhysics: Client? %d. Thread ID is not the same as in which the python interpreter is initialized! %d != %d. Tell a developer.\n", CBaseEntity::IsClient(), g_hPythonThreadID, GetCurrentThreadId() );
        #endif // _DEBUG/PY_CHECKTHREADID
        #endif // _WIN32
        #if defined(_DEBUG) || defined(PY_CHECK_LOG_OVERRIDES)
        if( py_log_overrides.GetBool() )
            Msg("Calling CreateVPhysics(  ) of Class: C_BaseEntity\n");
        #endif // _DEBUG/PY_CHECK_LOG_OVERRIDES
        bp::override func_CreateVPhysics = this->get_override( "CreateVPhysics" );
        if( func_CreateVPhysics.ptr() != Py_None )
            try {
                return func_CreateVPhysics(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->C_BaseEntity::CreateVPhysics(  );
            }
        else
            return this->C_BaseEntity::CreateVPhysics(  );
    }
    
    bool default_CreateVPhysics(  ) {
        return C_BaseEntity::CreateVPhysics( );
    }

    virtual void DoImpactEffect( ::trace_t & tr, int nDamageType ) {
        #if defined(_WIN32)
        #if defined(_DEBUG)
        Assert( SrcPySystem()->IsPythonRunning() );
        Assert( GetCurrentThreadId() == g_hPythonThreadID );
        #elif defined(PY_CHECKTHREADID)
        if( GetCurrentThreadId() != g_hPythonThreadID )
            Error( "DoImpactEffect: Client? %d. Thread ID is not the same as in which the python interpreter is initialized! %d != %d. Tell a developer.\n", CBaseEntity::IsClient(), g_hPythonThreadID, GetCurrentThreadId() );
        #endif // _DEBUG/PY_CHECKTHREADID
        #endif // _WIN32
        #if defined(_DEBUG) || defined(PY_CHECK_LOG_OVERRIDES)
        if( py_log_overrides.GetBool() )
            Msg("Calling DoImpactEffect( boost::ref(tr), nDamageType ) of Class: C_BaseEntity\n");
        #endif // _DEBUG/PY_CHECK_LOG_OVERRIDES
        bp::override func_DoImpactEffect = this->get_override( "DoImpactEffect" );
        if( func_DoImpactEffect.ptr() != Py_None )
            try {
                func_DoImpactEffect( boost::ref(tr), nDamageType );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_BaseEntity::DoImpactEffect( boost::ref(tr), nDamageType );
            }
        else
            this->C_BaseEntity::DoImpactEffect( boost::ref(tr), nDamageType );
    }
    
    void default_DoImpactEffect( ::trace_t & tr, int nDamageType ) {
        C_BaseEntity::DoImpactEffect( boost::ref(tr), nDamageType );
    }

    virtual void EndTouch( ::C_BaseEntity * pOther ) {
        #if defined(_WIN32)
        #if defined(_DEBUG)
        Assert( SrcPySystem()->IsPythonRunning() );
        Assert( GetCurrentThreadId() == g_hPythonThreadID );
        #elif defined(PY_CHECKTHREADID)
        if( GetCurrentThreadId() != g_hPythonThreadID )
            Error( "EndTouch: Client? %d. Thread ID is not the same as in which the python interpreter is initialized! %d != %d. Tell a developer.\n", CBaseEntity::IsClient(), g_hPythonThreadID, GetCurrentThreadId() );
        #endif // _DEBUG/PY_CHECKTHREADID
        #endif // _WIN32
        #if defined(_DEBUG) || defined(PY_CHECK_LOG_OVERRIDES)
        if( py_log_overrides.GetBool() )
            Msg("Calling EndTouch( boost::python::ptr(pOther) ) of Class: C_BaseEntity\n");
        #endif // _DEBUG/PY_CHECK_LOG_OVERRIDES
        bp::override func_EndTouch = this->get_override( "EndTouch" );
        if( func_EndTouch.ptr() != Py_None )
            try {
                func_EndTouch( boost::python::ptr(pOther) );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_BaseEntity::EndTouch( boost::python::ptr(pOther) );
            }
        else
            this->C_BaseEntity::EndTouch( boost::python::ptr(pOther) );
    }
    
    void default_EndTouch( ::C_BaseEntity * pOther ) {
        C_BaseEntity::EndTouch( boost::python::ptr(pOther) );
    }

    virtual ::CollideType_t GetCollideType(  ) {
        #if defined(_WIN32)
        #if defined(_DEBUG)
        Assert( SrcPySystem()->IsPythonRunning() );
        Assert( GetCurrentThreadId() == g_hPythonThreadID );
        #elif defined(PY_CHECKTHREADID)
        if( GetCurrentThreadId() != g_hPythonThreadID )
            Error( "GetCollideType: Client? %d. Thread ID is not the same as in which the python interpreter is initialized! %d != %d. Tell a developer.\n", CBaseEntity::IsClient(), g_hPythonThreadID, GetCurrentThreadId() );
        #endif // _DEBUG/PY_CHECKTHREADID
        #endif // _WIN32
        #if defined(_DEBUG) || defined(PY_CHECK_LOG_OVERRIDES)
        if( py_log_overrides.GetBool() )
            Msg("Calling GetCollideType(  ) of Class: C_BaseAnimating\n");
        #endif // _DEBUG/PY_CHECK_LOG_OVERRIDES
        bp::override func_GetCollideType = this->get_override( "GetCollideType" );
        if( func_GetCollideType.ptr() != Py_None )
            try {
                return func_GetCollideType(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->C_BaseAnimating::GetCollideType(  );
            }
        else
            return this->C_BaseAnimating::GetCollideType(  );
    }
    
    ::CollideType_t default_GetCollideType(  ) {
        return C_BaseAnimating::GetCollideType( );
    }

    virtual char const * GetTracerType(  ) {
        #if defined(_WIN32)
        #if defined(_DEBUG)
        Assert( SrcPySystem()->IsPythonRunning() );
        Assert( GetCurrentThreadId() == g_hPythonThreadID );
        #elif defined(PY_CHECKTHREADID)
        if( GetCurrentThreadId() != g_hPythonThreadID )
            Error( "GetTracerType: Client? %d. Thread ID is not the same as in which the python interpreter is initialized! %d != %d. Tell a developer.\n", CBaseEntity::IsClient(), g_hPythonThreadID, GetCurrentThreadId() );
        #endif // _DEBUG/PY_CHECKTHREADID
        #endif // _WIN32
        #if defined(_DEBUG) || defined(PY_CHECK_LOG_OVERRIDES)
        if( py_log_overrides.GetBool() )
            Msg("Calling GetTracerType(  ) of Class: C_BaseEntity\n");
        #endif // _DEBUG/PY_CHECK_LOG_OVERRIDES
        bp::override func_GetTracerType = this->get_override( "GetTracerType" );
        if( func_GetTracerType.ptr() != Py_None )
            try {
                return func_GetTracerType(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->C_BaseEntity::GetTracerType(  );
            }
        else
            return this->C_BaseEntity::GetTracerType(  );
    }
    
    char const * default_GetTracerType(  ) {
        return C_BaseEntity::GetTracerType( );
    }

    virtual bool KeyValue( char const * szKeyName, char const * szValue ) {
        #if defined(_WIN32)
        #if defined(_DEBUG)
        Assert( SrcPySystem()->IsPythonRunning() );
        Assert( GetCurrentThreadId() == g_hPythonThreadID );
        #elif defined(PY_CHECKTHREADID)
        if( GetCurrentThreadId() != g_hPythonThreadID )
            Error( "KeyValue: Client? %d. Thread ID is not the same as in which the python interpreter is initialized! %d != %d. Tell a developer.\n", CBaseEntity::IsClient(), g_hPythonThreadID, GetCurrentThreadId() );
        #endif // _DEBUG/PY_CHECKTHREADID
        #endif // _WIN32
        #if defined(_DEBUG) || defined(PY_CHECK_LOG_OVERRIDES)
        if( py_log_overrides.GetBool() )
            Msg("Calling KeyValue( szKeyName, szValue ) of Class: C_BaseEntity\n");
        #endif // _DEBUG/PY_CHECK_LOG_OVERRIDES
        bp::override func_KeyValue = this->get_override( "KeyValue" );
        if( func_KeyValue.ptr() != Py_None )
            try {
                return func_KeyValue( szKeyName, szValue );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->C_BaseEntity::KeyValue( szKeyName, szValue );
            }
        else
            return this->C_BaseEntity::KeyValue( szKeyName, szValue );
    }
    
    bool default_KeyValue( char const * szKeyName, char const * szValue ) {
        return C_BaseEntity::KeyValue( szKeyName, szValue );
    }

    virtual bool KeyValue( char const * szKeyName, float flValue ) {
        #if defined(_WIN32)
        #if defined(_DEBUG)
        Assert( SrcPySystem()->IsPythonRunning() );
        Assert( GetCurrentThreadId() == g_hPythonThreadID );
        #elif defined(PY_CHECKTHREADID)
        if( GetCurrentThreadId() != g_hPythonThreadID )
            Error( "KeyValue: Client? %d. Thread ID is not the same as in which the python interpreter is initialized! %d != %d. Tell a developer.\n", CBaseEntity::IsClient(), g_hPythonThreadID, GetCurrentThreadId() );
        #endif // _DEBUG/PY_CHECKTHREADID
        #endif // _WIN32
        #if defined(_DEBUG) || defined(PY_CHECK_LOG_OVERRIDES)
        if( py_log_overrides.GetBool() )
            Msg("Calling KeyValue( szKeyName, flValue ) of Class: C_BaseEntity\n");
        #endif // _DEBUG/PY_CHECK_LOG_OVERRIDES
        bp::override func_KeyValue = this->get_override( "KeyValue" );
        if( func_KeyValue.ptr() != Py_None )
            try {
                return func_KeyValue( szKeyName, flValue );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->C_BaseEntity::KeyValue( szKeyName, flValue );
            }
        else
            return this->C_BaseEntity::KeyValue( szKeyName, flValue );
    }
    
    bool default_KeyValue( char const * szKeyName, float flValue ) {
        return C_BaseEntity::KeyValue( szKeyName, flValue );
    }

    virtual bool KeyValue( char const * szKeyName, ::Vector const & vecValue ) {
        #if defined(_WIN32)
        #if defined(_DEBUG)
        Assert( SrcPySystem()->IsPythonRunning() );
        Assert( GetCurrentThreadId() == g_hPythonThreadID );
        #elif defined(PY_CHECKTHREADID)
        if( GetCurrentThreadId() != g_hPythonThreadID )
            Error( "KeyValue: Client? %d. Thread ID is not the same as in which the python interpreter is initialized! %d != %d. Tell a developer.\n", CBaseEntity::IsClient(), g_hPythonThreadID, GetCurrentThreadId() );
        #endif // _DEBUG/PY_CHECKTHREADID
        #endif // _WIN32
        #if defined(_DEBUG) || defined(PY_CHECK_LOG_OVERRIDES)
        if( py_log_overrides.GetBool() )
            Msg("Calling KeyValue( szKeyName, boost::ref(vecValue) ) of Class: C_BaseEntity\n");
        #endif // _DEBUG/PY_CHECK_LOG_OVERRIDES
        bp::override func_KeyValue = this->get_override( "KeyValue" );
        if( func_KeyValue.ptr() != Py_None )
            try {
                return func_KeyValue( szKeyName, boost::ref(vecValue) );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->C_BaseEntity::KeyValue( szKeyName, boost::ref(vecValue) );
            }
        else
            return this->C_BaseEntity::KeyValue( szKeyName, boost::ref(vecValue) );
    }
    
    bool default_KeyValue( char const * szKeyName, ::Vector const & vecValue ) {
        return C_BaseEntity::KeyValue( szKeyName, boost::ref(vecValue) );
    }

    virtual void MakeTracer( ::Vector const & vecTracerSrc, ::trace_t const & tr, int iTracerType ) {
        #if defined(_WIN32)
        #if defined(_DEBUG)
        Assert( SrcPySystem()->IsPythonRunning() );
        Assert( GetCurrentThreadId() == g_hPythonThreadID );
        #elif defined(PY_CHECKTHREADID)
        if( GetCurrentThreadId() != g_hPythonThreadID )
            Error( "MakeTracer: Client? %d. Thread ID is not the same as in which the python interpreter is initialized! %d != %d. Tell a developer.\n", CBaseEntity::IsClient(), g_hPythonThreadID, GetCurrentThreadId() );
        #endif // _DEBUG/PY_CHECKTHREADID
        #endif // _WIN32
        #if defined(_DEBUG) || defined(PY_CHECK_LOG_OVERRIDES)
        if( py_log_overrides.GetBool() )
            Msg("Calling MakeTracer( boost::ref(vecTracerSrc), boost::ref(tr), iTracerType ) of Class: C_BaseEntity\n");
        #endif // _DEBUG/PY_CHECK_LOG_OVERRIDES
        bp::override func_MakeTracer = this->get_override( "MakeTracer" );
        if( func_MakeTracer.ptr() != Py_None )
            try {
                func_MakeTracer( boost::ref(vecTracerSrc), boost::ref(tr), iTracerType );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_BaseEntity::MakeTracer( boost::ref(vecTracerSrc), boost::ref(tr), iTracerType );
            }
        else
            this->C_BaseEntity::MakeTracer( boost::ref(vecTracerSrc), boost::ref(tr), iTracerType );
    }
    
    void default_MakeTracer( ::Vector const & vecTracerSrc, ::trace_t const & tr, int iTracerType ) {
        C_BaseEntity::MakeTracer( boost::ref(vecTracerSrc), boost::ref(tr), iTracerType );
    }

    virtual void Precache(  ) {
        #if defined(_WIN32)
        #if defined(_DEBUG)
        Assert( SrcPySystem()->IsPythonRunning() );
        Assert( GetCurrentThreadId() == g_hPythonThreadID );
        #elif defined(PY_CHECKTHREADID)
        if( GetCurrentThreadId() != g_hPythonThreadID )
            Error( "Precache: Client? %d. Thread ID is not the same as in which the python interpreter is initialized! %d != %d. Tell a developer.\n", CBaseEntity::IsClient(), g_hPythonThreadID, GetCurrentThreadId() );
        #endif // _DEBUG/PY_CHECKTHREADID
        #endif // _WIN32
        #if defined(_DEBUG) || defined(PY_CHECK_LOG_OVERRIDES)
        if( py_log_overrides.GetBool() )
            Msg("Calling Precache(  ) of Class: C_BaseEntity\n");
        #endif // _DEBUG/PY_CHECK_LOG_OVERRIDES
        bp::override func_Precache = this->get_override( "Precache" );
        if( func_Precache.ptr() != Py_None )
            try {
                func_Precache(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_BaseEntity::Precache(  );
            }
        else
            this->C_BaseEntity::Precache(  );
    }
    
    void default_Precache(  ) {
        C_BaseEntity::Precache( );
    }

    virtual bool ShouldDraw(  ) {
        #if defined(_WIN32)
        #if defined(_DEBUG)
        Assert( SrcPySystem()->IsPythonRunning() );
        Assert( GetCurrentThreadId() == g_hPythonThreadID );
        #elif defined(PY_CHECKTHREADID)
        if( GetCurrentThreadId() != g_hPythonThreadID )
            Error( "ShouldDraw: Client? %d. Thread ID is not the same as in which the python interpreter is initialized! %d != %d. Tell a developer.\n", CBaseEntity::IsClient(), g_hPythonThreadID, GetCurrentThreadId() );
        #endif // _DEBUG/PY_CHECKTHREADID
        #endif // _WIN32
        #if defined(_DEBUG) || defined(PY_CHECK_LOG_OVERRIDES)
        if( py_log_overrides.GetBool() )
            Msg("Calling ShouldDraw(  ) of Class: C_BaseAnimating\n");
        #endif // _DEBUG/PY_CHECK_LOG_OVERRIDES
        bp::override func_ShouldDraw = this->get_override( "ShouldDraw" );
        if( func_ShouldDraw.ptr() != Py_None )
            try {
                return func_ShouldDraw(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->C_BaseAnimating::ShouldDraw(  );
            }
        else
            return this->C_BaseAnimating::ShouldDraw(  );
    }
    
    bool default_ShouldDraw(  ) {
        return C_BaseAnimating::ShouldDraw( );
    }

    virtual void StartTouch( ::C_BaseEntity * pOther ) {
        #if defined(_WIN32)
        #if defined(_DEBUG)
        Assert( SrcPySystem()->IsPythonRunning() );
        Assert( GetCurrentThreadId() == g_hPythonThreadID );
        #elif defined(PY_CHECKTHREADID)
        if( GetCurrentThreadId() != g_hPythonThreadID )
            Error( "StartTouch: Client? %d. Thread ID is not the same as in which the python interpreter is initialized! %d != %d. Tell a developer.\n", CBaseEntity::IsClient(), g_hPythonThreadID, GetCurrentThreadId() );
        #endif // _DEBUG/PY_CHECKTHREADID
        #endif // _WIN32
        #if defined(_DEBUG) || defined(PY_CHECK_LOG_OVERRIDES)
        if( py_log_overrides.GetBool() )
            Msg("Calling StartTouch( boost::python::ptr(pOther) ) of Class: C_BaseEntity\n");
        #endif // _DEBUG/PY_CHECK_LOG_OVERRIDES
        bp::override func_StartTouch = this->get_override( "StartTouch" );
        if( func_StartTouch.ptr() != Py_None )
            try {
                func_StartTouch( boost::python::ptr(pOther) );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_BaseEntity::StartTouch( boost::python::ptr(pOther) );
            }
        else
            this->C_BaseEntity::StartTouch( boost::python::ptr(pOther) );
    }
    
    void default_StartTouch( ::C_BaseEntity * pOther ) {
        C_BaseEntity::StartTouch( boost::python::ptr(pOther) );
    }

    virtual void UpdateOnRemove(  ) {
        #if defined(_WIN32)
        #if defined(_DEBUG)
        Assert( SrcPySystem()->IsPythonRunning() );
        Assert( GetCurrentThreadId() == g_hPythonThreadID );
        #elif defined(PY_CHECKTHREADID)
        if( GetCurrentThreadId() != g_hPythonThreadID )
            Error( "UpdateOnRemove: Client? %d. Thread ID is not the same as in which the python interpreter is initialized! %d != %d. Tell a developer.\n", CBaseEntity::IsClient(), g_hPythonThreadID, GetCurrentThreadId() );
        #endif // _DEBUG/PY_CHECKTHREADID
        #endif // _WIN32
        #if defined(_DEBUG) || defined(PY_CHECK_LOG_OVERRIDES)
        if( py_log_overrides.GetBool() )
            Msg("Calling UpdateOnRemove(  ) of Class: C_BaseEntity\n");
        #endif // _DEBUG/PY_CHECK_LOG_OVERRIDES
        bp::override func_UpdateOnRemove = this->get_override( "UpdateOnRemove" );
        if( func_UpdateOnRemove.ptr() != Py_None )
            try {
                func_UpdateOnRemove(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_BaseEntity::UpdateOnRemove(  );
            }
        else
            this->C_BaseEntity::UpdateOnRemove(  );
    }
    
    void default_UpdateOnRemove(  ) {
        C_BaseEntity::UpdateOnRemove( );
    }

    virtual PyObject *GetPySelf() const { return bp::detail::wrapper_base_::get_owner(*this); }

    virtual ClientClass* GetClientClass() {
    if( GetCurrentThreadId() != g_hPythonThreadID )
        return C_BaseFlex::GetClientClass();
    ClientClass *pClientClass = SrcPySystem()->Get<ClientClass *>( "pyClientClass", GetPyInstance(), NULL, true );
    if( pClientClass )
        return pClientClass;
    return C_BaseFlex::GetClientClass();
}

};

void register_C_BaseFlex_class(){

    bp::class_< C_BaseFlex_wrapper, bp::bases< C_BaseAnimatingOverlay >, boost::noncopyable >( "C_BaseFlex", bp::no_init )    
        .def( bp::init< >() )    
        .def( 
            "AddFlexAnimation"
            , (void ( ::C_BaseFlex::* )( ::CSceneEventInfo * ) )( &::C_BaseFlex::AddFlexAnimation )
            , ( bp::arg("info") ) )    
        .def( 
            "AddGlobalFlexController"
            , (int (*)( char const * ))( &::C_BaseFlex::AddGlobalFlexController )
            , ( bp::arg("szName") ) )    
        .def( 
            "AddSceneEvent"
            , (void ( ::C_BaseFlex::* )( ::CChoreoScene *,::CChoreoEvent *,::C_BaseEntity *,bool ) )( &::C_BaseFlex::AddSceneEvent )
            , ( bp::arg("scene"), bp::arg("event"), bp::arg("pTarget")=bp::object(), bp::arg("bClientSide")=(bool)(false) ) )    
        .def( 
            "CheckSceneEvent"
            , (bool ( ::C_BaseFlex::* )( float,::CChoreoScene *,::CChoreoEvent * ) )( &::C_BaseFlex::CheckSceneEvent )
            , ( bp::arg("currenttime"), bp::arg("scene"), bp::arg("event") ) )    
        .def( 
            "CheckSceneEventCompletion"
            , (bool ( ::C_BaseFlex::* )( ::CSceneEventInfo *,float,::CChoreoScene *,::CChoreoEvent * ) )( &::C_BaseFlex::CheckSceneEventCompletion )
            , ( bp::arg("info"), bp::arg("currenttime"), bp::arg("scene"), bp::arg("event") ) )    
        .def( 
            "ClearSceneEvent"
            , (bool ( ::C_BaseFlex::* )( ::CSceneEventInfo *,bool,bool ) )( &::C_BaseFlex::ClearSceneEvent )
            , ( bp::arg("info"), bp::arg("fastKill"), bp::arg("canceled") ) )    
        .def( 
            "ClearSceneEvents"
            , (void ( ::C_BaseFlex::* )( ::CChoreoScene *,bool ) )( &::C_BaseFlex::ClearSceneEvents )
            , ( bp::arg("scene"), bp::arg("canceled") ) )    
        .def( 
            "EnsureTranslations"
            , (void ( ::C_BaseFlex::* )( ::flexsettinghdr_t const * ) )( &::C_BaseFlex::EnsureTranslations )
            , ( bp::arg("pSettinghdr") ) )    
        .def( 
            "FindFlexController"
            , (::LocalFlexController_t ( ::C_BaseFlex::* )( char const * ) )( &::C_BaseFlex::FindFlexController )
            , ( bp::arg("szName") ) )    
        .def( 
            "FlexControllerLocalToGlobal"
            , (int ( ::C_BaseFlex::* )( ::flexsettinghdr_t const *,int ) )( &::C_BaseFlex::FlexControllerLocalToGlobal )
            , ( bp::arg("pSettinghdr"), bp::arg("key") ) )    
        .def( 
            "GetFlexWeight"
            , (float ( ::C_BaseFlex::* )( ::LocalFlexController_t ) )( &::C_BaseFlex::GetFlexWeight )
            , ( bp::arg("index") ) )    
        .def( 
            "GetGlobalFlexControllerName"
            , (char const * (*)( int ))( &::C_BaseFlex::GetGlobalFlexControllerName )
            , ( bp::arg("idx") ) )    
        .def( 
            "GetPyNetworkType"
            , (int (*)(  ))( &::C_BaseFlex::GetPyNetworkType ) )    
        .def( 
            "GetSoundSpatialization"
            , (bool ( ::C_BaseFlex::* )( ::SpatializationInfo_t & ) )( &::C_BaseFlex::GetSoundSpatialization )
            , ( bp::arg("info") ) )    
        .def( 
            "GetToolRecordingState"
            , (void ( ::C_BaseFlex::* )( ::KeyValues * ) )( &::C_BaseFlex::GetToolRecordingState )
            , ( bp::arg("msg") ) )    
        .def( 
            "InitPhonemeMappings"
            , (void ( ::C_BaseFlex::* )(  ) )( &::C_BaseFlex::InitPhonemeMappings ) )    
        .def( 
            "LinkToGlobalFlexControllers"
            , (void (*)( ::CStudioHdr * ))( &::C_BaseFlex::LinkToGlobalFlexControllers )
            , ( bp::arg("hdr") ) )    
        .def( 
            "OnThreadedDrawSetup"
            , (void ( ::C_BaseFlex::* )(  ) )( &::C_BaseFlex::OnThreadedDrawSetup ) )    
        .def( 
            "ProcessSceneEvent"
            , (bool ( ::C_BaseFlex::* )( bool,::CSceneEventInfo *,::CChoreoScene *,::CChoreoEvent * ) )( &::C_BaseFlex::ProcessSceneEvent )
            , ( bp::arg("bFlexEvents"), bp::arg("info"), bp::arg("scene"), bp::arg("event") ) )    
        .def( 
            "ProcessSceneEvents"
            , (void ( ::C_BaseFlex::* )( bool ) )( &::C_BaseFlex::ProcessSceneEvents )
            , ( bp::arg("bFlexEvents") ) )    
        .def( 
            "ProcessSequenceSceneEvent"
            , (bool ( ::C_BaseFlex::* )( ::CSceneEventInfo *,::CChoreoScene *,::CChoreoEvent * ) )( &::C_BaseFlex::ProcessSequenceSceneEvent )
            , ( bp::arg("info"), bp::arg("scene"), bp::arg("event") ) )    
        .def( 
            "RemoveChoreoScene"
            , (void ( ::C_BaseFlex::* )( ::CChoreoScene * ) )( &::C_BaseFlex::RemoveChoreoScene )
            , ( bp::arg("scene") ) )    
        .def( 
            "RemoveSceneEvent"
            , (void ( ::C_BaseFlex::* )( ::CChoreoScene *,::CChoreoEvent *,bool ) )( &::C_BaseFlex::RemoveSceneEvent )
            , ( bp::arg("scene"), bp::arg("event"), bp::arg("fastKill") ) )    
        .def( 
            "RunFlexDelay"
            , (void (*)( int,float *,float *,float & ))( &::C_BaseFlex::RunFlexDelay )
            , ( bp::arg("nFlexWeightCount"), bp::arg("pFlexWeights"), bp::arg("pFlexDelayedWeights"), bp::arg("flFlexDelayTime") ) )    
        .def( 
            "RunFlexRules"
            , (void (*)( ::CStudioHdr *,float * ))( &::C_BaseFlex::RunFlexRules )
            , ( bp::arg("pStudioHdr"), bp::arg("dest") ) )    
        .def( 
            "SetFlexWeight"
            , (void ( ::C_BaseFlex::* )( ::LocalFlexController_t,float ) )( &::C_BaseFlex::SetFlexWeight )
            , ( bp::arg("index"), bp::arg("value") ) )    
        .def( 
            "SetViewTarget"
            , (::Vector ( ::C_BaseFlex::* )( ::CStudioHdr * ) )( &::C_BaseFlex::SetViewTarget )
            , ( bp::arg("pStudioHdr") ) )    
        .def( 
            "SetupGlobalWeights"
            , (bool ( ::C_BaseFlex::* )( ::matrix3x4_t const *,int,float *,float * ) )( &::C_BaseFlex::SetupGlobalWeights )
            , ( bp::arg("pBoneToWorld"), bp::arg("nFlexWeightCount"), bp::arg("pFlexWeights"), bp::arg("pFlexDelayedWeights") ) )    
        .def( 
            "SetupLocalWeights"
            , (void ( ::C_BaseFlex::* )( ::matrix3x4_t const *,int,float *,float * ) )( &::C_BaseFlex::SetupLocalWeights )
            , ( bp::arg("pBoneToWorld"), bp::arg("nFlexWeightCount"), bp::arg("pFlexWeights"), bp::arg("pFlexDelayedWeights") ) )    
        .def( 
            "SetupMappings"
            , (void ( ::C_BaseFlex::* )( char const * ) )( &::C_BaseFlex::SetupMappings )
            , ( bp::arg("pchFileRoot") ) )    
        .def( 
            "SetupWeights"
            , (void ( ::C_BaseFlex::* )( ::matrix3x4_t const *,int,float *,float * ) )( &::C_BaseFlex::SetupWeights )
            , ( bp::arg("pBoneToWorld"), bp::arg("nFlexWeightCount"), bp::arg("pFlexWeights"), bp::arg("pFlexDelayedWeights") ) )    
        .def( 
            "Spawn"
            , (void ( ::C_BaseFlex::* )(  ) )(&::C_BaseFlex::Spawn)
            , (void ( C_BaseFlex_wrapper::* )(  ) )(&C_BaseFlex_wrapper::default_Spawn) )    
        .def( 
            "StandardBlendingRules"
            , (void ( ::C_BaseFlex::* )( ::CStudioHdr *,::Vector *,::Quaternion *,float,int ) )( &::C_BaseFlex::StandardBlendingRules )
            , ( bp::arg("hdr"), bp::arg("pos"), bp::arg("q"), bp::arg("currentTime"), bp::arg("boneMask") ) )    
        .def( 
            "StartChoreoScene"
            , (void ( ::C_BaseFlex::* )( ::CChoreoScene * ) )( &::C_BaseFlex::StartChoreoScene )
            , ( bp::arg("scene") ) )    
        .def( 
            "StartSceneEvent"
            , (bool ( ::C_BaseFlex::* )( ::CSceneEventInfo *,::CChoreoScene *,::CChoreoEvent *,::CChoreoActor *,::C_BaseEntity * ) )( &::C_BaseFlex::StartSceneEvent )
            , ( bp::arg("info"), bp::arg("scene"), bp::arg("event"), bp::arg("actor"), bp::arg("pTarget") ) )    
        .def( 
            "UsesFlexDelayedWeights"
            , (bool ( ::C_BaseFlex::* )(  ) )( &::C_BaseFlex::UsesFlexDelayedWeights ) )    
        .def( 
            "Activate"
            , (void ( ::C_BaseEntity::* )(  ) )(&::C_BaseEntity::Activate)
            , (void ( C_BaseFlex_wrapper::* )(  ) )(&C_BaseFlex_wrapper::default_Activate) )    
        .def( 
            "ComputeWorldSpaceSurroundingBox"
            , (void ( ::C_BaseEntity::* )( ::Vector *,::Vector * ) )(&::C_BaseEntity::ComputeWorldSpaceSurroundingBox)
            , (void ( C_BaseFlex_wrapper::* )( ::Vector *,::Vector * ) )(&C_BaseFlex_wrapper::default_ComputeWorldSpaceSurroundingBox)
            , ( bp::arg("pVecWorldMins"), bp::arg("pVecWorldMaxs") ) )    
        .def( 
            "CreateVPhysics"
            , (bool ( ::C_BaseEntity::* )(  ) )(&::C_BaseEntity::CreateVPhysics)
            , (bool ( C_BaseFlex_wrapper::* )(  ) )(&C_BaseFlex_wrapper::default_CreateVPhysics) )    
        .def( 
            "DoImpactEffect"
            , (void ( ::C_BaseEntity::* )( ::trace_t &,int ) )(&::C_BaseEntity::DoImpactEffect)
            , (void ( C_BaseFlex_wrapper::* )( ::trace_t &,int ) )(&C_BaseFlex_wrapper::default_DoImpactEffect)
            , ( bp::arg("tr"), bp::arg("nDamageType") ) )    
        .def( 
            "EndTouch"
            , (void ( ::C_BaseEntity::* )( ::C_BaseEntity * ) )(&::C_BaseEntity::EndTouch)
            , (void ( C_BaseFlex_wrapper::* )( ::C_BaseEntity * ) )(&C_BaseFlex_wrapper::default_EndTouch)
            , ( bp::arg("pOther") ) )    
        .def( 
            "GetCollideType"
            , (::CollideType_t ( ::C_BaseAnimating::* )(  ) )(&::C_BaseAnimating::GetCollideType)
            , (::CollideType_t ( C_BaseFlex_wrapper::* )(  ) )(&C_BaseFlex_wrapper::default_GetCollideType) )    
        .def( 
            "GetTracerType"
            , (char const * ( ::C_BaseEntity::* )(  ) )(&::C_BaseEntity::GetTracerType)
            , (char const * ( C_BaseFlex_wrapper::* )(  ) )(&C_BaseFlex_wrapper::default_GetTracerType) )    
        .def( 
            "KeyValue"
            , (bool ( ::C_BaseEntity::* )( char const *,char const * ) )(&::C_BaseEntity::KeyValue)
            , (bool ( C_BaseFlex_wrapper::* )( char const *,char const * ) )(&C_BaseFlex_wrapper::default_KeyValue)
            , ( bp::arg("szKeyName"), bp::arg("szValue") ) )    
        .def( 
            "KeyValue"
            , (bool ( ::C_BaseEntity::* )( char const *,float ) )(&::C_BaseEntity::KeyValue)
            , (bool ( C_BaseFlex_wrapper::* )( char const *,float ) )(&C_BaseFlex_wrapper::default_KeyValue)
            , ( bp::arg("szKeyName"), bp::arg("flValue") ) )    
        .def( 
            "KeyValue"
            , (bool ( ::C_BaseEntity::* )( char const *,::Vector const & ) )(&::C_BaseEntity::KeyValue)
            , (bool ( C_BaseFlex_wrapper::* )( char const *,::Vector const & ) )(&C_BaseFlex_wrapper::default_KeyValue)
            , ( bp::arg("szKeyName"), bp::arg("vecValue") ) )    
        .def( 
            "MakeTracer"
            , (void ( ::C_BaseEntity::* )( ::Vector const &,::trace_t const &,int ) )(&::C_BaseEntity::MakeTracer)
            , (void ( C_BaseFlex_wrapper::* )( ::Vector const &,::trace_t const &,int ) )(&C_BaseFlex_wrapper::default_MakeTracer)
            , ( bp::arg("vecTracerSrc"), bp::arg("tr"), bp::arg("iTracerType") ) )    
        .def( 
            "Precache"
            , (void ( ::C_BaseEntity::* )(  ) )(&::C_BaseEntity::Precache)
            , (void ( C_BaseFlex_wrapper::* )(  ) )(&C_BaseFlex_wrapper::default_Precache) )    
        .def( 
            "ShouldDraw"
            , (bool ( ::C_BaseAnimating::* )(  ) )(&::C_BaseAnimating::ShouldDraw)
            , (bool ( C_BaseFlex_wrapper::* )(  ) )(&C_BaseFlex_wrapper::default_ShouldDraw) )    
        .def( 
            "StartTouch"
            , (void ( ::C_BaseEntity::* )( ::C_BaseEntity * ) )(&::C_BaseEntity::StartTouch)
            , (void ( C_BaseFlex_wrapper::* )( ::C_BaseEntity * ) )(&C_BaseFlex_wrapper::default_StartTouch)
            , ( bp::arg("pOther") ) )    
        .def( 
            "UpdateOnRemove"
            , (void ( ::C_BaseEntity::* )(  ) )(&::C_BaseEntity::UpdateOnRemove)
            , (void ( C_BaseFlex_wrapper::* )(  ) )(&C_BaseFlex_wrapper::default_UpdateOnRemove) )    
        .staticmethod( "AddGlobalFlexController" )    
        .staticmethod( "GetGlobalFlexControllerName" )    
        .staticmethod( "GetPyNetworkType" )    
        .staticmethod( "LinkToGlobalFlexControllers" )    
        .staticmethod( "RunFlexDelay" )    
        .staticmethod( "RunFlexRules" );

}

