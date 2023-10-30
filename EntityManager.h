#pragma once

#include "4dm.h"

namespace fdm 
{
	class EntityManager 
	{
	public:
		std::unordered_map<uuid, std::unique_ptr<Entity>> entities;
		std::unordered_map<glm::ivec4,uuid> blockEntities; // 0x40

		std::unique_ptr<Entity> extract(const uuid& id) 
		{
			return reinterpret_cast<std::unique_ptr<Entity> (__thiscall*)(EntityManager* self, const uuid& id)>(FUNC_ENTITYMANAGER_EXTRACT)(this, id);
		}
		Entity* get(const uuid& id) 
		{
			return reinterpret_cast<Entity* (__thiscall*)(EntityManager* self, const uuid& id)>(FUNC_ENTITYMANAGER_GET)(this, id);
		}
		Entity* getBlockEntity(const glm::ivec4& pos) 
		{
			return reinterpret_cast<Entity* (__thiscall*)(EntityManager* self, const glm::ivec4& pos)>(FUNC_ENTITYMANAGER_GETBLOCKENTITY)(this, pos);
		}
	};
}
