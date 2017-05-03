#!/bin/sh

gnome-terminal --geometry=60x20+10+100  -e "python applicationLayerHTTPServer.py"
gnome-terminal --geometry=60x20+10+10   -e "python transportLayerServer.py"
gnome-terminal --geometry=60x20+700+10  -e "python internetLayerServer.py" 
gnome-terminal --geometry=60x20+10+100  -e "python physicalLayerServer.py"


gnome-terminal --geometry=60x20+10+100  -e "python physicalLayerClient.py"
gnome-terminal --geometry=60x20+700+10  -e "python internetLayerClient.py" 
gnome-terminal --geometry=60x20+10+10   -e "python transportLayerClient.py"
gnome-terminal --geometry=60x20+10+100  -e "python applicationLayerHTTPClient.py"
