// gml_Script_truestate_cleanup @ 0x14062a4d0

undefined8 * gml_Script_truestate_cleanup(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar6;
  undefined8 uVar5;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined1 *local_58;
  undefined8 local_50;
  char *local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_48 = "gml_Script_truestate_switch_previous";
  local_50 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_50;
  local_40 = 0x84;
  uVar6 = 1;
  _eh_vector_constructor_iterator_(&local_98,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_bc = 0;
  local_c8 = 0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_40 = 0x85;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a000e8);
  cVar1 = FUN_140e491e0(uVar2);
  if (cVar1 == '\0') {
    local_40 = 0x89;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fffa8);
    if (puVar3 != &local_98) {
      local_a8 = *puVar3;
      uStack_a0 = *(undefined4 *)(puVar3 + 1);
      uStack_9c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      FUN_140041b80(&local_98,&local_a8);
    }
    local_68 = &local_98;
    uVar5 = CONCAT44(uVar6,DAT_141a000f8);
    uVar2 = FUN_140e634e0(param_1,param_2,&local_c8,1,uVar5,&local_68);
    uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
    cVar1 = FUN_140e491e0(uVar2);
    if (cVar1 == '\0') {
      local_40 = 0x8e;
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      local_c8 = 0;
      local_c0 = 0;
      local_bc = 5;
      if (puVar3 != &local_98) {
        local_a8 = *puVar3;
        uStack_a0 = *(undefined4 *)(puVar3 + 1);
        uStack_9c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_98);
        }
        FUN_140041b80(&local_98,&local_a8);
      }
      local_68 = &local_98;
      uVar2 = CONCAT44(uVar6,DAT_1419fffc8);
      FUN_140e634e0(param_1,param_2,&local_c8,1,uVar2,&local_68);
      uVar6 = (undefined4)((ulonglong)uVar2 >> 0x20);
      local_40 = 0x8f;
      puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fffd8);
      uStack_9c = 0xd;
      local_a8 = 0x3ff0000000000000;
      if (&local_a8 != puVar4) {
        local_38 = 0;
        uStack_34 = 0x3ff00000;
        uStack_30 = uStack_a0;
        uStack_2c = 0xd;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        FUN_140041b80(puVar4,&local_38);
      }
      local_40 = 0x90;
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      local_c8 = 0;
      local_c0 = 0;
      local_bc = 5;
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      local_b8 = 0;
      local_b0 = 0;
      local_ac = 5;
      if (puVar3 != &local_98) {
        local_38 = *(undefined4 *)puVar3;
        uStack_34 = *(undefined4 *)((longlong)puVar3 + 4);
        uStack_30 = *(undefined4 *)(puVar3 + 1);
        uStack_2c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_98);
        }
        FUN_140041b80(&local_98,&local_38);
      }
      local_68 = &local_98;
      puVar3 = (undefined8 *)
               FUN_140e634e0(param_1,param_2,&local_b8,1,CONCAT44(uVar6,DAT_141a001c8),&local_68);
      if (puVar3 != &local_88) {
        local_38 = *(undefined4 *)puVar3;
        uStack_34 = *(undefined4 *)((longlong)puVar3 + 4);
        uStack_30 = *(undefined4 *)(puVar3 + 1);
        uStack_2c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_88);
        }
        FUN_140041b80(&local_88,&local_38);
      }
      local_60 = &local_88;
      local_38 = (undefined4)DAT_1419df7b0;
      uStack_34 = DAT_1419df7b0._4_4_;
      uStack_30 = DAT_1419df7b8;
      uStack_2c = DAT_1419df7bc;
      if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_78);
      }
      FUN_140041b80(local_78,&local_38);
      local_58 = local_78;
      gml_Script_truestate_begin_step(param_1,param_2,&local_c8,2,&local_60);
    }
    else {
      local_40 = 0x8a;
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      local_b8 = 0;
      local_b0 = 0;
      local_ac = 5;
      puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a00058);
      if (puVar3 != &local_88) {
        local_a8 = *puVar3;
        uStack_a0 = *(undefined4 *)(puVar3 + 1);
        uStack_9c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_88);
        }
        FUN_140041b80(&local_88,&local_a8);
      }
      local_60 = &local_88;
      local_a8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
      uStack_a0 = DAT_1419df7b8;
      uStack_9c = DAT_1419df7bc;
      if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_78);
      }
      FUN_140041b80(local_78,&local_a8);
      local_58 = local_78;
      gml_Script_truestate_begin_step(param_1,param_2,&local_b8,2,&local_60);
      local_40 = 0x8b;
    }
  }
  else {
    local_40 = 0x86;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    local_a8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_a0 = DAT_1419df7b8;
    uStack_9c = DAT_1419df7bc;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_a8);
    local_68 = &local_98;
    local_a8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_a0 = DAT_1419df7b8;
    uStack_9c = DAT_1419df7bc;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_a8);
    local_60 = &local_88;
    gml_Script_truestate_begin_step(param_1,param_2,&local_c8,2,&local_68);
    local_40 = 0x87;
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(&local_98,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_50;
  return param_3;
}

