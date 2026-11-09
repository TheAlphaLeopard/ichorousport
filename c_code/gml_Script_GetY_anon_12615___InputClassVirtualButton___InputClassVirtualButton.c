// gml_Script_GetY_anon_12615___InputClassVirtualButton___InputClassVirtualButton @ 0x14005ca70

undefined8 *
gml_Script_GetY_anon_12615___InputClassVirtualButton___InputClassVirtualButton
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script_Released@anon@12342@__InputClassVirtualButton@__InputClassVirtualButton";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 0x1d9;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fe108);
  cVar1 = FUN_140e491e0(uVar2);
  if (cVar1 == '\0') {
    local_18 = 0x1db;
    bVar3 = false;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fde28);
    cVar1 = FUN_140e491e0(uVar2);
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd828);
      cVar1 = FUN_140e491e0(uVar2);
      bVar3 = cVar1 == '\0';
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
    if (bVar3) {
      uVar2 = 0x3ff0000000000000;
      goto LAB_14005cae2;
    }
  }
  else {
    *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  }
  uVar2 = 0;
LAB_14005cae2:
  *param_3 = uVar2;
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

