#pragma once

#include <qrutils/interpreter/block.h>

namespace qReal {
namespace interpretation {
namespace blocks {

class QRUTILS_EXPORT KillThreadBlock : public Block
{
	Q_OBJECT
public:
	void run() override;
};

}
}
}
