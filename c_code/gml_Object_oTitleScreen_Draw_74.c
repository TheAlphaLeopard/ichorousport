// gml_Object_oTitleScreen_Draw_74 @ 0x140dc1c40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oTitleScreen_Draw_74(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 uVar6;
  undefined8 uVar5;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined8 *local_58;
  undefined1 *local_50;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_40 = "gml_Object_oTitleScreen_Other_69";
  local_38 = 0;
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  uVar6 = 1;
  _eh_vector_constructor_iterator_(&local_78,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_1c = 0xffffff;
  local_28 = 0;
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_38 = 2;
  FUN_140e85f80(param_1,DAT_141a01868,0x80000000,&local_28);
  local_a8 = local_28;
  uStack_a0 = uStack_20;
  uStack_9c = uStack_1c;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140041b80(&local_78,&local_a8);
  local_58 = &local_78;
  local_a8 = CONCAT44(uRam0000000141ddbacc,_DAT_141ddbac8);
  uStack_a0 = uRam0000000141ddbad0;
  uStack_9c = DAT_141ddbad4;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_a8);
  local_50 = local_68;
  uStack_9c = DAT_141ddbaf4;
  uStack_a0 = DAT_141ddbaf0;
  if ((1 << ((byte)DAT_141ddbaf4 & 0x1f) & 0x46U) == 0) {
    local_a8 = DAT_141ddbae8;
  }
  else {
    FUN_1400419b0(&local_a8,&DAT_141ddbae8);
  }
  uVar5 = CONCAT44(uVar6,DAT_1419ff4f8);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_b8,2,uVar5,&local_58);
  uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
  iVar2 = FUN_140e851f0(uVar3,&local_a8,DAT_141955260,0);
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if (iVar2 == 0) {
    local_38 = 4;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01768);
    uStack_9c = 0xd;
    local_a8 = 0;
    if (&local_a8 != puVar4) {
      local_98 = 0;
      uStack_94 = 0;
      uStack_90 = uStack_a0;
      uStack_8c = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_98);
    }
    local_38 = 6;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 5;
    FUN_140e85f80(param_1,DAT_141a01868,0x80000000,&local_28);
    local_98 = (undefined4)local_28;
    uStack_94 = local_28._4_4_;
    uStack_90 = uStack_20;
    uStack_8c = uStack_1c;
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_98);
    local_58 = &local_78;
    local_98 = _DAT_141ddbab8;
    uStack_94 = uRam0000000141ddbabc;
    uStack_90 = uRam0000000141ddbac0;
    uStack_8c = DAT_141ddbac4;
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_68);
    }
    FUN_140041b80(local_68,&local_98);
    local_50 = local_68;
    uVar5 = CONCAT44(uVar6,DAT_1419ff4f8);
    uVar3 = FUN_140e634e0(param_1,param_2,&local_b8,2,uVar5,&local_58);
    uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
    cVar1 = FUN_140e491e0(uVar3);
    if (cVar1 == '\0') {
      local_38 = 6;
    }
    else {
      local_38 = 8;
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      local_b8 = 0;
      local_b0 = 0;
      local_ac = 5;
      local_98 = _DAT_141ddbad8;
      uStack_94 = uRam0000000141ddbadc;
      uStack_90 = uRam0000000141ddbae0;
      uStack_8c = DAT_141ddbae4;
      if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      FUN_140041b80(&local_78,&local_98);
      local_58 = &local_78;
      uVar3 = CONCAT44(uVar6,DAT_141a59730);
      puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_b8,1,uVar3,&local_58);
      uVar6 = (undefined4)((ulonglong)uVar3 >> 0x20);
      if (puVar4 != &local_88) {
        local_98 = *(undefined4 *)puVar4;
        uStack_94 = *(undefined4 *)((longlong)puVar4 + 4);
        uStack_90 = *(undefined4 *)(puVar4 + 1);
        uStack_8c = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_88);
        }
        FUN_140041b80(&local_88,&local_98);
      }
      local_38 = 9;
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      local_b8 = 0;
      local_b0 = 0;
      local_ac = 5;
      local_58 = &local_88;
      uVar3 = FUN_140e634e0(param_1,param_2,&local_b8,1,CONCAT44(uVar6,DAT_141a01858),&local_58);
      cVar1 = FUN_140e491e0(uVar3);
      if (cVar1 == '\0') {
        local_38 = 10;
        puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a017e8);
        FUN_140e609c0(param_1);
        if (&local_88 != puVar4) {
          local_98 = (undefined4)local_88;
          uStack_94 = local_88._4_4_;
          uStack_90 = uStack_80;
          uStack_8c = uStack_7c;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar4);
          }
          FUN_140041b80(puVar4,&local_98);
        }
        FUN_140e60910(1);
      }
    }
  }
  else {
    local_38 = 2;
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_1c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_28);
  }
  _eh_vector_destructor_iterator_(&local_78,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return;
}

