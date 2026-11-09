// gml_Object_oBreakableCandle_Draw_0 @ 0x1408506d0

undefined8 *
gml_Object_oBreakableCandle_Draw_0
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script_anon@738@gml_Object_oBreakableCandle_Step_2";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_4c = 0xffffff;
  local_58 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 0x24;
  uStack_40 = CONCAT44(0xd,(undefined4)uStack_40);
  local_48 = 0;
  local_38 = 0;
  uStack_30 = uStack_40;
  FUN_140041b80(&local_58,&local_38);
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  FUN_140e87930(param_5,DAT_141a0a188,0x80000000,&local_58);
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

