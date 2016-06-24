#include "TTree.h"
#include "TFile.h"
#include "TROOT.h"
#include "TSystem.h"
#include "TObject.h"
#include "TMath.h"
#include "TRandom.h"
#include "TChain.h"
#include "TPad.h"
#include "TStyle.h"
#include "TCanvas.h"
#include "TH1.h"
#include "TH1F.h"
#include "TH1D.h"
#include "TH2F.h"
#include "TH3.h"
#include "TH3F.h"
#include "TProfile.h"
#include "TF1.h"
#include "TGraph.h"
#include "TGraphErrors.h"
#include "TLine.h"
#include "TLegend.h"
#include "TLegendEntry.h"
#include "TCut.h"
#include "TPie.h"
#include "TPieSlice.h"
#include "TPaletteAxis.h"
#include "TPaveStats.h"
#include "TList.h"
#include "TMarker.h"
#include "TEllipse.h"
#include "TColor.h"
#include "TEventList.h"

#include "vector"
#include "string"
#include "iostream"
#include "fstream"
#include "stdio.h"
#include "stdlib.h"


void MicroscopicAnticorrelation()
{	
	gStyle	->SetOptStat(0);
	gStyle	->SetOptFit(0);

	//------ define color gradinet
	const Int_t NRGBs = 5;
    const Int_t NCont = 255;

    Double_t stops[NRGBs] = { 0.00, 0.34, 0.61, 0.84, 1.00 };
    Double_t red[NRGBs]   = { 0.00, 0.00, 0.87, 1.00, 0.51 };
    Double_t green[NRGBs] = { 0.00, 0.81, 1.00, 0.20, 0.00 };
    Double_t blue[NRGBs]  = { 0.51, 1.00, 0.12, 0.00, 0.00 };
    TColor::CreateGradientColorTable(NRGBs, stops, red, green, blue, NCont);
    //gStyle->SetNumberContours(NCont);
    gStyle->SetNumberContours(255);
	//--------------------------------------------------------------------------

	gStyle->SetStatBorderSize(0);
	gStyle->SetTitleBorderSize(0);
	gStyle->SetTitleFillColor(10);
	gStyle->SetStatColor(10);
	gStyle->SetStatFont(42);
	
	gStyle->SetMarkerStyle(1);
	gStyle->SetMarkerColor(1);



	const int N = 7;
	double x1[N] = {4.38891E+1,8.40478E+1,1.64393E+2,2.37488E+2,6.64782E+2,1.17484E+3,1.33298E+3};
	double y1[N] = {9.74920E-1,9.91507E-1,1.04413E+0,9.80092E-1,9.62577E-1,1.03657E+0,1.01403E+0};
	//double x2[N] = {4.27704E+1,8.29928E+1,1.68235E+2,2.39033E+2,6.64173E+2,1.17421E+3,1.33235E+3};
	//double y2[N] = {1.94361E-1,2.55393E-1,4.30225E-1,4.10640E-1,5.37575E-1,6.00452E-1,5.75139E-1};
	//double x3[N] = {4.31685E+1,8.32356E+1,1.65691E+2,2.36449E+2,6.63572E+2,1.17352E+3,1.33171E+3};
	//double y3[N] = {4.72140E-1,4.24838E-1,3.02451E-1,2.55088E-1,1.18129E-1,1.19895E-1,1.25136E-1};

	double x2[N] = {4.27704E+1,8.29928E+1,1.68235E+2,2.39033E+2,6.64173E+2,1.17421E+3,1.33235E+3};
	double y2[N] = {1.94361E-1*1.44,2.55393E-1*1.44,4.30225E-1*1.44,4.10640E-1*1.44,5.37575E-1*1.44,6.00452E-1*1.44,5.75139E-1*1.44};
	double x3[N] = {4.31685E+1,8.32356E+1,1.65691E+2,2.36449E+2,6.63572E+2,1.17352E+3,1.33171E+3};
	double y3[N] = {4.72140E-1*1.44,4.24838E-1*1.44,3.02451E-1*1.44,2.55088E-1*1.44,1.18129E-1*1.44,1.19895E-1*1.44,1.25136E-1*1.44};

	TGraph *gr1 = new TGraph (N, x1, y1);
			gr1->SetMarkerStyle(8);
			gr1->SetMarkerColor(1);
	TGraph *gr2 = new TGraph (N, x2, y2);
			gr2->SetMarkerStyle(8);
			gr2->SetMarkerColor(2);
	TGraph *gr3 = new TGraph (N, x3, y3);
			gr3->SetMarkerStyle(8);
			gr3->SetMarkerColor(4);
			
	TF1 *f1 = new TF1("f1","pol0",10, 1400);
		 f1->SetLineWidth(2);
		 f1->SetLineColor(1);
	TF1 *f2 = new TF1("f2","[0]+[1]*log(x)",10, 1400);
		 f2->SetLineWidth(2);
		 f2->SetLineColor(2);
	TF1 *f3 = new TF1("f3","[0]+[1]*log(x)",10, 1400);
		 f3->SetLineWidth(2);
		 f3->SetLineColor(4);
			
			
	TCanvas *c1 = new TCanvas("c1", "c1", 0, 0, 700, 500);
			 c1->SetFillColor(10);
		gr1->Draw("AP");
		gr1->SetMinimum(0.0);
		gr1->SetMaximum(1.1);
		gr1->Fit("f1");
		gr2->Draw("P");
		gr2->Fit("f2","R");
		gr3->Draw("P");
		gr3->Fit("f3","R");
		
		gr1->SetTitle("");
		gr2->SetTitle("");
		gr3->SetTitle("");
		f1->SetTitle("");
		f2->SetTitle("");
		f3->SetTitle("");

		gr1	-> GetXaxis() -> SetTitle("Energy [keV]");
		gr1	-> GetYaxis() -> SetTitle("Yield [arb. units]");
		gr1	-> GetXaxis() -> CenterTitle(true);
		gr1	-> GetYaxis() -> CenterTitle(true);

	c1->Update();
}