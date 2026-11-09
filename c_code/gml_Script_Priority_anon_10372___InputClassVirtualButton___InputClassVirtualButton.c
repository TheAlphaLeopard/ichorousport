// gml_Script_Priority_anon_10372___InputClassVirtualButton___InputClassVirtualButton @ 0x14005b880

undefined8 *
gml_Script_Priority_anon_10372___InputClassVirtualButton___InputClassVirtualButton
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_Active@anon@10021@__InputClassVirtualButton@__InputClassVirtualButton";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_5c = 0;
  local_68 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x161;
  uVar2 = (**(code **)(*param_1 + 8))(0,DAT_1419fe108);
  cVar1 = FUN_140e491e0(uVar2);
  if (cVar1 == '\0') {
    local_38 = 0x164;
    puVar4 = &DAT_1419df7b0;
    if (param_4 < 1) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)*param_5;
    }
    cVar1 = FUN_140e491e0(puVar3);
    if (cVar1 == '\0') {
      uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fe118);
      cVar1 = FUN_140e491e0(uVar2);
      if (cVar1 != '\0') {
        local_38 = 0x164;
        if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_68);
        }
        local_68 = 0;
        local_60 = 0;
        local_5c = 5;
        uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fe688);
        FUN_140e63610(param_1,param_2,&local_68,0,uVar2,0);
      }
    }
    local_38 = 0x166;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe118);
    FUN_140e609c0(param_1);
    if (0 < param_4) {
      puVar4 = (undefined8 *)*param_5;
    }
    if (puVar4 != puVar3) {
      local_58 = *(undefined4 *)puVar4;
      uStack_54 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_50 = *(undefined4 *)(puVar4 + 1);
      uStack_4c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_58);
    }
    FUN_140e60910(1);
    local_38 = 0x168;
  }
  else {
    local_38 = 0x161;
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar2 = FUN_140e5c910();
  FUN_140e42c10(uVar2,param_1);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

