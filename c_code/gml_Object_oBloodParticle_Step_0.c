// gml_Object_oBloodParticle_Step_0 @ 0x1406d9f10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oBloodParticle_Step_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  ulonglong uVar5;
  undefined4 uVar7;
  undefined8 uVar6;
  ulonglong in_stack_ffffffffffffff10;
  undefined8 **ppuVar8;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined8 local_78;
  byte local_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 *local_58;
  undefined1 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Object_oBloodManagerForeground_CleanUp_0";
  local_28 = 0;
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  pcVar4 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_a8,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_28 = 1;
  uStack_dc = 6;
  uVar5 = (ulonglong)pcVar4 & 0xffffffffffffff00;
  local_e8 = param_1;
  FUN_140e87440(&local_e8,DAT_141a0a828,0x80000000,&local_68,uVar5,
                in_stack_ffffffffffffff10 & 0xffffffffffffff00);
  uVar7 = (undefined4)(uVar5 >> 0x20);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = (longlong *)local_68;
  uStack_e0 = uStack_60;
  uStack_dc = uStack_5c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_e8);
  local_58 = &local_a8;
  local_e8 = (longlong *)CONCAT44(uRam0000000141dd5e6c,_DAT_141dd5e68);
  uStack_e0 = uRam0000000141dd5e70;
  uStack_dc = DAT_141dd5e74;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_e8);
  local_50 = local_98;
  ppuVar8 = &local_58;
  uVar5 = CONCAT44(uVar7,DAT_141a56cf0);
  uVar2 = FUN_140e634e0(param_1,param_2,&local_b8,2,uVar5,ppuVar8);
  cVar1 = FUN_140e491e0(uVar2);
  if (cVar1 != '\0') {
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    uVar7 = (undefined4)(uVar5 >> 0x20);
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a04448);
    if (puVar3 != &local_88) {
      local_e8 = (longlong *)*puVar3;
      uStack_e0 = *(undefined4 *)(puVar3 + 1);
      uStack_dc = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      FUN_140041b80(&local_88,&local_e8);
    }
    local_48 = &local_88;
    ppuVar8 = &local_48;
    uVar5 = CONCAT44(uVar7,DAT_141a04798);
    uVar2 = FUN_140e634e0(param_1,param_2,&local_c8,1,uVar5,ppuVar8);
    cVar1 = FUN_140e491e0(uVar2);
    if (cVar1 != '\0') {
      local_28 = 1;
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      uVar7 = (undefined4)(uVar5 >> 0x20);
      local_d8 = 0;
      local_d0 = 0;
      local_cc = 5;
      puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a04448);
      if (puVar3 != &local_78) {
        local_e8 = (longlong *)*puVar3;
        uStack_e0 = *(undefined4 *)(puVar3 + 1);
        uStack_dc = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_78);
        }
        FUN_140041b80(&local_78,&local_e8);
      }
      local_40 = &local_78;
      ppuVar8 = &local_40;
      uVar5 = CONCAT44(uVar7,DAT_141a04918);
      FUN_140e634e0(param_1,param_2,&local_d8,1,uVar5,ppuVar8);
    }
  }
  local_28 = 2;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  uStack_dc = 6;
  uVar5 = uVar5 & 0xffffffffffffff00;
  local_e8 = param_1;
  FUN_140e87440(&local_e8,DAT_141a0a828,0x80000000,&local_68,uVar5,
                (ulonglong)ppuVar8 & 0xffffffffffffff00);
  uVar7 = (undefined4)(uVar5 >> 0x20);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = (longlong *)local_68;
  uStack_e0 = uStack_60;
  uStack_dc = uStack_5c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_e8);
  local_58 = &local_a8;
  local_e8 = (longlong *)CONCAT44(uRam0000000141dd5e5c,_DAT_141dd5e58);
  uStack_e0 = uRam0000000141dd5e60;
  uStack_dc = DAT_141dd5e64;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_e8);
  local_50 = local_98;
  uVar6 = CONCAT44(uVar7,DAT_141a56cf0);
  uVar2 = FUN_140e634e0(param_1,param_2,&local_b8,2,uVar6,&local_58);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  cVar1 = FUN_140e491e0(uVar2);
  if (cVar1 != '\0') {
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a03728);
    if (puVar3 != &local_88) {
      local_e8 = (longlong *)*puVar3;
      uStack_e0 = *(undefined4 *)(puVar3 + 1);
      uStack_dc = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      FUN_140041b80(&local_88,&local_e8);
    }
    local_48 = &local_88;
    uVar6 = CONCAT44(uVar7,DAT_141a04798);
    uVar2 = FUN_140e634e0(param_1,param_2,&local_c8,1,uVar6,&local_48);
    uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
    cVar1 = FUN_140e491e0(uVar2);
    if (cVar1 != '\0') {
      local_28 = 2;
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      local_d8 = 0;
      local_d0 = 0;
      local_cc = 5;
      puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a03728);
      if (puVar3 != &local_78) {
        local_e8 = (longlong *)*puVar3;
        uStack_e0 = *(undefined4 *)(puVar3 + 1);
        uStack_dc = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_78);
        }
        FUN_140041b80(&local_78,&local_e8);
      }
      local_40 = &local_78;
      FUN_140e634e0(param_1,param_2,&local_d8,1,CONCAT44(uVar7,DAT_141a04918),&local_40);
    }
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(&local_a8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_38;
  return;
}

