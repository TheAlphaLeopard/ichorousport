// gml_Script_scribble_super_clear @ 0x14048cc30

ulonglong *
gml_Script_scribble_super_clear
          (undefined8 param_1,undefined8 param_2,ulonglong *param_3,int param_4,undefined8 *param_5)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script_scribble_rgb_to_bgr";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 8;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
    uVar2 = FUN_140e4a8b0(&DAT_1419df7b0);
    lVar3 = FUN_140e4a8b0(&DAT_1419df7b0);
  }
  else {
    uVar2 = FUN_140e4a8b0(*param_5);
    lVar3 = FUN_140e4a8b0(*param_5);
    param_5 = (undefined8 *)*param_5;
  }
  bVar1 = FUN_140e4a8b0(param_5);
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 10;
  *param_3 = (ulonglong)bVar1 << 0x10 | lVar3 >> 0x10 & 0xffU | uVar2 & 0xff00ff00;
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

