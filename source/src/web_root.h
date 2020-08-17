#ifndef _WEB_ROOT_H
#define _WEB_ROOT_H
const char g_HTML_Web_root[] PROGMEM = R"=====(
<!DOCTYPE html><html lang="es"><head> <meta charset="UTF-8"> <meta name=viewport content="width=device-width, initial-scale=1"><title>testudines.org dataloger </title> <link rel="stylesheet" type="text/css" href="/css.css"><script src="/js.js"></script></head><body>
<div id="divbody">
<img  style="display:block; width:64px; margin: auto;" src="data:image/png;base64,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" alt="logo">
<h3 align="center">www.testudines.org<span><br/> Dataloger v0.9.1 -Auth.: V.Niclos</span></h3>
<div id="menu">
<input type="button"   class="btn" value="Home" onclick="fncClearDocument(false,false);fncGetHtml('scnBody','fncReadSensors');return false;"></button>
<input type="button"   class="btn" value="On" onclick="fncGetHtml('scnBodyTop','fncOn');return false;"></button>
<input type="button"   class="btn" value="Off" onclick="fncGetHtml('scnBodyTop','fncOff');return false;"></button>
<input type="button"   class="btn" value="Download" onclick="fncClearDocument(false,true);fncGetHtml('scnBody','download');return false;"></button>
<input type="button"   class="btn" value="Config" onclick="fncClearDocument(false,true);fncGetHtml('scnBody','config');fncCfgGetConfig();return false;"></button>
<input type="button"   class="btn" value="Charts" onclick="fncClearDocument(true,true);fncChartInit();return false;"></button>
<input type="button"   class="btn" value="Help" onclick="fncClearDocument(false,true);fncGetHtml('scnBody','fncHelp');return false;"></button>
</div>
<br/><div id="scnBodyTop">.</div>
<div id="scnBody"><b>Loading... Please wait a moment.</b></div>
<div id="scnChart" style="display: none"></div>
<div id="scnBodyBottom"></div>
<div id="scnBodyBottom2"></div></div>
</div>
<script src="jsapexchart.js"></script>
<script>
	function fncClearDocument(bShowChart, bClearBody) {

		document.getElementById("scnChart").innerHTML = "";
		document.getElementById("scnBodyBottom").innerHTML = "";
		var vDisplay = 'block';
		if (!bShowChart) {
			vDisplay = 'none';
		}
		document.getElementById('scnBodyTop').style.display = vDisplay;
		document.getElementById('scnChart').style.display = vDisplay;
		document.getElementById('scnBodyBottom2').style.display = vDisplay;
		if (bClearBody) {
			document.getElementById("scnBody").innerHTML = "";
			document.getElementById("scnBodyTop").innerHTML = "";
		}


	}
var g_fileName = "";
var g_CharTitle = "";
var g_CharTitleSub = "";
var g_chart;
var g_ChartDocumentById = '#scnChart';
var g_ChartId = 'ChartId';
var g_ChartTitle = "IOT Weather testudines.org";
var g_ChartSubtitle = "Please wait. rendering";
var g_ChartFileUrl = "";
var g_ChartOptions = [];
var g_aAxir = '';
var g_aTAir = '';
var g_aTSoil = '';
var g_aTSSoil = '';
var g_aHAir = '';
var g_aHSoil = '';
var g_aPAir = '';
var g_aLight = '';
var g_aTable = "";
var g_colors = ["#FF0000", "#ff6600", "#993333", "#0000cc", "#3366ff", "#666633", "#ff9900"];
var g_ChartData = [];
g_ChartData = [{
		name: 'T Air',
		data: []
	},
	{
		name: 'T Soil',
		data: []
	},
	{
		name: 'T Subsoil',
		data: []
	},
	{
		name: 'H Air',
		data: []
	},
	{
		name: 'H Soil',
		data: []
	},
	{
		name: 'Preaure',
		data: []
	},
	{
		name: 'Light',
		data: []
	},
];

function fnc_ChartSetup() {

	g_ChartOptions = {
		chart: {
			id: g_ChartId,
			height: 400,
			type: 'line',
			zoom: {
				enabled: false
			}
		},
		title: {
			text: g_CharTitle,
			align: 'center',
		},
		subtitle: {
			text: g_CharTitleSub,
			align: 'center',
		},
		dataLabels: {
			enabled: false
		},
		stroke: {
			curve: 'smooth'
		},
		colors: g_colors,
		series: g_ChartData,
		xaxis: {
			type: 'category',

			lines: {
				show: true,
			},
			labels: {
				show: false,
				style: {
					color: "#00ff00",
				},
				formatter: function (value) {
					var hhmm = "NaN";
					var s = "" + value;
					s = s.replace(' ', '#');
					var dt = s.split('#');
					var ymd = dt[0].split('/');
					var hms = dt[1].split(':');
					//var vReturn=ymd[0]+"/"+ymd[1]+'/'+ymd[2]+" "+hms[0]+":"+hms[1];
					var vReturn = ymd[0] + "/" + ymd[1] + '/' + ymd[2] + " " + hms[0] + ":" + hms[1];
					return vReturn;
				}
			},

		},

		yaxis: [{
				seriesName: 'yTemp',
				title: {
					text: "Temp. Celsious"
				},
				axisTicks: {
					show: true
				},
				axisBorder: {
					show: true,
					color: "#FF0000"
				},
				labels: {
					show: true,
					style: {
						color: "#FF0000"
					},
				},
				min: -20,
				max: 50,
			},
			{
				seriesName: 'yTemp',
				show: false,
				min: -20,
				max: 50,
			},
			{
				seriesName: 'yTemp',
				show: false,
				min: -20,
				max: 50,
			},
			{
				seriesName: 'yHumi',
				title: {
					text: "Humidity %"
				},
				axisTicks: {
					show: true
				},
				axisBorder: {
					show: true,
					color: "#0000CC"
				},
				labels: {
					style: {
						color: "#0000CC"
					}
				},
				min: 0,
				max: 100,
			},
			{
				seriesName: 'yPress',
				show: false,
				min: 0,
				max: 100,
			},
			{
				seriesName: 'yPress',
				title: {
					text: "Preasure Hpa"
				},
				opposite: true,
				axisTicks: {
					show: true
				},
				axisBorder: {
					show: true,
					color: "#336666"
				},
				labels: {
					style: {
						color: "#336666"
					}
				},
				min: 500,
				max: 2000,
			},
			{
				seriesName: 'yLux',
				title: {
					text: "light Lux"
				},
				opposite: true,
				axisTicks: {
					show: true
				},
				axisBorder: {
					show: true,
					color: "#ff9900"
				},
				labels: {
					style: {
						color: "#ff9900"
					}
				},
				min: 0,
				max: 63500,
			}
		],
		//--------------------------------
	}
	g_chart = new ApexCharts(document.querySelector(g_ChartDocumentById), g_ChartOptions);
	g_chart.render();
}

function fncChartAjaxGetFile(file) {
	var vData = ""
	g_fileName = file
	var urlFile = "/jsapexgetfile?file=" + file;
	var rawFile = new XMLHttpRequest();
	rawFile.open("GET", urlFile, true);
	rawFile.onreadystatechange = function () {
		if (rawFile.readyState === 4) {
			if (rawFile.status === 200 || rawFile.status == 0) {
				vData = rawFile.responseText;
				fncChartPlot(vData);
			}
		}
	}
	rawFile.send(null);
}

function fncChartParseAddPoint(aSerie, xDateTime, yVal, sep) {
	if (xDateTime == undefined) {
		return;
	}
	if (xDateTime == '') {
		return;
	}
	if (yVal == undefined) {
		yVal = null;
	}
	var aPoint = "";
	aPoint = sep + '{"x":"' + xDateTime + '", ';
	aPoint += '"y":' + yVal + '}';
	if (aSerie == 'g_aAxir') {
		g_aAxir += aPoint;
	} else if (aSerie == 'g_aTAir') {
		g_aTAir += aPoint;
	} else if (aSerie == 'g_aTSoil') {
		g_aTSoil += aPoint;
	} else if (aSerie == 'g_aTSSoil') {
		g_aTSSoil += aPoint;
	} else if (aSerie == 'g_aHAir') {
		g_aHAir += aPoint;
	} else if (aSerie == 'g_aHSoil') {
		g_aHSoil += aPoint;
	} else if (aSerie == 'g_aPAir') {
		g_aPAir += aPoint;
	} else if (aSerie == 'g_aLight') {
		g_aLight += aPoint;
	}
}

function fncChartPlot(vData) {
	if (vData == "") // no data in file o file no exist
	{
		document.getElementById('scnBodyTop').innerHTML = '<h5>Opps! No data for today</h5>';
		document.getElementById('scnBody').innerHTML = '<p>At this time this station has not yet collected data for today.</br> That may be for:</p><ul><li>Dataloguer are stoped</li><li>This time is less than firt time to save data (1 hour)</li><li>SD are not inside</li><li>No free space in SD</li><li> Broken SD Card</li><ul> <p> Please, you can select other data file below>';
		document.getElementById("scnChart").innerHTML = '';
		fncGetHtml('scnBodyBottom2', 'chartsFileList');
		document.getElementById('scnBodyTop').style.display = 'block';
		document.getElementById('scnBody').style.display = 'block';
		document.getElementById('scnBodyBottom').style.display = 'block';
		document.getElementById('scnChart').style.display = 'none';
		document.getElementById('scnBodyBottom2').style.display = block;
		return false;
	}
	g_aAxir = '[';
	g_aTAir = '[';
	g_aTSoil = '[';
	g_aTSSoil = '[';
	g_aHAir = '[';
	g_aHSoil = '[';
	g_aPAir = '[';
	g_aLight = '[';
	var aLines = vData.split(/\r?\n/);
	var aVal = [];
	var sep = '';
	aVal = aLines[1].split(';');
	var szHeadHtml = "<fieldset><legend>Dataloger Station</legend>";
	szHeadHtml += "<br/><span class='fldtit'>Id. Name :</span><span class='fldvalue'>" + aVal[0]+"</span>";
	szHeadHtml += "<br/><span class='fldtit'>Id. Location:</span><span class='fldvalue'>" + aVal[1]+"</span>";
	szHeadHtml += "<br/><span class='fldtit'>Id. Location Gps:</span><span class='fldvalue'>" +  aVal[2]+"</span>";
	szHeadHtml += "<br/><span class='fldtit'>File:</span><span class='fldvalue'>" + g_fileName+"</span>";
szHeadHtml += "</fieldset>";
	document.getElementById("scnBodyTop").innerHTML = szHeadHtml;
	g_aTable = "<h5>Data</h5><table class='tablegray'><thead>";
	g_aTable += "<tr><th width='20%'>Date Time</th><th colspan='3' width='30%'>Temperature C</th><th  colspan='2'width='20%'>Humidity</th><th width='12%'>Preasure</th><th>Light</th><tr>\n";
	g_aTable += "<tr><th>y/m/d h:m</th><th>Air</th><th>Soil</th><th>Subsoil</th><th>Air</th><th>Soil</th><th>hpa</th><th>Lux</th><tr>\n";
	g_aTable += "</thead><tbody>";
	for (i = 1; i < aLines.length; i++) {
		aVal = aLines[i].split(';');
		if (aVal[0] == undefined) {
			return;
		}
		sDateTime = aVal[3] + " " + aVal[4] + ":00";

		fncChartParseAddPoint('g_aTAir', sDateTime, aVal[6], sep);
		fncChartParseAddPoint('g_aTSoil', sDateTime, aVal[9], sep);
		fncChartParseAddPoint('g_aTSSoil', sDateTime, aVal[12], sep);
		fncChartParseAddPoint('g_aHAir', sDateTime, aVal[15], sep);
		fncChartParseAddPoint('g_aHSoil', sDateTime, aVal[18], sep);
		fncChartParseAddPoint('g_aPAir', sDateTime, aVal[21], sep);
		fncChartParseAddPoint('g_aLight', sDateTime, aVal[24], sep);
		sep = ', ';
		g_aTable += "<tr><td>" + aVal[3] + " " + aVal[4] + "</td>";
		g_aTable += "<td>" + aVal[6] + "</td>";
		g_aTable += "<td>" + aVal[9] + "</td>";
		g_aTable += "<td>" + aVal[12] + "</td>";
		g_aTable += "<td>" + aVal[15] + "</td>";
		g_aTable += "<td>" + aVal[18] + "</td>";
		g_aTable += "<td>" + aVal[21] + "</td>";
		g_aTable += "<td>" + aVal[24] + "</td></tr>\n";
	}
	g_aTable += "</table>";
	g_aTable += "<p>Remember: </b> This is a summary of data of the day, You can download the complete data, with minimum, maximum and average, by downloading the file here.</p";
	
	document.getElementById("scnBodyBottom").innerHTML = g_aTable;
	g_aAxir += ']';
	g_aTAir += ']';
	g_aTSoil += ']';
	g_aTSSoil += ']';
	g_aHAir += ']';
	g_aHSoil += ']';
	g_aPAir += ']';
	g_aLight += ']';

	g_ChartData[0].data = JSON.parse(g_aTAir); // temp air
	g_ChartData[1].data = JSON.parse(g_aTSoil); // temp soil
	g_ChartData[2].data = JSON.parse(g_aTSSoil); //temp subsoil
	g_ChartData[3].data = JSON.parse(g_aHAir); // humidity air
	g_ChartData[4].data = JSON.parse(g_aHSoil); //humidity soil
	g_ChartData[5].data = JSON.parse(g_aPAir); //pression air
	g_ChartData[6].data = JSON.parse(g_aLight); //light

	g_CharTitle = aVal[0];
	g_CharTitleSub = aVal[1] + " " + aVal[3];
	document.getElementById('scnChart').style.display = 'block';
	document.getElementById('scnBodyBottom2').style.display = 'block';
	g_ChartOptions.title.text = g_CharTitle;
	g_ChartOptions.subtitle.text = g_CharTitleSub;
	var fileNameShort=g_fileName.replace('/',"");
	g_ChartOptions.id=fileNameShort.replace('.csv',"");
	ApexCharts.exec(g_ChartId, 'updateOptions', g_ChartOptions, true);
	ApexCharts.exec(g_ChartId, 'updateSeries', g_ChartData, true);

	fncGetHtml('scnBodyBottom2', 'chartsFileList');
}

function fncChartInit() {
	//g_CharTitle="Loading";
	//g_CharTitleSub= "Please Wait";
	fnc_ChartSetup();
	fncChartAjaxGetFile("/today");
};
</script>

<script>window.onload = function() {fncGetHtml('scnBody','fncReadSensors');return false;};</script>
</body></html>
)=====";
#endif
