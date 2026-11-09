// gml_Object_oStuckObject_Step_0 @ 0x140da0f20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oStuckObject_Step_0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined4 local_68 [3];
  byte local_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined4 *local_30;
  
  local_50 = "gml_Object_oSteam_Step_0";
  local_48 = 0;
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  uVar6 = 1;
  _eh_vector_constructor_iterator_(local_88,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_bc = 0xffffff;
  local_c8 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_48 = 2;
  uVar2 = CONCAT44(uVar6,DAT_1419febf8);
  FUN_140e634e0(param_1,param_2,&local_c8,0,uVar2,0);
  uVar6 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_48 = 4;
  uVar2 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a01308);
  uVar2 = FUN_1400bdd80(uVar2);
  uStack_9c = 0;
  local_a8 = 0;
  iVar1 = FUN_140e851f0(uVar2,&local_a8,DAT_141955260,1);
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if (iVar1 != -2 && iVar1 < 1) {
    local_48 = 6;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01308);
    local_b8 = _DAT_141dc77a0;
    uStack_b4 = uRam0000000141dc77a4;
    uStack_b0 = uRam0000000141dc77a8;
    uStack_ac = uRam0000000141dc77ac;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_b8);
    local_40 = local_88;
    FUN_140e609c0(param_1);
    uVar2 = CONCAT44(uVar6,DAT_141a0a0d8);
    puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_c8,1,uVar2,&local_40);
    uVar6 = (undefined4)((ulonglong)uVar2 >> 0x20);
    uStack_9c = *(undefined4 *)((longlong)puVar4 + 0xc);
    uStack_a0 = *(undefined4 *)(puVar4 + 1);
    if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) == 0) {
      local_a8 = *puVar4;
    }
    else {
      FUN_1400419b0(&local_a8,puVar4);
    }
    uStack_ac = 7;
    local_b8 = 0x3c;
    FUN_140042560(&local_a8,&local_b8);
    if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    if (&local_a8 != puVar3) {
      local_b8 = (undefined4)local_a8;
      uStack_b4 = local_a8._4_4_;
      uStack_b0 = uStack_a0;
      uStack_ac = uStack_9c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_b8);
    }
    if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140e60910(1);
    local_48 = 7;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    local_98 = 0;
    local_90 = 0;
    local_8c = 5;
    local_b8 = _DAT_141ddb978;
    uStack_b4 = uRam0000000141ddb97c;
    uStack_b0 = uRam0000000141ddb980;
    uStack_ac = DAT_141ddb984;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_b8);
    local_40 = local_88;
    local_b8 = _DAT_141ddb978;
    uStack_b4 = uRam0000000141ddb97c;
    uStack_b0 = uRam0000000141ddb980;
    uStack_ac = DAT_141ddb984;
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_b8);
    local_38 = local_78;
    uVar2 = CONCAT44(uVar6,DAT_1419febf8);
    puVar5 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_98,1,uVar2,&local_40);
    uVar6 = (undefined4)((ulonglong)uVar2 >> 0x20);
    if (puVar5 != local_68) {
      local_b8 = *puVar5;
      uStack_b4 = puVar5[1];
      uStack_b0 = puVar5[2];
      uStack_ac = puVar5[3];
      if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_68);
      }
      FUN_140041b80(local_68,&local_b8);
    }
    local_30 = local_68;
    FUN_140e634e0(param_1,param_2,&local_c8,2,CONCAT44(uVar6,DAT_1419febf8),&local_38);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return;
}

