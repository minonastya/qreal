#pragma once

//#include <qrkernel/ids.h>

//#include <interpreterBase/blocksBase/block.h>
//#include <interpreterBase/blocksBase/blockParserInterface.h>
//#include <interpreterBase/blocksBase/blocksTableInterface.h>
#include <interpreterBase/blocksBase/blocksFactoryInterface.h>
//#include <interpreterBase/robotModel/robotModelInterface.h>

namespace interpreterCore {
namespace coreBlocks {

class CoreBlocksFactory : public interpreterBase::blocksBase::BlocksFactoryInterface
{
public:
//	BlocksFactory(qReal::GraphicalModelAssistInterface const &graphicalModelApi
//			, qReal::LogicalModelAssistInterface const &logicalModelApi
//			, robotModel::RobotModelInterface * const robotModel
//			, qReal::ErrorReporterInterface * const errorReporter
//			);

	interpreterBase::blocksBase::BlockInterface *block(qReal::Id const &element) override;

	void setParser(interpreterBase::blocksBase::BlockParserInterface * const parser) override;

////	RobotsBlockParser * getParser();

	qReal::IdList providedBlocks() const override;

//private:
//	static bool elementMetatypeIs(qReal::Id const &element, QString const &metatype);
//	static qReal::Id id(QString const &metatype);

//	robotModel::RobotModelInterface * mRobotModel;  // Doesnt't have ownership
//	qReal::GraphicalModelAssistInterface const &mGraphicalModelApi;
//	qReal::LogicalModelAssistInterface const &mLogicalModelApi;
//	qReal::ErrorReporterInterface * const mErrorReporter;  // Doesn't have ownership
//	BlockParserInterface *mParser;
};

}
}