This is my first hardware project I've ever did! I've made a lot of mistakes making it this far; I lost the count on  how many times I redesigned both the PCB and the case being sure it would be the last time.

It should be about fine for the first revisions imo.

On the PCB I'd maybe just put the mcu on the other side (again). Other than that, there doesn't seems to be much else to be improve on the PCB, though some silly art on the silkscreen could be added.

The case however is a different story. Neither do I like the way it looks nor can I come up with a way to make it look better. Only towards the end of the my time working on this I looked at others' hackpads; I found several intersting designs.

# vl_macropad

vl_macropad is an 8 key macropad with a rotary encoder, using QMK firmware. The mcu used is the Xiao RP2040

# Features

 - 8 mechanical MX-style switches(soldered)
 - An EC11 rotary encoder
 - 8 SK6812MINI-E LEDs for backlight(I hope)

# CAD Model

The structure of this macropad is heavily inspired* by the sandwich-style structure of mechanical keyboards. 

There are no heatset inserts used in this design to keep the profile a little bit smaller(though it could be smaller imo). It's (supposed to be) held together by 4 16mm M3 screws that are exactly about 16mm long because otherwise the top part will break or not be held down properly.


> Some 3d renders I got a bit carried away making
> 
>![An overall render of the macropad from fusion](assets/macropad_entire.png)
![A render of the macropad withot the top part](assets/macropad_topless.png)
![A render of the macropad's PCB - switch - plate - keycap assembly](assets/macropad_fullboard_plate.png)
![A render of the switches in the plate](assets/macropad_plate_switches.png)

# PCB

The PCB which is a 2-layer one I made in kicad. This is the result after a couple of iterations.

> Schematic
>
> ![Schematic](assets/schematic.png)

> PCB
>
> ![The PCB design](assets/pcb.png)
> ![The PCB render](assets/pcb_render.png)
> ![Another render of the PCB](assets/pcb_render2.png)

The pcb is 99.06mm x 41.91mm in size.

# Firmware

The firmware in use is QMK.

At the moment I have no idea whether the firmware works at all

# Layout

## Base layer(BL)

the *default* behaviour

Encoder CW/CCW - volume up/down; press - mute

|  |  |  |  |
|---|---|---|---|
| media - previous | media - next | media - play/pause | fn |
| F17 | F18 | F19 | F20 |

The functions keys in the second were actually supposed to go from 13 to 16

## Function layer(FL)

Accessed holding the fn key

Encoder CW/CCW - media rewind/fast-forward; press - lights toggle

|  |  |  |  |
|---|---|---|---|
| lights hue - up | lights saturation - up | lights brightness - up | fn |
| lights hue - down | lights saturation - down | lights brightness - up | lights effect - next (i'm like 99% thats what it should do) |

# BOM

| Item | Qty |
|---|---|
| 1N4148 DO-35 diode | 8 |
| SK6812MINI-E LED | 8 |
| cherry MX switches | 8 |
| DSA keycap | 8 |
| EC11 Rotary encoder | 1 |
| XIAO RP2040 | 1 |
| M3x16mm SHCS bolt | 4 |
| Case (3 printed parts) | 1 |
| PCB | 1 |
