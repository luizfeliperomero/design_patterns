#pragma once

class Command {
	public:
		virtual ~Command() = default;
		virtual void Execute() = 0;
		virtual void Unexecute() = 0;
};
