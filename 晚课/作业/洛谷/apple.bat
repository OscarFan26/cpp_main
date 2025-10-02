@echo off
if "%1"=="" goto loop
copy number%1.in number.in >nul
echo Problem Test
echo Data %1
time<enter
number.exe
time<enter
fc number.out number%1.ans
pause
goto end
:loop
for %%i in (1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20) do call %0 %%i
:end
del number.in
del number.out