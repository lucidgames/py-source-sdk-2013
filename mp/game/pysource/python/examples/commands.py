from vmath import Vector, QAngle, AngleVectors
from gameinterface import concommand, engine
from entities import CreateEntityByName, DispatchSpawn, eventqueue, variant_t, entlist
from utils import UTIL_GetCommandClient, UTIL_RemoveImmediate

import traceback

print('Registering examples package commands. Use "py_example_*" commands to run the examples!')

@concommand('py_example_entity')
def PyExampleEntity(args):
    # Get the player's origin, which we can use for spawning our entities
    player = UTIL_GetCommandClient()
    origin = player.GetAbsOrigin()
    print('Player origin: %s' % (str(origin)))

    # Register our entity factories by importing the module containing them (if not already imported)
    print('Creating entity classes and factories...')
    from . import entity
    
    # Spawn example_ent at our origin
    entexample = CreateEntityByName('ent_example')
    entexample.SetAbsOrigin(origin)
    DispatchSpawn(entexample)
    entexample.Activate()
    
@concommand('py_example_mylogicalentity')
def PyExampleMyLogicalEntity(args):
    # Get the player's origin, which we can use for spawning our entities
    player = UTIL_GetCommandClient()
    origin = player.GetAbsOrigin()
    print('Player origin: %s' % (str(origin)))

    # Register our entity factories by importing the module containing them (if not already imported)
    print('Creating entity classes and factories...')
    from . import entity
    
    # Spawn my_logical_entity at our origin
    # Also setup key values (as you would have done when adding the entity in Hammer)
    print('Spawning my_logical_entity')
    mylogicalent = CreateEntityByName('my_logical_entity')
    mylogicalent.SetAbsOrigin(origin)
    mylogicalent.KeyValue('name', 'MyFirstCounter')
    mylogicalent.KeyValue('threshold', '3')
    DispatchSpawn(mylogicalent)
    mylogicalent.Activate()
    
    # Now use the entity
    print('Firing Tick inputs to our logical entity. Make sure to put "Developer" to "2" so you can see the inputs being received')
    value = variant_t()
    eventqueue.AddEvent(mylogicalent, "Tick", value, 0.5, None, None)
    eventqueue.AddEvent(mylogicalent, "Tick", value, 0.75, None, None)
    eventqueue.AddEvent(mylogicalent, "Tick", value, 1.0, None, None)
    
    
@concommand('py_example_mymodelentity')
def PyExampleMyModelEntity(args):
    # Register our entity factories by importing the module containing them (if not already imported)
    print('Creating entity classes and factories...')
    from . import entity

    # Spawn model entity
    forward = Vector()
    player = UTIL_GetCommandClient()
 
    print('Spawning my_model_entity')
    AngleVectors(player.EyeAngles(), forward)
    modelent = CreateEntityByName("my_model_entity")
    origin = player.GetAbsOrigin() + forward * 256 + Vector(0,0,64)
    angles = QAngle(0, player.GetAbsAngles().y - 90, 0)
    modelent.SetAbsOrigin(origin)
    modelent.SetAbsAngles(angles)
    modelent.SetName('my_model_entity')
    DispatchSpawn(modelent)
    
    # Activate MoveThink example
    engine.ClientCommand(player, 'ent_fire my_model_entity Toggle')
    
@concommand('py_example_mymodelentity_removeall', helpstring='Removes all active my_model_entity entities')
def PyExampleMyModelEntityRemoveAll(args):
    modelent = entlist.FindEntityByClassname(None, 'my_model_entity')
    while modelent:
        modelentinst = modelent.Get()
        print('model ent handle: %s, model ent instance: %s. Removing...' % (modelent, modelentinst))
        UTIL_RemoveImmediate(modelent)
        
        # After removal the handle is None
        # The reference to instance will still be valid
        # The class instance of the reference is rebound to an empty class to prevent access to potential dangerous methods
        try:
            print(modelent.GetEntityName())
        except AttributeError:
            print('EXAMPLE EXCEPTION: Attempted to access None, because handle went None after removing the entity.')
            traceback.print_exc()
            
        try:
            print('EXAMPLE EXCEPTION: GetEntityName not found, because the class on the entity changed')
            print(modelentinst.GetEntityName())
        except AttributeError:
            traceback.print_exc()
        
        # Find next
        modelent = entlist.FindEntityByClassname(None, 'my_model_entity')
    
    
@concommand('py_example_networkedentity')
def PyExampleNetworkedEntity(args):
    # Get the player's origin, which we can use for spawning our entities
    player = UTIL_GetCommandClient()
    origin = player.GetAbsOrigin()
    print('Player origin: %s' % (str(origin)))
    
    # Register our entity factories by importing the module containing them (if not already imported)
    print('Creating networked entity classes and factories...')
    from . import networkedentity
    
    # Spawn example_ent at our origin
    entexample = CreateEntityByName('netent_example')
    entexample.SetAbsOrigin(origin)
    DispatchSpawn(entexample)
    entexample.Activate()
    