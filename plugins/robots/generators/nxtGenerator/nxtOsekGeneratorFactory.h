#pragma once

#include <generatorBase/generatorFactoryBase.h>

namespace nxtOsek {

class NxtOsekGeneratorFactory : public generatorBase::GeneratorFactoryBase
{
public:
	NxtOsekGeneratorFactory(qrRepo::RepoApi const &repo
			, qReal::ErrorReporterInterface &errorReporter
			, interpreterBase::robotModel::RobotModelManagerInterface const &robotModelManager);
	virtual ~NxtOsekGeneratorFactory();

	QString pathToTemplates() const override;

	generatorBase::simple::Binding::ConverterInterface *stringPropertyConverter() const override;
};

}
