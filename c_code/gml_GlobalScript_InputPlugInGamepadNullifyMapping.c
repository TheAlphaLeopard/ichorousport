// gml_GlobalScript_InputPlugInGamepadNullifyMapping @ 0x14035a920

undefined8 *
gml_GlobalScript_InputPlugInGamepadNullifyMapping
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  *(undefined4 *)((longlong)param_3 + 0xc) = 0;
  *param_3 = 0;
  return param_3;
}

