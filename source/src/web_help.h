//javascripts

#ifndef _WEB_HELP_H
#define _WEB_HELP_H
const char g_HTML_Web_Help[] PROGMEM = R"=====(
    <h2>Help IOT Dataloguer testudines</h2>
<fieldset><legend>Index</legend>
<ul>
<li>1  What I do?<a href="#cap01">go</a></li>
<li>2  Quick Start</li>
<li>3  Main Menu</li>
<li>4  Main Page</li>
<li>5  Config Page</li>
<li>6  Dowload data</li>
<li>7  Update firmware</li>
<li>8  Reset factory</li>
<li>9  Charts</li>
<li>10 FAQ</li>
<li>11 Software</li>
<li>12 Hardware</li>
<li>13 Contact<li>
<ul>
</fieldset>
<fieldset><legend><a name="cap01">1  What I do?</a></legend> here text1</fieldset>
<fieldset><legend><a name="cap02">2  Quick Start</a></legend> here text2</fieldset>
<fieldset><legend><a name="cap03">3  Main Menu</a></legend> here text3</fieldset>
<fieldset><legend><a name="cap04">4  Main Page</a></legend> here text4</fieldset>
<fieldset><legend><a name="cap05">5  Config Page</a></legend> here text5</fieldset>
<fieldset><legend><a name="cap06">6  Dowload data</a></legend> here text6</fieldset>
<fieldset><legend><a name="cap07">7  Update firmware</a></legend> here text7</fieldset>
<fieldset><legend><a name="cap08">8  Reset factory</a></legend> here text8</fieldset>
<fieldset><legend><a name="cap09">9  Charts</a></legend> here text9</fieldset>
<fieldset><legend><a name="cap10">10 FAQ</a></legend>
<h5>Lux interpretation</h5>
<table>
<tr><td>Lux</td><td>Light level</td><td>Nivel de luz ambiantal</td></tr>
<tr><td>120000</td><td>Sun brighter daylight</td><td>Luz diurna mas brillante</td></tr>
<tr><td>110000</td><td>Bright daylight</td><td>lux	Luz diurna brillante</td></tr>
<tr><td>20000</td><td>Shadow illuminated by a completely blue sky, at noon.</td><td>Sombra iluminada por un cielo completamente azul, al mediodia.</td></tr>
<tr><td>10000 - 25000 </td><td>ypical cloudy or midday day.</td><td>T?pico dia nublado o al mediodia.</td></tr>
<tr><td>400</td><td>lux Ortho or sunset on a clear day (ambient lighting)</td><td>Orto u ocaso en un dia claro (iluminacion ambiental)</td></tr>
<tr><td><200</td><td>lux End of the darkest tempestuous clouds and at noon.</td><td>Ocuridad por nubes tormentosas durante el dia</td></tr>
<tr><td>40</td><td>Completely cloudy, at sunrise / sunset.</td><td>Completamente nublado gris</td></tr>  
<tr><td>>10</td><td>End of the darkest tempestuous clouds, in the ortho / sunset.</td><td>Nubes tormentosa en el ocaso.</td></tr>
</table>

</fieldset>
<fieldset><legend><a name="cap11">11 Software</a></legend> here text11</fieldset>
<fieldset><legend><a name="cap12">12 Hardware</a></legend> here text12</fieldset>
<fieldset><legend><a name="cap13">12 Contact</a></legend> here text13</fieldset>
)=====";
#endif
