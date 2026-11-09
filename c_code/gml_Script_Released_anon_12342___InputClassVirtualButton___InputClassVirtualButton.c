// gml_Script_Released_anon_12342___InputClassVirtualButton___InputClassVirtualButton @ 0x14005c880

undefined8 *
gml_Script_Released_anon_12342___InputClassVirtualButton___InputClassVirtualButton
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script_Pressed@anon@12067@__InputClassVirtualButton@__InputClassVirtualButton";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 0x1cb;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fe108);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_18 = 0x1cd;
    cVar2 = '\0';
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fde28);
    cVar1 = FUN_140e491e0(uVar3);
    if (cVar1 == '\0') {
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd828);
      cVar2 = FUN_140e491e0(uVar3);
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
    if (cVar2 != '\0') {
      uVar3 = 0x3ff0000000000000;
      goto LAB_14005c8f2;
    }
  }
  else {
    *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  }
  uVar3 = 0;
LAB_14005c8f2:
  *param_3 = uVar3;
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

