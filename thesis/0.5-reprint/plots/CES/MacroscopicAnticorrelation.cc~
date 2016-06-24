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


void MacroscopicAnticorrelation()
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



	const int N = 5;
	double x1[N] = {1.79374E-1,4.77849E-1,9.86938E-1,1.98865E+0,3.98381E+0};
	double y1[N] = {9.88369E-1,1.01519E+0,1.00136E+0,9.94975E-1,9.94617E-1};
	double x2[N] = {1.86917E-1,4.84086E-1,9.84028E-1,1.98519E+0,3.97998E+0};
	double y2[N] = {4.75624E-1,5.91159E-1,6.50063E-1,6.80936E-1,7.05416E-1};
	double x3[N] = {1.86238E-1,4.86383E-1,9.96333E-1,1.99854E+0,3.98596E+0};
	double y3[N] = {5.21753E-1,4.35029E-1,3.62648E-1,3.22552E-1,2.99124E-1};

	TGraph *gr1 = new TGraph (N, x1, y1);
			gr1->SetMarkerStyle(8);
			gr1->SetMarkerColor(1);
	TGraph *gr2 = new TGraph (N, x2, y2);
			gr2->SetMarkerStyle(8);
			gr2->SetMarkerColor(2);
	TGraph *gr3 = new TGraph (N, x3, y3);
			gr3->SetMarkerStyle(8);
			gr3->SetMarkerColor(4);
			
	TF1 *f1 = new TF1("f1","pol0",0.05, 4.5);
		 f1->SetLineWidth(2);
		 f1->SetLineColor(1);
	TF1 *f2 = new TF1("f2","[0]+[1]*log(x)",0.05, 4.5);
		 f2->SetLineWidth(2);
		 f2->SetLineColor(2);
	TF1 *f3 = new TF1("f3","[0]+[1]*log(x)",0.05, 4.5);
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

		gr1	-> GetXaxis() -> SetTitle("Electric field [kV/cm]");
		gr1	-> GetYaxis() -> SetTitle("Yield [arb. units]");
		gr1	-> GetXaxis() -> SetRangeUser(0.0, 5.0);
		gr1	-> GetXaxis() -> CenterTitle(true);
		gr1	-> GetYaxis() -> CenterTitle(true);

	c1->Update();
}