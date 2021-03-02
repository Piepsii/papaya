#pragma once

#include <game/state.hpp>
#include <input/keyboard.hpp>

namespace papaya
{
	class Runtime;
} // !papaya

namespace runner
{
	class PlayState;

	class MenuState : public papaya::State
	{
	public:
		MenuState(papaya::Runtime &runtime, PlayState *play);

		virtual papaya::State *next() const;
		virtual bool update(const papaya::Time &deltaTime);
		virtual void render(papaya::Renderer &renderer);

	private:
		papaya::Runtime &runtime_;
		const papaya::Keyboard &keyboard_;
		papaya::State *next_;
		PlayState *play_;
	};
} // !runner