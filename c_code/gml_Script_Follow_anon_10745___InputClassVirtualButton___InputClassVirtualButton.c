// gml_Script_Follow_anon_10745___InputClassVirtualButton___InputClassVirtualButton @ 0x14005bb50

undefined8 *
gml_Script_Follow_anon_10745___InputClassVirtualButton___InputClassVirtualButton
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 local_78;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_Priority@anon@10372@__InputClassVirtualButton@__InputClassVirtualButton";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_6c = 0xffffff;
  local_78 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x172;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fe108);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_38 = 0x174;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fe658);
    puVar5 = &DAT_1419df7b0;
    if (param_4 < 1) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)*param_5;
    }
    iVar2 = FUN_140e851f0(uVar3,puVar4,DAT_141955260,0);
    if (iVar2 != 0) {
      local_38 = 0x176;
      puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe658);
      FUN_140e609c0(param_1);
      if (0 < param_4) {
        puVar5 = (undefined8 *)*param_5;
      }
      if (puVar5 != puVar4) {
        local_68 = *(undefined4 *)puVar5;
        uStack_64 = *(undefined4 *)((longlong)puVar5 + 4);
        uStack_60 = *(undefined4 *)(puVar5 + 1);
        uStack_5c = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        FUN_140041b80(puVar4,&local_68);
      }
      FUN_140e60910(1);
      local_38 = 0x177;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcb48);
      local_68 = 0;
      uStack_64 = 0x3ff00000;
      uStack_5c = 0xd;
      local_58 = 0;
      uStack_54 = 0x3ff00000;
      uStack_50 = uStack_60;
      uStack_4c = 0xd;
      if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      FUN_140041b80(&local_78,&local_58);
      FUN_140e87930(uVar3,DAT_1419fe0a8,0x80000000,&local_78);
    }
    local_38 = 0x17a;
  }
  else {
    local_38 = 0x172;
  }
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
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

