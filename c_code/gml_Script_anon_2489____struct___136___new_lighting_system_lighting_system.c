// gml_Script_anon_2489____struct___136___new_lighting_system_lighting_system @ 0x1403a3010

undefined8 *
gml_Script_anon_2489____struct___136___new_lighting_system_lighting_system
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar10;
  undefined8 uVar9;
  undefined8 local_f8;
  undefined4 uStack_f0;
  uint uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined8 local_c0;
  char *local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  
  local_c8 = 0;
  local_b8 = "gml_Script_lighting_strength_pulse_process";
  local_c0 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c0;
  local_b0 = 0x16;
  uVar10 = 1;
  _eh_vector_constructor_iterator_(&local_98,0x10,3,FUN_1400424d0,FUN_140041b30);
  puVar3 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f53f8);
  puVar4 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f5488);
  local_a8 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f5358);
  local_cc = 0xffffff;
  local_d8 = 0;
  puVar5 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f5098);
  puVar6 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57b60);
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b0 = 0x18;
  if (puVar3 != &local_98) {
    local_f8 = *puVar3;
    uStack_f0 = *(undefined4 *)(puVar3 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_f8);
  }
  local_68 = &local_98;
  uVar9 = CONCAT44(uVar10,DAT_1419fdc08);
  uVar7 = FUN_140e634e0(param_1,param_2,&local_e8,1,uVar9,&local_68);
  uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
  cVar1 = FUN_140e491e0(uVar7);
  if (cVar1 == '\0') {
    local_b0 = 0x1b;
    FUN_140046040(puVar4);
    local_b0 = 0x1c;
    uStack_ec = *(uint *)((longlong)puVar4 + 0xc);
    uStack_f0 = *(undefined4 *)(puVar4 + 1);
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) == 0) {
      local_f8 = *puVar4;
    }
    else {
      FUN_1400419b0(&local_f8,puVar4);
    }
    local_c8 = 1;
    FUN_140046500(&local_f8,local_a8);
    if ((uStack_ec & 0xffffff) == 0) {
      uVar8 = (undefined4)local_f8;
    }
    else {
      uVar8 = FUN_140e4b060(&local_f8);
    }
    uVar7 = FUN_140e78ec0(uVar8,0,0x3ff0000000000000);
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_cc = 0;
    local_d8 = uVar7;
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_b0 = 0x1d;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    if (puVar5 != &local_98) {
      local_a8 = *puVar5;
      uStack_a0 = *(undefined4 *)(puVar5 + 1);
      uStack_9c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      FUN_140041b80(&local_98,&local_a8);
    }
    local_68 = &local_98;
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
    local_58 = &local_d8;
    FUN_140e609c0(DAT_141a729d8);
    puVar4 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_e8,3,CONCAT44(uVar10,DAT_141a00c58),&local_68);
    if (puVar4 != puVar6) {
      local_f8 = *puVar4;
      uStack_f0 = *(undefined4 *)(puVar4 + 1);
      uStack_ec = *(uint *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_f8);
    }
    FUN_140e60910(1);
    local_b0 = 0x1f;
    uStack_ec = 0;
    local_f8 = 0x3ff0000000000000;
    uVar2 = FUN_140e851f0(&local_d8,&local_f8,DAT_141955260,1);
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    if (uVar2 < 0x80000000) {
      local_b0 = 0x20;
      FUN_140e609c0(DAT_141a729d8);
      if (puVar3 != &DAT_1419df7b0) {
        local_f8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
        uStack_f0 = DAT_1419df7b8;
        uStack_ec = DAT_1419df7bc;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar3);
        }
        FUN_140041b80(puVar3,&local_f8);
      }
      FUN_140e60910(1);
    }
  }
  else {
    local_b0 = 0x19;
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(&local_98,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c0;
  return param_3;
}

