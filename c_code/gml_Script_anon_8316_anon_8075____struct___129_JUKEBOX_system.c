// gml_Script_anon_8316_anon_8075____struct___129_JUKEBOX_system @ 0x14039b1a0

undefined8 *
gml_Script_anon_8316_anon_8075____struct___129_JUKEBOX_system
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined1 **ppuVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  code *pcVar9;
  ulonglong in_stack_ffffffffffffff00;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_94;
  undefined4 local_90 [3];
  byte local_84;
  undefined8 local_80;
  byte local_74;
  undefined8 local_70;
  byte local_64;
  uint local_60 [2];
  undefined8 *local_58;
  undefined4 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  
  local_b0 = "gml_Script_anon@7630@___struct___129@JUKEBOX_system";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0x10d;
  FUN_140041df0(local_60,param_4,2,param_5);
  pcVar9 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_90,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_94 = 0xffffff;
  local_a0 = 0;
  local_dc = 0;
  local_e8 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a8 = 0x10d;
  puVar8 = &DAT_1419df7b0;
  uVar7 = (ulonglong)local_60[0];
  if ((int)local_60[0] < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_58[1];
  }
  iVar1 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_a8 = 0x10d;
    uStack_bc = 0xd;
    local_c8 = (undefined1 *)0x0;
    if ((int)local_60[0] < 2) {
      ppuVar6 = (undefined1 **)&DAT_1419df7b0;
    }
    else {
      ppuVar6 = (undefined1 **)local_58[1];
      if (&local_c8 == ppuVar6) goto LAB_14039b2fd;
    }
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = uStack_c0;
    uStack_cc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(ppuVar6);
    }
    FUN_140041b80(ppuVar6,&local_d8);
  }
LAB_14039b2fd:
  local_a8 = 0x10e;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f4ac8);
  uStack_bc = 0;
  local_c8 = &DAT_bff0000000000000;
  iVar1 = FUN_140e851f0(uVar2,&local_c8,DAT_141955260,0);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if (iVar1 == 0) {
    local_a8 = 0x10e;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    *(undefined4 *)((longlong)param_3 + 0xc) = 0;
    *param_3 = &DAT_bff0000000000000;
    goto LAB_14039b5a2;
  }
  local_a8 = 0x10f;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f4908);
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f4ac8);
  FUN_140e87440(uVar3,DAT_141a0aa28,0x80000000,&local_a0,(ulonglong)pcVar9 & 0xffffffffffffff00,
                in_stack_ffffffffffffff00 & 0xffffffffffffff00);
  uVar3 = FUN_140069500(uVar3);
  puVar4 = (undefined4 *)FUN_140e63610(uVar3,param_2,&local_f8,0,&local_a0,0);
  if (puVar4 != local_90) {
    local_d8 = *puVar4;
    uStack_d4 = puVar4[1];
    uStack_d0 = puVar4[2];
    uStack_cc = puVar4[3];
    if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_90);
    }
    FUN_140041b80(local_90,&local_d8);
  }
  local_50 = local_90;
  if ((int)local_60[0] < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_14039b4c5:
    local_d8 = *(undefined4 *)puVar5;
    uStack_d4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_d0 = *(undefined4 *)(puVar5 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_80);
    }
    FUN_140041b80(&local_80,&local_d8);
  }
  else {
    puVar5 = (undefined8 *)*local_58;
    if (puVar5 != &local_80) goto LAB_14039b4c5;
  }
  local_48 = &local_80;
  if (((int)local_60[0] < 2) || (puVar8 = (undefined8 *)local_58[1], puVar8 != &local_70)) {
    local_d8 = *(undefined4 *)puVar8;
    uStack_d4 = *(undefined4 *)((longlong)puVar8 + 4);
    uStack_d0 = *(undefined4 *)(puVar8 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_70);
    }
    FUN_140041b80(&local_70,&local_d8);
  }
  local_40 = &local_70;
  puVar8 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_e8,3,uVar2,&local_50);
  if (puVar8 != param_3) {
    local_d8 = *(undefined4 *)puVar8;
    uStack_d4 = *(undefined4 *)((longlong)puVar8 + 4);
    uStack_d0 = *(undefined4 *)(puVar8 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_d8);
  }
LAB_14039b5a2:
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  _eh_vector_destructor_iterator_(local_90,0x10,3,FUN_140041b30);
  if (0 < (int)local_60[0]) {
    puVar8 = local_58;
    do {
      puVar5 = (undefined8 *)*puVar8;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 5;
      puVar8 = puVar8 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  FUN_140e4cd60(local_58);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}

