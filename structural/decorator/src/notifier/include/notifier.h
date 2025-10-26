#pragma once

#include <string>
#include <memory>


class Notifier {
	public:
		virtual void Notify(std::string message) = 0;
		virtual ~Notifier() = default;
		static std::unique_ptr<Notifier> GetDefault();
};
