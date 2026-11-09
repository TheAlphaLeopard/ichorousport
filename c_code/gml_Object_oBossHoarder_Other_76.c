// gml_Object_oBossHoarder_Other_76 @ 0x140798f70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oBossHoarder_Other_76(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined1 local_50 [12];
  byte local_44;
  undefined1 local_40 [12];
  byte local_34;
  
  local_60 = "gml_Object_oBossHoarder_Step_0";
  local_58 = 0;
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  _eh_vector_constructor_iterator_(local_50,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_9c = 0xffffff;
  local_a8 = 0;
  local_58 = 3;
  gml_Script_truestate_clear_history(param_1,param_2,&local_a8,0,0);
  local_58 = 5;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f090);
  local_8c = 0;
  local_98 = 0;
  iVar1 = FUN_140e851f0(uVar2,&local_98,DAT_141955260,1);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if (iVar1 != -2 && iVar1 < 1) {
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f2b0);
    local_8c = 10;
    local_98 = 0x14;
    iVar1 = FUN_140e851f0(uVar3,&local_98,DAT_141955260,0);
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    if (iVar1 != 0) {
      local_58 = 6;
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      local_a8 = 0;
      local_a0 = 0;
      local_9c = 5;
      local_78 = CONCAT44(uRam00000001419e82f4,_DAT_1419e82f0);
      uStack_70 = uRam00000001419e82f8;
      uStack_6c = uRam00000001419e82fc;
      if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_50);
      }
      FUN_140041b80(local_50,&local_78);
      local_88 = local_50;
      local_78 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
      uStack_70 = DAT_1419df7b8;
      uStack_6c = DAT_1419df7bc;
      if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_40);
      }
      FUN_140041b80(local_40,&local_78);
      local_80 = local_40;
      gml_Script_truestate_begin_step(param_1,param_2,&local_a8,2,&local_88);
    }
  }
  local_58 = 8;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5a58);
  local_8c = *(undefined4 *)((longlong)puVar4 + 0xc);
  local_90 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) == 0) {
    local_98 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_98,puVar4);
  }
  uStack_6c = 0;
  local_78 = 0x3fd999999999999a;
  FUN_140042560(&local_98,&local_78);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  iVar1 = FUN_140e851f0(uVar2,&local_98,DAT_141955260,1);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if (iVar1 != -2 && iVar1 < 1) {
    (**(code **)(*param_1 + 8))(param_1,DAT_141a1f090);
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fdae8);
    uStack_6c = 0;
    local_78 = 0x4000000000000000;
    iVar1 = FUN_140e851f0(uVar2,&local_78,DAT_141955260,0);
    if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    if (iVar1 != 0) {
      local_58 = 10;
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      local_a8 = 0;
      local_a0 = 0;
      local_9c = 5;
      local_78 = CONCAT44(uRam00000001419e82e4,_DAT_1419e82e0);
      uStack_70 = uRam00000001419e82e8;
      uStack_6c = uRam00000001419e82ec;
      if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_50);
      }
      FUN_140041b80(local_50,&local_78);
      local_88 = local_50;
      local_78 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
      uStack_70 = DAT_1419df7b8;
      uStack_6c = DAT_1419df7bc;
      if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_40);
      }
      FUN_140041b80(local_40,&local_78);
      local_80 = local_40;
      gml_Script_truestate_begin_step(param_1,param_2,&local_a8,2,&local_88);
    }
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_50,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return;
}

