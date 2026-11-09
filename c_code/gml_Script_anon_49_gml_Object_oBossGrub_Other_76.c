// gml_Script_anon_49_gml_Object_oBossGrub_Other_76 @ 0x140795920

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script_anon_49_gml_Object_oBossGrub_Other_76(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined1 local_50 [12];
  byte local_44;
  undefined1 local_40 [12];
  byte local_34;
  
  local_60 = "gml_Object_oBossGrub_Step_0";
  local_58 = 0;
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  _eh_vector_constructor_iterator_(local_50,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_8c = 0xffffff;
  local_98 = 0;
  local_58 = 4;
  FUN_140e98b30(param_1,param_2);
  local_58 = 6;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f090);
  uStack_7c = 0;
  local_88 = 0;
  iVar1 = FUN_140e851f0(uVar2,&local_88,DAT_141955260,1);
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if (iVar1 != -2 && iVar1 < 1) {
    local_58 = 8;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f2b0);
    uStack_7c = 10;
    local_88 = 1;
    iVar1 = FUN_140e851f0(uVar3,&local_88,DAT_141955260,0);
    if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    if (iVar1 == 0) {
      local_58 = 9;
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      local_98 = 0;
      local_90 = 0;
      local_8c = 5;
      local_88 = CONCAT44(uRam00000001419e81e4,_DAT_1419e81e0);
      uStack_80 = uRam00000001419e81e8;
      uStack_7c = uRam00000001419e81ec;
      if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_50);
      }
      FUN_140041b80(local_50,&local_88);
      local_78 = local_50;
      local_88 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
      uStack_80 = DAT_1419df7b8;
      uStack_7c = DAT_1419df7bc;
      if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_40);
      }
      FUN_140041b80(local_40,&local_88);
      local_70 = local_40;
      gml_Script_truestate_begin_step(param_1,param_2,&local_98,2,&local_78);
    }
    else {
      local_58 = 0xb;
      puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f090);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      *puVar4 = 0x3ff0000000000000;
    }
  }
  local_58 = 0xf;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5a58);
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1ed50);
  uStack_7c = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_80 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) == 0) {
    local_88 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_88,puVar4);
  }
  FUN_140042560(&local_88,uVar3);
  iVar1 = FUN_140e851f0(uVar2,&local_88,DAT_141955260,1);
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if (iVar1 != -2 && iVar1 < 1) {
    (**(code **)(*param_1 + 8))(param_1,DAT_141a1f090);
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fdae8);
    uStack_7c = 0;
    local_88 = 0x3ff0000000000000;
    iVar1 = FUN_140e851f0(uVar2,&local_88,DAT_141955260,0);
    if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    if (iVar1 == 0) {
      uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f2b0);
      uStack_7c = 10;
      local_88 = 1;
      iVar1 = FUN_140e851f0(uVar2,&local_88,DAT_141955260,0);
      if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      if (iVar1 == 0) {
        local_58 = 0x11;
        if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_98);
        }
        local_98 = 0;
        local_90 = 0;
        local_8c = 5;
        local_88 = CONCAT44(uRam00000001419e81f4,_DAT_1419e81f0);
        uStack_80 = uRam00000001419e81f8;
        uStack_7c = uRam00000001419e81fc;
        if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_50);
        }
        FUN_140041b80(local_50,&local_88);
        local_78 = local_50;
        local_88 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
        uStack_80 = DAT_1419df7b8;
        uStack_7c = DAT_1419df7bc;
        if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_40);
        }
        FUN_140041b80(local_40,&local_88);
        local_70 = local_40;
        gml_Script_truestate_begin_step(param_1,param_2,&local_98,2,&local_78);
      }
    }
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_50,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return;
}

