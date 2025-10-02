@echo off
if "%1"=="" goto loop
copy a%1.in a.in >nul
echo Problem Test
echo Aata %1
time<enter
a
time<enter
fc a.out a%1.out
del a.in
del a.out
pause
goto end
:loop
for %%i in (1 2 3 4 5) do call %0 %%i
:end