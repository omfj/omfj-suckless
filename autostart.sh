#!/usr/bin/env bash

lxpolkit &
#pgrep emacs || emacs --daemon &
picom --experimental-backends &
xsetroot -cursor_name left_ptr &
$HOME/.fehbg &
dwmblocks
mount-drives
