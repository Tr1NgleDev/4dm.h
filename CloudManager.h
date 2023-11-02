#pragma once

#include "4dm.h"
#include "CloudChunk.h"

namespace fdm 
{
	class CloudManager 
	{
	public:
		inline static const float updateDelay = NULL; 
		float lastUpdateTime; 
		glm::vec3 offset; // 0x8
		glm::vec3 velocity; // 0x14
		uint32_t seed; // 0x20
		PAD(0x4);
		std::unordered_map<glm::i64vec3,std::unique_ptr<CloudChunk>> chunks; // 0x28
		std::atomic_bool chunksReady; // 0x68
		PAD(0x3);
		std::atomic_int loadedChunks; // 0x6C
		std::vector<CloudChunk*> newChunks; // 0x70
		std::atomic_bool shouldStopLoading; // 0x88
		PAD(0x7);
		std::thread chunkLoadingThread; // 0x90

		~CloudManager() 
		{
			reinterpret_cast<void(__thiscall*)(CloudManager* self)>(FUNC_CLOUDMANAGER_DESTR_CLOUDMANAGER)(this);
		}
		void render(const m4::Mat5& MV, const glm::mat4& P, int matUniformID) 
		{
			return reinterpret_cast<void (__thiscall*)(CloudManager* self, const m4::Mat5& MV, const glm::mat4& P, int matUniformID)>(FUNC_CLOUDMANAGER_RENDER)(this, MV, P, matUniformID);
		}
		void updateChunks(const glm::vec4& pos, const glm::vec4& over, unsigned char renderDistance) 
		{
			return reinterpret_cast<void (__thiscall*)(CloudManager* self, const glm::vec4& pos, const glm::vec4& over, unsigned char renderDistance)>(FUNC_CLOUDMANAGER_UPDATECHUNKS)(this, pos, over, renderDistance);
		}
		void unloadAllChunks() 
		{
			return reinterpret_cast<void (__thiscall*)(CloudManager* self)>(FUNC_CLOUDMANAGER_UNLOADALLCHUNKS)(this);
		}
		void loadChunks() 
		{
			return reinterpret_cast<void (__thiscall*)(CloudManager* self)>(FUNC_CLOUDMANAGER_LOADCHUNKS)(this);
		}
		void updateChunk(const glm::i64vec3& coords) 
		{
			return reinterpret_cast<void (__thiscall*)(CloudManager* self, const glm::i64vec3& coords)>(FUNC_CLOUDMANAGER_UPDATECHUNK)(this, coords);
		}
	};
}
