#ifndef HLTcore_TriggerSummaryAnalyzerAOD_h
#define HLTcore_TriggerSummaryAnalyzerAOD_h

/** \class TriggerSummaryAnalyzerAOD
 *
 *  
 *  This class is an EDAnalyzer analyzing the HLT summary object for AOD
 *
 *  $Date: 2008/04/11 17:02:52 $
 *  $Revision: 1.1 $
 *
 *  \author Martin Grunewald
 *
 */

#include "DataFormats/HLTReco/interface/TriggerEvent.h"
#include "FWCore/Framework/interface/Event.h"
#include "FWCore/Framework/interface/EDAnalyzer.h"
#include "FWCore/ParameterSet/interface/ParameterSet.h"
namespace edm {
  class ConfigurationDescriptions;
}

//
// class declaration
//
class TriggerSummaryAnalyzerAOD : public edm::EDAnalyzer {
  
 public:
  explicit TriggerSummaryAnalyzerAOD(const edm::ParameterSet&);
  ~TriggerSummaryAnalyzerAOD();
  static void fillDescriptions(edm::ConfigurationDescriptions & descriptions);
  virtual void analyze(const edm::Event&, const edm::EventSetup&);

 private:
  /// InputTag of TriggerEvent to analyze
  edm::InputTag                           inputTag_;
  edm::EDGetTokenT<trigger::TriggerEvent> inputToken_;

};
#endif
