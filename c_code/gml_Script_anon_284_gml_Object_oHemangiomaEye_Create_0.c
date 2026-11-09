// gml_Script_anon_284_gml_Object_oHemangiomaEye_Create_0 @ 0x140b04270

void gml_Script_anon_284_gml_Object_oHemangiomaEye_Create_0(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  longlong *local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Object_oGrubTarg_Step_0";
  local_38 = 0;
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_4c = 0xffffff;
  local_58 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  uVar2 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_38 = 4;
  local_bc = 6;
  local_c8 = param_1;
  FUN_140e87440(&local_c8,DAT_141a0a7e8,0,&local_58,0,0);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_bc = 0;
  local_c8 = (longlong *)&DAT_bff0000000000000;
  iVar1 = FUN_140e851f0(&local_58,&local_c8,DAT_141955260,0);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if (iVar1 == 0) {
    local_38 = 6;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a848);
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f34e8);
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f34d8);
    FUN_140e85f80(param_1,DAT_141a00d18,0x80000000,&local_98);
    local_9c = *(uint *)((longlong)puVar3 + 0xc);
    local_a0 = *(undefined4 *)(puVar3 + 1);
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) == 0) {
      local_a8 = *puVar3;
    }
    else {
      FUN_1400419b0(&local_a8,puVar3);
    }
    FUN_140042560(&local_a8,uVar4);
    if ((local_9c & 0xffffff) == 0) {
      uVar6 = (undefined4)local_a8;
    }
    else {
      uVar6 = FUN_140e4b060(&local_a8);
    }
    local_c8 = (longlong *)thunk_FUN_1412ac390(uVar6);
    local_bc = 0;
    FUN_140042560(&local_c8,uVar5);
    local_ac = local_8c;
    local_b0 = local_90;
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) == 0) {
      local_b8 = local_98;
    }
    else {
      FUN_1400419b0(&local_b8,&local_98);
    }
    uStack_5c = 0;
    local_68 = 0x4000000000000000;
    FUN_140046500(&local_b8,&local_68);
    if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
    uStack_7c = local_ac;
    uStack_80 = local_b0;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) == 0) {
      local_88 = local_b8;
    }
    else {
      FUN_1400419b0(&local_88,&local_b8);
    }
    FUN_1400460e0(&local_88,&local_c8);
    local_68 = local_88;
    uStack_60 = uStack_80;
    uStack_5c = uStack_7c;
    if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_68);
    if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_78);
    local_38 = 7;
    uVar4 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
    FUN_140e609c0(param_1);
    FUN_1400460e0(uVar4,uVar2);
    FUN_140e60910(1);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return;
}

