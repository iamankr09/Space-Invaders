#include "../../header/Player/PlayerService.h"
#include "../../header/Player/PlayerController.h"
#include "../../header/Global/ServiceLocator.h"
#include "../../header/Collision/ICollider.h"

namespace Player
{
	using namespace Global;
	using namespace Collision;

	PlayerService::PlayerService()
	{
		player_controller = new PlayerController();
	}

	PlayerService::~PlayerService()
	{
		ServiceLocator::getInstance()->getCollisionService()->removeCollider(dynamic_cast<ICollider*>(player_controller));
		delete (player_controller);
	}

	void PlayerService::initialize()
	{
		player_controller->initialize();
		ServiceLocator::getInstance()->getCollisionService()->addCollider(dynamic_cast<ICollider*>(player_controller));
	}

	void PlayerService::update()
	{
		player_controller->update();
	}

	void PlayerService::render()
	{
		player_controller->render();
	}

	void PlayerService::reset()
	{
		player_controller->reset();
	}
}