/*
 *	server/zone/objects/tangible/pharmaceutical/EnhancePack.h generated by engine3 IDL compiler 0.55
 */

#ifndef ENHANCEPACK_H_
#define ENHANCEPACK_H_

#include "engine/orb/DistributedObjectBroker.h"

class SceneObject;

class CreatureObject;

class Player;

class TangibleObject;

class Pharmaceutical;

#include "Pharmaceutical.h"

class EnhancePack : public Pharmaceutical {
public:
	EnhancePack(unsigned long long oid, unsigned int tempCRC, const UnicodeString& n, const String& tempn);

	EnhancePack(CreatureObject* creature, unsigned int tempCRC, const UnicodeString& n, const String& tempn);

	void generateAttributes(SceneObject* obj);

	unsigned int calculatePower(CreatureObject* enhancer, CreatureObject* patient, bool applyBattleFatigue = true);

	void setEffectiveness(float eff);

	void setDuration(float dur);

	void setAttribute(unsigned char value);

	float getEffectiveness();

	float getDuration();

	unsigned char getAttribute();

protected:
	EnhancePack(DummyConstructorParameter* param);

	virtual ~EnhancePack();

	friend class EnhancePackHelper;
};

class EnhancePackImplementation;

class EnhancePackAdapter : public PharmaceuticalAdapter {
public:
	EnhancePackAdapter(EnhancePackImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void generateAttributes(SceneObject* obj);

	unsigned int calculatePower(CreatureObject* enhancer, CreatureObject* patient, bool applyBattleFatigue);

	void setEffectiveness(float eff);

	void setDuration(float dur);

	void setAttribute(unsigned char value);

	float getEffectiveness();

	float getDuration();

	unsigned char getAttribute();

};

class EnhancePackHelper : public DistributedObjectClassHelper, public Singleton<EnhancePackHelper> {
	static EnhancePackHelper* staticInitializer;

public:
	EnhancePackHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class SingletonWrapper<EnhancePackHelper>;
};

#include "PharmaceuticalImplementation.h"

class EnhancePackServant : public PharmaceuticalImplementation {
public:
	EnhancePack* _this;

public:
	EnhancePackServant(unsigned long long oid, unsigned int tempCRC, const UnicodeString& n, const String& tempn, int mptype);
	EnhancePackServant(CreatureObject* creature, unsigned int tempCRC, const UnicodeString& n, const String& tempn, int mptype);
	virtual ~EnhancePackServant();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();

};

#endif /*ENHANCEPACK_H_*/
