/*
 * objects.h
 *
 *  Created on: Sep 19, 2010
 *      Author: oru
 */

#ifndef OBJECTS_H_
#define OBJECTS_H_

#include "server/zone/objects/creature/CreatureObject.h"
#include "server/zone/objects/creature/NonPlayerCreatureObject.h"
#include "server/zone/objects/creature/Creature.h"
#include "server/zone/objects/creature/VehicleObject.h"
#include "server/zone/objects/creature/shuttle/ShuttleCreature.h"
#include "server/zone/objects/intangible/IntangibleObject.h"
#include "server/zone/objects/intangible/VehicleControlDevice.h"
#include "server/zone/objects/tangible/Container.h"
#include "server/zone/objects/tangible/TangibleObject.h"
#include "server/zone/objects/tangible/Instrument.h"
#include "server/zone/objects/tangible/consumable/Food.h"
#include "server/zone/objects/tangible/consumable/Drink.h"
#include "server/zone/objects/player/PlayerCreature.h"
#include "server/zone/objects/player/PlayerObject.h"
#include "server/zone/objects/creature/trainer/TrainerCreature.h"
#include "server/zone/objects/creature/junkdealer/JunkdealerCreature.h"
#include "server/zone/objects/creature/informant/InformantCreature.h"
#include "server/zone/objects/cell/CellObject.h"
#include "server/zone/objects/staticobject/StaticObject.h"
#include "server/zone/objects/group/GroupObject.h"
#include "server/zone/objects/guild/GuildObject.h"
#include "server/zone/objects/tangible/weapon/WeaponObject.h"
#include "server/zone/objects/tangible/tool/CraftingTool.h"
#include "server/zone/objects/tangible/tool/CraftingStation.h"
#include "server/zone/objects/tangible/tool/ToolTangibleObject.h"
#include "server/zone/objects/tangible/tool/SurveyTool.h"
#include "server/zone/objects/tangible/tool/smuggler/SlicingTool.h"
#include "server/zone/objects/tangible/tool/smuggler/PrecisionLaserKnife.h"
#include "server/zone/objects/building/BuildingObject.h"
#include "server/zone/objects/building/cloning/CloningBuildingObject.h"
#include "server/zone/objects/building/medical/MedicalBuildingObject.h"
#include "server/zone/objects/building/recreation/RecreationBuildingObject.h"
#include "server/zone/objects/building/travel/TravelBuildingObject.h"
#include "server/zone/objects/building/tutorial/TutorialBuildingObject.h"
#include "server/zone/objects/building/city/CityHallObject.h"
#include "server/zone/objects/manufactureschematic/ManufactureSchematic.h"
#include "server/zone/objects/installation/InstallationObject.h"
#include "server/zone/objects/installation/factory/FactoryObject.h"
#include "server/zone/objects/factorycrate/FactoryCrate.h"
#include "server/zone/objects/installation/shuttle/ShuttleInstallation.h"
#include "server/zone/objects/installation/garage/GarageInstallation.h"
#include "server/zone/objects/installation/generator/GeneratorObject.h"
#include "server/zone/objects/installation/harvester/HarvesterObject.h"
#include "server/zone/objects/tangible/component/Component.h"
#include "server/zone/objects/tangible/component/armor/ArmorComponent.h"
#include "server/zone/objects/tangible/deed/Deed.h"
#include "server/zone/objects/tangible/deed/vehicle/VehicleDeed.h"
#include "server/zone/objects/tangible/deed/building/BuildingDeed.h"
#include "server/zone/objects/tangible/deed/installation/InstallationDeed.h"
#include "server/zone/objects/tangible/deed/resource/ResourceDeed.h"
#include "server/zone/objects/tangible/wearables/ArmorObject.h"
#include "server/zone/objects/tangible/wearables/PsgArmorObject.h"
#include "server/zone/objects/tangible/wearables/ClothingObject.h"
#include "server/zone/objects/tangible/terminal/Terminal.h"
#include "server/zone/objects/tangible/lair/LairObject.h"
#include "server/zone/objects/tangible/terminal/characterbuilder/CharacterBuilderTerminal.h"
#include "server/zone/objects/tangible/terminal/elevator/ElevatorTerminal.h"
#include "server/zone/objects/tangible/terminal/startinglocation/StartingLocationTerminal.h"
#include "server/zone/objects/tangible/terminal/bank/BankTerminal.h"
#include "server/zone/objects/tangible/terminal/ticketcollector/TicketCollector.h"
#include "server/zone/objects/tangible/terminal/travel/TravelTerminal.h"
#include "server/zone/objects/tangible/terminal/guild/GuildTerminal.h"
#include "server/zone/objects/tangible/ticket/TicketObject.h"
#include "server/zone/objects/tangible/pharmaceutical/StimPack.h"
#include "server/zone/objects/tangible/pharmaceutical/RangedStimPack.h"
#include "server/zone/objects/tangible/pharmaceutical/EnhancePack.h"
#include "server/zone/objects/tangible/pharmaceutical/CurePack.h"
#include "server/zone/objects/tangible/pharmaceutical/RevivePack.h"
#include "server/zone/objects/tangible/pharmaceutical/StatePack.h"
#include "server/zone/objects/tangible/pharmaceutical/DotPack.h"
#include "server/zone/objects/tangible/pharmaceutical/WoundPack.h"
#include "server/zone/objects/tangible/terminal/bazaar/BazaarTerminal.h"
#include "server/zone/objects/tangible/terminal/city/CityTerminal.h"
#include "server/zone/objects/tangible/terminal/city/CityVoteTerminal.h"
#include "server/zone/objects/tangible/terminal/elevator/ElevatorTerminal.h"
#include "server/zone/objects/tangible/terminal/mission/MissionTerminal.h"
#include "server/zone/objects/tangible/terminal/structure/StructureTerminal.h"
#include "server/zone/objects/tangible/terminal/cloning/CloningTerminal.h"
#include "server/zone/objects/tangible/sign/SignObject.h"
#include "server/zone/objects/mission/MissionObject.h"
#include "server/zone/objects/waypoint/WaypointObject.h"
#include "server/zone/objects/tangible/fishing/FishingPoleObject.h"
#include "server/zone/objects/tangible/fishing/FishObject.h"
#include "server/zone/objects/tangible/fishing/FishingBaitObject.h"
#include "server/zone/objects/tangible/firework/FireworkObject.h"
#include "server/zone/objects/tangible/loot/LootkitObject.h"
#include "server/zone/objects/tangible/camp/CampKit.h"
#include "server/zone/objects/tangible/terminal/gambling/GamblingTerminal.h"
#include "server/zone/objects/resource/ResourceSpawn.h"
#include "server/zone/objects/resource/ResourceContainer.h"

#include "server/zone/objects/area/BadgeActiveArea.h"
#include "server/zone/objects/area/GarageArea.h"
#include "server/zone/objects/region/Region.h"
#include "server/zone/objects/area/MissionSpawnActiveArea.h"
#include "server/zone/objects/area/MissionReconActiveArea.h"
#include "server/zone/objects/area/DynamicSpawnArea.h"
#include "server/zone/objects/area/StaticSpawnArea.h"

#include "server/zone/objects/creature/aigroup/AiGroup.h"
#include "server/zone/objects/creature/aigroup/HerdGroup.h"
#include "server/zone/objects/creature/aigroup/PackGroup.h"
#include "server/zone/objects/creature/aigroup/LairGroup.h"

#endif /* OBJECTS_H_ */
