/*
Copyright (C) 2007 <SWGEmu>

This File is part of Core3.

This program is free software; you can redistribute
it and/or modify it under the terms of the GNU Lesser
General Public License as published by the Free Software
Foundation; either version 2 of the License,
or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
See the GNU Lesser General Public License for
more details.

You should have received a copy of the GNU Lesser General
Public License along with this program; if not, write to
the Free Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA

Linking Engine3 statically or dynamically with other modules
is making a combined work based on Engine3.
Thus, the terms and conditions of the GNU Lesser General Public License
cover the whole combination.

In addition, as a special exception, the copyright holders of Engine3
give you permission to combine Engine3 program with free software
programs or libraries that are released under the GNU LGPL and with
code included in the standard release of Core3 under the GNU LGPL
license (or modified versions of such code, with unchanged license).
You may copy and distribute such a system following the terms of the
GNU LGPL for Engine3 and the licenses of the other code concerned,
provided that you include the source code of that other code when
and as the GNU LGPL requires distribution of source code.

Note that people who make modified versions of Engine3 are not obligated
to grant this special exception for their modified versions;
it is their choice whether to do so. The GNU Lesser General Public License
gives permission to release a modified version without this exception;
this exception also makes it possible to release a modified version
which carries forward this exception.
*/

/*
 *	server/zone/ZoneServer.cpp generated by Engine3 IDL compiler 0.51
 */

#include "objects/scene/SceneObject.h"

#include "managers/user/UserManager.h"

#include "managers/guild/GuildManager.h"

#include "managers/player/PlayerManager.h"

#include "managers/item/ItemManager.h"

#include "managers/resource/ResourceManager.h"

#include "managers/bazaar/BazaarManager.h"

#include "../chat/ChatManager.h"

#include "Zone.h"

#include "ZoneServer.h"

#include "ZoneServerImplementation.h"

/*
 *	ZoneServerStub
 */

ZoneServer::ZoneServer() : ORBObjectStub(NULL) {
}

ZoneServer::ZoneServer(ORBObjectServant* obj) : ORBObjectStub(obj) {
}

ZoneServer::ZoneServer(ZoneServer& ref) : ORBObjectStub(ref) {
}

ZoneServer::~ZoneServer() {
}

ZoneServer* ZoneServer::clone() {
	return new ZoneServer(*this);
}


void ZoneServer::startManagers() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 6);

		invocation.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->startManagers();
}

void ZoneServer::addObject(SceneObject* obj, bool doLock) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 7);
		invocation.addObjectParameter(obj);
		invocation.addBooleanParameter(doLock);

		invocation.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->addObject(obj, doLock);
}

SceneObject* ZoneServer::getObject(unsigned long long oid, bool doLock) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 8);
		invocation.addUnsignedLongParameter(oid);
		invocation.addBooleanParameter(doLock);

		return (SceneObject*) invocation.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getObject(oid, doLock);
}

SceneObject* ZoneServer::removeObject(unsigned long long oid, bool doLock) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 9);
		invocation.addUnsignedLongParameter(oid);
		invocation.addBooleanParameter(doLock);

		return (SceneObject*) invocation.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->removeObject(oid, doLock);
}

SceneObject* ZoneServer::removeCachedObject(unsigned long long oid, bool doLock) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 10);
		invocation.addUnsignedLongParameter(oid);
		invocation.addBooleanParameter(doLock);

		return (SceneObject*) invocation.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->removeCachedObject(oid, doLock);
}

bool ZoneServer::banUser(string& name, string& admin) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 11);
		invocation.addAsciiParameter(name);
		invocation.addAsciiParameter(admin);

		return invocation.executeWithBooleanReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->banUser(name, admin);
}

void ZoneServer::changeUserCap(int amount) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 12);
		invocation.addSignedIntParameter(amount);

		invocation.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->changeUserCap(amount);
}

void ZoneServer::addTotalSentPacket(int count) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 13);
		invocation.addSignedIntParameter(count);

		invocation.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->addTotalSentPacket(count);
}

void ZoneServer::addTotalResentPacket(int count) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 14);
		invocation.addSignedIntParameter(count);

		invocation.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->addTotalResentPacket(count);
}

void ZoneServer::lock() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 15);

		invocation.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->lock();
}

void ZoneServer::unlock() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 16);

		invocation.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->unlock();
}

ChatManager* ZoneServer::getChatManager() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 17);

		return (ChatManager*) invocation.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getChatManager();
}

GuildManager* ZoneServer::getGuildManager() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 18);

		return (GuildManager*) invocation.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getGuildManager();
}

PlayerManager* ZoneServer::getPlayerManager() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 19);

		return (PlayerManager*) invocation.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getPlayerManager();
}

UserManager* ZoneServer::getUserManager() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 20);

		return (UserManager*) invocation.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getUserManager();
}

ItemManager* ZoneServer::getItemManager() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 21);

		return (ItemManager*) invocation.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getItemManager();
}

ResourceManager* ZoneServer::getResourceManager() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 22);

		return (ResourceManager*) invocation.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getResourceManager();
}

BazaarManager* ZoneServer::getBazaarManager() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 23);

		return (BazaarManager*) invocation.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getBazaarManager();
}

Zone* ZoneServer::getZone(int index) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 24);
		invocation.addSignedIntParameter(index);

		return (Zone*) invocation.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getZone(index);
}

string& ZoneServer::getServerName() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 25);

		invocation.executeWithAsciiReturn(_return_getServerName);
		return _return_getServerName;
	} else
		return ((ZoneServerImplementation*) _impl)->getServerName();
}

int ZoneServer::getConnectionCount() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 26);

		return invocation.executeWithSignedIntReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getConnectionCount();
}

unsigned long long ZoneServer::getNextCreatureID(bool doLock) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 27);
		invocation.addBooleanParameter(doLock);

		return invocation.executeWithUnsignedLongReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getNextCreatureID(doLock);
}

/*
 *	ZoneServerAdapter
 */

ZoneServerAdapter::ZoneServerAdapter(ZoneServerImplementation* obj) : ORBObjectAdapter((ORBObjectServant*) obj) {
}

Packet* ZoneServerAdapter::invokeMethod(uint32 methid, ORBMethodInvocation* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		startManagers();
		break;
	case 7:
		addObject((SceneObject*) inv->getObjectParameter(), inv->getBooleanParameter());
		break;
	case 8:
		resp->insertLong(getObject(inv->getUnsignedLongParameter(), inv->getBooleanParameter())->_getORBObjectID());
		break;
	case 9:
		resp->insertLong(removeObject(inv->getUnsignedLongParameter(), inv->getBooleanParameter())->_getORBObjectID());
		break;
	case 10:
		resp->insertLong(removeCachedObject(inv->getUnsignedLongParameter(), inv->getBooleanParameter())->_getORBObjectID());
		break;
	case 11:
		resp->insertBoolean(banUser(inv->getAsciiParameter(_param0_banUser__string_string_), inv->getAsciiParameter(_param1_banUser__string_string_)));
		break;
	case 12:
		changeUserCap(inv->getSignedIntParameter());
		break;
	case 13:
		addTotalSentPacket(inv->getSignedIntParameter());
		break;
	case 14:
		addTotalResentPacket(inv->getSignedIntParameter());
		break;
	case 15:
		lock();
		break;
	case 16:
		unlock();
		break;
	case 17:
		resp->insertLong(getChatManager()->_getORBObjectID());
		break;
	case 18:
		resp->insertLong(getGuildManager()->_getORBObjectID());
		break;
	case 19:
		resp->insertLong(getPlayerManager()->_getORBObjectID());
		break;
	case 20:
		resp->insertLong(getUserManager()->_getORBObjectID());
		break;
	case 21:
		resp->insertLong(getItemManager()->_getORBObjectID());
		break;
	case 22:
		resp->insertLong(getResourceManager()->_getORBObjectID());
		break;
	case 23:
		resp->insertLong(getBazaarManager()->_getORBObjectID());
		break;
	case 24:
		resp->insertLong(getZone(inv->getSignedIntParameter())->_getORBObjectID());
		break;
	case 25:
		resp->insertAscii(getServerName());
		break;
	case 26:
		resp->insertSignedInt(getConnectionCount());
		break;
	case 27:
		resp->insertLong(getNextCreatureID(inv->getBooleanParameter()));
		break;
	default:
		return NULL;
	}

	return resp;
}

void ZoneServerAdapter::startManagers() {
	return ((ZoneServerImplementation*) impl)->startManagers();
}

void ZoneServerAdapter::addObject(SceneObject* obj, bool doLock) {
	return ((ZoneServerImplementation*) impl)->addObject(obj, doLock);
}

SceneObject* ZoneServerAdapter::getObject(unsigned long long oid, bool doLock) {
	return ((ZoneServerImplementation*) impl)->getObject(oid, doLock);
}

SceneObject* ZoneServerAdapter::removeObject(unsigned long long oid, bool doLock) {
	return ((ZoneServerImplementation*) impl)->removeObject(oid, doLock);
}

SceneObject* ZoneServerAdapter::removeCachedObject(unsigned long long oid, bool doLock) {
	return ((ZoneServerImplementation*) impl)->removeCachedObject(oid, doLock);
}

bool ZoneServerAdapter::banUser(string& name, string& admin) {
	return ((ZoneServerImplementation*) impl)->banUser(name, admin);
}

void ZoneServerAdapter::changeUserCap(int amount) {
	return ((ZoneServerImplementation*) impl)->changeUserCap(amount);
}

void ZoneServerAdapter::addTotalSentPacket(int count) {
	return ((ZoneServerImplementation*) impl)->addTotalSentPacket(count);
}

void ZoneServerAdapter::addTotalResentPacket(int count) {
	return ((ZoneServerImplementation*) impl)->addTotalResentPacket(count);
}

void ZoneServerAdapter::lock() {
	return ((ZoneServerImplementation*) impl)->lock();
}

void ZoneServerAdapter::unlock() {
	return ((ZoneServerImplementation*) impl)->unlock();
}

ChatManager* ZoneServerAdapter::getChatManager() {
	return ((ZoneServerImplementation*) impl)->getChatManager();
}

GuildManager* ZoneServerAdapter::getGuildManager() {
	return ((ZoneServerImplementation*) impl)->getGuildManager();
}

PlayerManager* ZoneServerAdapter::getPlayerManager() {
	return ((ZoneServerImplementation*) impl)->getPlayerManager();
}

UserManager* ZoneServerAdapter::getUserManager() {
	return ((ZoneServerImplementation*) impl)->getUserManager();
}

ItemManager* ZoneServerAdapter::getItemManager() {
	return ((ZoneServerImplementation*) impl)->getItemManager();
}

ResourceManager* ZoneServerAdapter::getResourceManager() {
	return ((ZoneServerImplementation*) impl)->getResourceManager();
}

BazaarManager* ZoneServerAdapter::getBazaarManager() {
	return ((ZoneServerImplementation*) impl)->getBazaarManager();
}

Zone* ZoneServerAdapter::getZone(int index) {
	return ((ZoneServerImplementation*) impl)->getZone(index);
}

string& ZoneServerAdapter::getServerName() {
	return ((ZoneServerImplementation*) impl)->getServerName();
}

int ZoneServerAdapter::getConnectionCount() {
	return ((ZoneServerImplementation*) impl)->getConnectionCount();
}

unsigned long long ZoneServerAdapter::getNextCreatureID(bool doLock) {
	return ((ZoneServerImplementation*) impl)->getNextCreatureID(doLock);
}

/*
 *	ZoneServerHelper
 */

ORBClassHelper* ZoneServerHelper::instance = new ZoneServerHelper();

ZoneServerHelper::ZoneServerHelper() {
	className = "ZoneServer";

	ObjectRequestBroker::instance()->registerClass(className, this);
}

ORBClassHelper* ZoneServerHelper::getInstance() {
	if (instance == NULL)
		return instance = new ZoneServerHelper();
	else
		return instance;
}

ORBObject* ZoneServerHelper::instantiateObject() {
	return new ZoneServer();
}

ORBObjectAdapter* ZoneServerHelper::createAdapter(ORBObjectServant* obj) {
	ORBObjectAdapter* adapter = new ZoneServerAdapter((ZoneServerImplementation*)obj);

	ORBObjectStub* stub = new ZoneServer(obj);
	stub->_setORBClassName(className);
	stub->_setClassHelper(this);

	adapter->setStub(stub);

	obj->_setStub(stub);

	return adapter;
}

/*
 *	ZoneServerServant
 */

ZoneServerServant::ZoneServerServant() {
	_classHelper = ZoneServerHelper::getInstance();
}

ZoneServerServant::~ZoneServerServant() {
}
void ZoneServerServant::_setStub(ORBObjectStub* stub) {
	_this = (ZoneServer*) stub;
}

ORBObjectStub* ZoneServerServant::_getStub() {
	return _this;
}

