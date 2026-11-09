// gml_GlobalScript___InputVibrateClassPlayer @ 0x1400e7430

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_GlobalScript___InputVibrateClassPlayer(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined8 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  
  uVar6 = 0;
  local_e8 = 0;
  local_70 = "gml_Script___Update@anon@1145@__InputVibrateClassGamepad@__InputVibrateClassGamepad";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0x2a;
  _eh_vector_constructor_iterator_(&local_b8,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_bc = 0;
  local_c8 = 0;
  local_7c = 0;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0x2c;
  uVar2 = gml_Script_InputGetBindingName(param_1,param_2,&local_c8,0,0);
  cVar1 = FUN_140e491e0(uVar2);
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a042c8);
    cVar1 = FUN_140e491e0(uVar2);
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a042b8);
      cVar1 = FUN_140e491e0(uVar2);
      if (cVar1 != '\0') {
        local_68 = 0x2e;
        local_88 = 0;
        local_80 = 0;
        local_7c = 5;
        puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd5c8);
        puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a04318);
        uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fe418);
        uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fe228);
        if (puVar3 != &local_b8) {
          local_f8 = *puVar3;
          uStack_f0 = *(undefined4 *)(puVar3 + 1);
          uStack_ec = *(undefined4 *)((longlong)puVar3 + 0xc);
          if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_b8);
          }
          FUN_140041b80(&local_b8,&local_f8);
        }
        local_60 = &local_b8;
        uStack_ec = *(undefined4 *)((longlong)puVar4 + 0xc);
        uStack_f0 = *(undefined4 *)(puVar4 + 1);
        if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) == 0) {
          local_f8 = *puVar4;
        }
        else {
          FUN_1400419b0(&local_f8,puVar4);
        }
        local_e8 = 1;
        FUN_140042560(&local_f8,uVar2);
        local_d8 = (undefined4)local_f8;
        uStack_d4 = local_f8._4_4_;
        uStack_d0 = uStack_f0;
        uStack_cc = uStack_ec;
        if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_a8);
        }
        FUN_140041b80(local_a8,&local_d8);
        local_e8 = 0;
        if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        local_58 = local_a8;
        uStack_ec = *(undefined4 *)((longlong)puVar4 + 0xc);
        uStack_f0 = *(undefined4 *)(puVar4 + 1);
        if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) == 0) {
          local_f8 = *puVar4;
        }
        else {
          FUN_1400419b0(&local_f8,puVar4);
        }
        local_e8 = 2;
        FUN_140042560(&local_f8,uVar5);
        local_d8 = (undefined4)local_f8;
        uStack_d4 = local_f8._4_4_;
        uStack_d0 = uStack_f0;
        uStack_cc = uStack_ec;
        if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_98);
        }
        FUN_140041b80(local_98,&local_d8);
        if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        local_50 = local_98;
        gml_Script_InputVibrateGetEventCount(param_1,param_2,&local_88,3,&local_60);
        local_68 = 0x2f;
        puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a042b8);
        uStack_ec = 0xd;
        local_f8 = 0;
        if (&local_f8 != puVar3) {
          local_d8 = 0;
          uStack_d4 = 0;
          uStack_d0 = uStack_f0;
          uStack_cc = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar3);
          }
          FUN_140041b80(puVar3,&local_d8);
        }
        uVar6 = local_7c;
        goto LAB_1400e7921;
      }
    }
  }
  local_68 = 0x33;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd5c8);
  if (puVar3 != &local_b8) {
    local_d8 = *(undefined4 *)puVar3;
    uStack_d4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_d0 = *(undefined4 *)(puVar3 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_d8);
  }
  local_60 = &local_b8;
  local_d8 = _DAT_141dc6160;
  uStack_d4 = uRam0000000141dc6164;
  uStack_d0 = uRam0000000141dc6168;
  uStack_cc = uRam0000000141dc616c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_d8);
  local_58 = local_a8;
  local_d8 = _DAT_141dc6160;
  uStack_d4 = uRam0000000141dc6164;
  uStack_d0 = uRam0000000141dc6168;
  uStack_cc = uRam0000000141dc616c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_d8);
  local_50 = local_98;
  gml_Script_InputVibrateGetEventCount(param_1,param_2,&local_c8,3,&local_60);
  local_68 = 0x34;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe418);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_68 = 0x35;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe228);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
LAB_1400e7921:
  if ((1 << ((byte)uVar6 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(&local_b8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

