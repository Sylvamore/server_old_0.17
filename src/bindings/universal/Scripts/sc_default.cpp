/*
 * MaNGOS is a full featured server for World of Warcraft, supporting
 * the following clients: 1.12.x, 2.4.3, 3.3.5a, 4.3.4a and 5.4.8
 *
 * Copyright (C) 2005-2018  MaNGOS project <https://getmangos.eu>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * World of Warcraft, and all World of Warcraft or Warcraft art, images,
 * and lore are copyrighted by Blizzard Entertainment, Inc.
 */

#include "sc_defines.h"

bool GossipHello_default(Player* /*player*/, Creature* /*_Creature*/)
{
    return false;
}

bool GossipSelect_default(Player* /*player*/, Creature* /*_Creature*/, uint32 /*sender*/, uint32 /*action*/)
{
    return false;
}

bool GossipSelectWithCode_default(Player* /*player*/, Creature* /*_Creature*/, uint32 /*sender*/, uint32 /*action*/, const char* /*sCode*/)
{
    return false;
}

bool QuestAccept_default(Player* /*player*/, Creature* /*_Creature*/, Quest const* /*_Quest*/)
{
    return false;
}

bool QuestSelect_default(Player* /*player*/, Creature* /*_Creature*/, Quest const* /*_Quest*/)
{
    return false;
}

bool QuestComplete_default(Player* /*player*/, Creature* /*_Creature*/, Quest const* /*_Quest*/)
{
    return false;
}

bool ChooseReward_default(Player* /*player*/, Creature* /*_Creature*/, Quest const* /*_Quest*/, uint32 /*opt*/)
{
    return false;
}

uint32 NPCDialogStatus_default(Player* /*player*/, Creature* /*_Creature*/)
{
    return 128;
}

uint32 GODialogStatus_default(Player* /*player*/, GameObject* /*_Creature*/)
{
    return 128;
}

bool ItemHello_default(Player* /*player*/, Item* /*_Item*/, Quest const* /*_Quest*/)
{
    return false;
}

bool ItemQuestAccept_default(Player* /*player*/, Item* /*_Item*/, Quest const* /*_Quest*/)
{
    return false;
}

bool GOHello_default(Player* /*player*/, GameObject* /*_GO*/)
{
    return false;
}

bool GOQuestAccept_default(Player* /*player*/, GameObject* /*_GO*/, Quest const* /*_Quest*/)
{
    return false;
}

bool GOChooseReward_default(Player* /*player*/, GameObject* /*_GO*/, Quest const* /*_Quest*/, uint32 /*opt*/)
{
    return false;
}

bool AreaTrigger_default(Player* /*player*/, AreaTriggerEntry const* /*atEntry*/)
{
    return false;
}

void AddSC_default()
{
    Script* newscript;

    newscript = new Script;
    newscript->Name = "default";
    newscript->pGossipHello          = &GossipHello_default;
    newscript->pQuestAccept          = &QuestAccept_default;
    newscript->pGossipSelect         = &GossipSelect_default;
    newscript->pGossipSelectWithCode = &GossipSelectWithCode_default;
    newscript->pQuestSelect          = &QuestSelect_default;
    newscript->pQuestComplete        = &QuestComplete_default;
    newscript->pNPCDialogStatus      = &NPCDialogStatus_default;
    newscript->pGODialogStatus       = &GODialogStatus_default;
    newscript->pChooseReward         = &ChooseReward_default;
    newscript->pItemHello            = &ItemHello_default;
    newscript->pGOHello              = &GOHello_default;
    newscript->pAreaTrigger          = &AreaTrigger_default;
    newscript->pItemQuestAccept      = &ItemQuestAccept_default;
    newscript->pGOQuestAccept        = &GOQuestAccept_default;
    newscript->pGOChooseReward       = &GOChooseReward_default;

    newscript->registerSelf();
}
