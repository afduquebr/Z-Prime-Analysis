#include "TROOT.h"
#include "TChain.h"
#include "TFile.h"
#include "TProof.h"

void main_ZPrime(int proof)
{
  // path to your local directory *or* URL, please change the default one!
  /* Local path example */
  TString path = "http://opendata.atlas.cern/release/samples/MC/";


  TChain* chain_WW = new TChain("mini");
  chain_WW->AddFile(path+"mc_105985.WW.root");
  chain_WW->Process("ZprimeAnalysis.C+","WW");

  TChain* chain_ZZ = new TChain("mini");
  chain_ZZ->AddFile(path+"mc_105986.ZZ.root");
  chain_ZZ->Process("ZprimeAnalysis.C+","ZZ");

  TChain* chain_WZ = new TChain("mini");
  chain_WZ->AddFile(path+"mc_105987.WZ.root");
  chain_WZ->Process("ZprimeAnalysis.C+","WZ");

  TChain* chain_stop_tchan_top = new TChain("mini");
  chain_stop_tchan_top->AddFile(path+"mc_110090.stop_tchan_top.root");
  chain_stop_tchan_top->Process("ZprimeAnalysis.C+","stop_tchan_top");

  TChain* chain_stop_tchan_antitop = new TChain("mini");
  chain_stop_tchan_antitop->AddFile(path+"mc_110091.stop_tchan_antitop.root");
  chain_stop_tchan_antitop->Process("ZprimeAnalysis.C+","stop_tchan_antitop");

  TChain* chain_stop_schan = new TChain("mini");
  chain_stop_schan->AddFile(path+"mc_110119.stop_schan.root");
  chain_stop_schan->Process("ZprimeAnalysis.C+","stop_schan");

  TChain* chain_stop_wtchan = new TChain("mini");
  chain_stop_wtchan->AddFile(path+"mc_110140.stop_wtchan.root");
  chain_stop_wtchan->Process("ZprimeAnalysis.C+","stop_wtchan");


  TChain* chain_ZPrime400 = new TChain("mini");
  chain_ZPrime400->AddFile(path+"mc_110899.ZPrime400.root");
  chain_ZPrime400->Process("ZprimeAnalysis.C+","ZPrime400");

  TChain* chain_ZPrime500 = new TChain("mini");
  chain_ZPrime500->AddFile(path+"mc_110901.ZPrime500.root");
  chain_ZPrime500->Process("ZprimeAnalysis.C+","ZPrime500");

  TChain* chain_ZPrime750 = new TChain("mini");
  chain_ZPrime750->AddFile(path+"mc_110902.ZPrime750.root");
  chain_ZPrime750->Process("ZprimeAnalysis.C+","ZPrime750");

  TChain* chain_ZPrime1000 = new TChain("mini");
  chain_ZPrime1000->AddFile(path+"mc_110903.ZPrime1000.root");
  chain_ZPrime1000->Process("ZprimeAnalysis.C+","ZPrime1000");

  TChain* chain_ZPrime1250 = new TChain("mini");
  chain_ZPrime1250->AddFile(path+"mc_110904.ZPrime1250.root");
  chain_ZPrime1250->Process("ZprimeAnalysis.C+","ZPrime1250");

  TChain* chain_ZPrime1500 = new TChain("mini");
  chain_ZPrime1500->AddFile(path+"mc_110905.ZPrime1500.root");
  chain_ZPrime1500->Process("ZprimeAnalysis.C+","ZPrime1500");

  TChain* chain_ZPrime1750 = new TChain("mini");
  chain_ZPrime1750->AddFile(path+"mc_110906.ZPrime1750.root");
  chain_ZPrime1750->Process("ZprimeAnalysis.C+","ZPrime1750");

  TChain* chain_ZPrime2000 = new TChain("mini");
  chain_ZPrime2000->AddFile(path+"mc_110907.ZPrime2000.root");
  chain_ZPrime2000->Process("ZprimeAnalysis.C+","ZPrime2000");

  TChain* chain_ZPrime2250 = new TChain("mini");
  chain_ZPrime2250->AddFile(path+"mc_110908.ZPrime2250.root");
  chain_ZPrime2250->Process("ZprimeAnalysis.C+","ZPrime2250");

  TChain* chain_ZPrime2500 = new TChain("mini");
  chain_ZPrime2500->AddFile(path+"mc_110909.ZPrime2500.root");
  chain_ZPrime2500->Process("ZprimeAnalysis.C+","ZPrime2500");

  TChain* chain_ZPrime3000 = new TChain("mini");
  chain_ZPrime3000->AddFile(path+"mc_110910.ZPrime3000.root");
  chain_ZPrime3000->Process("ZprimeAnalysis.C+","ZPrime3000");


  TChain* chain_ttbar_had = new TChain("mini");
  chain_ttbar_had->AddFile(path+"mc_117049.ttbar_had.root");
  chain_ttbar_had->Process("ZprimeAnalysis.C+","ttbar_had");

  TChain* chain_ttbar_lep = new TChain("mini");
  chain_ttbar_lep->AddFile(path+"mc_117050.ttbar_lep.root");
  chain_ttbar_lep->Process("ZprimeAnalysis.C+","ttbar_lep");

  TChain* chain_Z_ee = new TChain("mini");
  chain_Z_ee->AddFile(path+"mc_147770.Zee.root");
  chain_Z_ee->Process("ZprimeAnalysis.C+","Zee");

  TChain* chain_Z_mumu = new TChain("mini");
  chain_Z_mumu->AddFile(path+"mc_147771.Zmumu.root");
  chain_Z_mumu->Process("ZprimeAnalysis.C+","Zmumu");

  TChain* chain_Z_tautau = new TChain("mini");
  chain_Z_tautau->AddFile(path+"mc_147772.Ztautau.root");
  chain_Z_tautau->Process("ZprimeAnalysis.C+","Ztautau");


  TChain* chain_ggH125_ZZ4lep = new TChain("mini");
  chain_ggH125_ZZ4lep->AddFile(path+"mc_160155.ggH125_ZZ4lep.root");
  chain_ggH125_ZZ4lep->Process("ZprimeAnalysis.C+","ggH125_ZZ4lep");

  TChain* chain_VBFH125_ZZ4lep = new TChain("mini");
  chain_VBFH125_ZZ4lep->AddFile(path+"mc_160205.VBFH125_ZZ4lep.root");
  chain_VBFH125_ZZ4lep->Process("ZprimeAnalysis.C+","VBFH125_ZZ4lep");


  TChain* chain_ggH125_WW2lep = new TChain("mini");
  chain_ggH125_WW2lep->AddFile(path+"mc_161005.ggH125_WW2lep.root");
  chain_ggH125_WW2lep->Process("ZprimeAnalysis.C+","ggH125_WW2lep");

  TChain* chain_VBFH125_WW2lep = new TChain("mini");
  chain_VBFH125_WW2lep->AddFile(path+"mc_161055.VBFH125_WW2lep.root");
  chain_VBFH125_WW2lep->Process("ZprimeAnalysis.C+","VBFH125_WW2lep");

  TChain* chain_WenuWithB = new TChain("mini");
  chain_WenuWithB->AddFile(path+"mc_167740.WenuWithB.root");
  chain_WenuWithB->Process("ZprimeAnalysis.C+","WenuWithB");

  TChain* chain_WenuJetsBVeto = new TChain("mini");
  chain_WenuJetsBVeto->AddFile(path+"mc_167741.WenuJetsBVeto.root");
  chain_WenuJetsBVeto->Process("ZprimeAnalysis.C+","WenuJetsBVeto");

  TChain* chain_WenuNoJetsBVeto = new TChain("mini");
  chain_WenuNoJetsBVeto->AddFile(path+"mc_167742.WenuNoJetsBVeto.root");
  chain_WenuNoJetsBVeto->Process("ZprimeAnalysis.C+","WenuNoJetsBVeto");

  TChain* chain_WmunuWithB = new TChain("mini");
  chain_WmunuWithB->AddFile(path+"mc_167743.WmunuWithB.root");
  chain_WmunuWithB->Process("ZprimeAnalysis.C+","WmunuWithB");

  TChain* chain_WmunuJetsBVeto = new TChain("mini");
  chain_WmunuJetsBVeto->AddFile(path+"mc_167744.WmunuJetsBVeto.root");
  chain_WmunuJetsBVeto->Process("ZprimeAnalysis.C+","WmunuJetsBVeto");

  TChain* chain_WmunuNoJetsBVeto = new TChain("mini");
  chain_WmunuNoJetsBVeto->AddFile(path+"mc_167745.WmunuNoJetsBVeto.root");
  chain_WmunuNoJetsBVeto->Process("ZprimeAnalysis.C+","WmunuNoJetsBVeto");

  TChain* chain_WtaunuWithB = new TChain("mini");
  chain_WtaunuWithB->AddFile(path+"mc_167746.WtaunuWithB.root");
  chain_WtaunuWithB->Process("ZprimeAnalysis.C+","WtaunuWithB");

  TChain* chain_WtaunuJetsBVeto = new TChain("mini");
  chain_WtaunuJetsBVeto->AddFile(path+"mc_167747.WtaunuJetsBVeto.root");
  chain_WtaunuJetsBVeto->Process("ZprimeAnalysis.C+","WtaunuJetsBVeto");

  TChain* chain_WtaunuNoJetsBVeto = new TChain("mini");
  chain_WtaunuNoJetsBVeto->AddFile(path+"mc_167748.WtaunuNoJetsBVeto.root");
  chain_WtaunuNoJetsBVeto->Process("ZprimeAnalysis.C+","WtaunuNoJetsBVeto");

  TChain* chain_DYeeM08to15 = new TChain("mini");
  chain_DYeeM08to15->AddFile(path+"mc_173041.DYeeM08to15.root");
  chain_DYeeM08to15->Process("ZprimeAnalysis.C+","DYeeM08to15");

  TChain* chain_DYeeM15to40 = new TChain("mini");
  chain_DYeeM15to40->AddFile(path+"mc_173042.DYeeM15to40.root");
  chain_DYeeM15to40->Process("ZprimeAnalysis.C+","DYeeM15to40");

  TChain* chain_DYmumuM08to15 = new TChain("mini");
  chain_DYmumuM08to15->AddFile(path+"mc_173043.DYmumuM08to15.root");
  chain_DYmumuM08to15->Process("ZprimeAnalysis.C+","DYmumuM08to15");

  TChain* chain_DYmumuM15to40 = new TChain("mini");
  chain_DYmumuM15to40->AddFile(path+"mc_173044.DYmumuM15to40.root");
  chain_DYmumuM15to40->Process("ZprimeAnalysis.C+","DYmumuM15to40");

  TChain* chain_DYtautauM08to15 = new TChain("mini");
  chain_DYtautauM08to15->AddFile(path+"mc_173045.DYtautauM08to15.root");
  chain_DYtautauM08to15->Process("ZprimeAnalysis.C+","DYtautauM08to15");

  TChain* chain_DYtautauM15to40 = new TChain("mini");
  chain_DYtautauM15to40->AddFile(path+"mc_173046.DYtautauM15to40.root");
  chain_DYtautauM15to40->Process("ZprimeAnalysis.C+","DYtautauM15to40");


  TChain* chain_data = new TChain("mini");
  chain_data->AddFile(path+"DataEgamma.root");
  chain_data->AddFile(path+"DataMuons.root");
  chain_data->Process("ZprimeAnalysis.C+","data");


  if (proof == 1)
  {
    TProof::Open("");

    chain_WW->SetProof();
    chain_WZ->SetProof();
    chain_ZZ->SetProof();
    chain_stop_tchan_top->SetProof();
    chain_stop_tchan_antitop->SetProof();
    chain_stop_schan->SetProof();
    chain_stop_wtchan->SetProof();
    chain_ZPrime400->SetProof();
    chain_ZPrime500->SetProof();
    chain_ZPrime750->SetProof();
    chain_ZPrime1000->SetProof();
    chain_ZPrime1250->SetProof();
    chain_ZPrime1500->SetProof();
    chain_ZPrime1750->SetProof();
    chain_ZPrime2000->SetProof();
    chain_ZPrime2250->SetProof();
    chain_ZPrime2500->SetProof();
    chain_ZPrime3000->SetProof();
    chain_ttbar_had->SetProof();
    chain_ttbar_lep->SetProof();
    chain_Z_ee->SetProof();
    chain_Z_mumu->SetProof();
    chain_Z_tautau->SetProof();
    chain_ggH125_ZZ4lep->SetProof();
    chain_VBFH125_ZZ4lep->SetProof();
    chain_ggH125_WW2lep->SetProof();
    chain_VBFH125_WW2lep->SetProof();
    chain_WenuWithB->SetProof();
    chain_WenuJetsBVeto->SetProof();
    chain_WenuNoJetsBVeto->SetProof();
    chain_WmunuWithB->SetProof();
    chain_WmunuJetsBVeto->SetProof();
    chain_WmunuNoJetsBVeto->SetProof();
    chain_WtaunuWithB->SetProof();
    chain_WtaunuJetsBVeto->SetProof();
    chain_WtaunuNoJetsBVeto->SetProof();
    chain_DYeeM08to15->SetProof();
    chain_DYeeM15to40->SetProof();
    chain_DYmumuM08to15->SetProof();
    chain_DYmumuM15to40->SetProof();
    chain_DYtautauM08to15->SetProof();
    chain_DYtautauM15to40->SetProof();
    chain_data->SetProof();

  }

}

/*
TTbarAnalysis
WAnalysis
WZAnalysis
ZAnalysis
ZZAnalysis
ZPrimeAnalysis
HWWAnalysis
*/
