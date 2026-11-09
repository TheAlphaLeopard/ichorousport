// gml_Script_ReferencePoint_anon_11579___InputClassVirtualButton___InputClassVirtualButton @ 0x14005c200

undefined8 *
gml_Script_ReferencePoint_anon_11579___InputClassVirtualButton___InputClassVirtualButton
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = 
  "gml_Script_FirstTouchOnly@anon@11238@__InputClassVirtualButton@__InputClassVirtualButton";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_6c = 0;
  local_78 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x19f;
  puVar5 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*param_5;
  }
  cVar1 = FUN_140e491e0(puVar4);
  if (cVar1 != '\0') {
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fe338);
    uStack_5c = 0;
    local_68 = 0;
    iVar2 = FUN_140e851f0(uVar3,&local_68,DAT_141955260,1);
    if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
    if (0 < iVar2) {
      local_48 = 0x19f;
      if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      local_78 = 0;
      local_70 = 0;
      local_6c = 5;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fe688);
      FUN_140e63610(param_1,param_2,&local_78,0,uVar3,0);
    }
  }
  local_48 = 0x1a1;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe0d8);
  FUN_140e609c0(param_1);
  if (0 < param_4) {
    puVar5 = (undefined8 *)*param_5;
  }
  if (puVar5 != puVar4) {
    local_68 = *puVar5;
    uStack_60 = *(undefined4 *)(puVar5 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_68);
  }
  FUN_140e60910(1);
  local_48 = 0x1a3;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar3 = FUN_140e5c910();
  FUN_140e42c10(uVar3,param_1);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

