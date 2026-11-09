// gml_Script____struct___260_anon_18058_DefineTrinkets_TRINKETSINIT @ 0x1405f6710

undefined8 *
gml_Script____struct___260_anon_18058_DefineTrinkets_TRINKETSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script____struct___259@anon@17856@DefineTrinkets@TRINKETSINIT";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_18 = 0x2d1;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de0cb8) {
    _Init_thread_header(&DAT_141de0cb8);
    if (DAT_141de0cb8 == -1) {
      DAT_141de0cc0 = FUN_140e63aa0(DAT_1419ffe88);
      _Init_thread_footer(&DAT_141de0cb8);
    }
  }
  FUN_140e643a0(param_1,DAT_141de0cc0);
  local_18 = 0x2d2;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5da8);
  FUN_140e609c0(param_1);
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  if (param_5 != puVar1) {
    local_38 = *(undefined4 *)param_5;
    uStack_34 = *(undefined4 *)((longlong)param_5 + 4);
    uStack_30 = *(undefined4 *)(param_5 + 1);
    uStack_2c = *(undefined4 *)((longlong)param_5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  FUN_140e60910(1);
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

