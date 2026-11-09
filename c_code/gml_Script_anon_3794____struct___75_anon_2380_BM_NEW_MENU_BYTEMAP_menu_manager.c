// gml_Script_anon_3794____struct___75_anon_2380_BM_NEW_MENU_BYTEMAP_menu_manager @ 0x14024c630

undefined8 *
gml_Script_anon_3794____struct___75_anon_2380_BM_NEW_MENU_BYTEMAP_menu_manager
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  undefined8 *puVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  undefined8 *puVar5;
  ulonglong *puVar6;
  uint *puVar7;
  ulonglong uVar8;
  undefined4 uVar10;
  undefined8 uVar9;
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  ulonglong local_c8;
  uint uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80 [12];
  byte local_74;
  undefined1 local_70 [12];
  byte local_64;
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50 [2];
  undefined8 *local_48;
  
  local_b0 = "gml_Script_BM_INIT";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0x26;
  FUN_140041df0(local_50,param_4,1,param_5);
  uVar10 = 1;
  _eh_vector_constructor_iterator_(local_80,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_94 = 0;
  local_a0 = 0;
  local_84 = 0;
  local_90 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a8 = 0x26;
  puVar7 = (uint *)&DAT_1419df7b0;
  uVar8 = (ulonglong)local_50[0];
  if ((int)local_50[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_48;
  }
  iVar2 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_a8 = 0x26;
    if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a0);
    }
    local_a0 = 0;
    local_98 = 0;
    local_94 = 5;
    local_d8 = DAT_141a45488 & 0xffffff;
    uStack_d4 = (int)(DAT_141a45488 | 0x5000000) >> 0x18 & 0xff;
    if (uStack_d4 == 0xf) {
      uStack_d4 = 0x4000004;
    }
    else {
      uStack_d4 = uStack_d4 | 0x1000000;
    }
    uStack_bc = 0xf;
    local_c8 = CONCAT44(uStack_d4,DAT_141a45488) & 0xffffffff00ffffff;
    uStack_d0 = uStack_c0;
    uStack_cc = 0xf;
    if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_70);
    }
    FUN_140041b80(local_70,&local_d8);
    local_58 = local_70;
    if ((int)local_50[0] < 1) {
      puVar4 = (uint *)&DAT_1419df7b0;
    }
    else {
      puVar4 = (uint *)*local_48;
    }
    uVar9 = CONCAT44(uVar10,DAT_1419fd6d8);
    puVar3 = (uint *)FUN_140e634e0(param_1,param_2,&local_a0,1,uVar9,&local_58);
    uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
    if (puVar3 != puVar4) {
      local_d8 = *puVar3;
      uStack_d4 = puVar3[1];
      uStack_d0 = puVar3[2];
      uStack_cc = puVar3[3];
      if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_d8);
    }
  }
  local_a8 = 0x28;
  puVar4 = (uint *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a465e8);
  FUN_140e609c0(param_1);
  puVar3 = (uint *)FUN_140e8da20(&local_a0,param_1,0);
  if (puVar3 != puVar4) {
    local_d8 = *puVar3;
    uStack_d4 = puVar3[1];
    uStack_d0 = puVar3[2];
    uStack_cc = puVar3[3];
    if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_d8);
  }
  FUN_140e60910(1);
  local_a8 = 0x2a;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a46948);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0;
  local_a8 = 0x2b;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a46bd8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = &DAT_bff0000000000000;
  local_a8 = 0x2d;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a46af8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0;
  local_a8 = 0x2e;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a46778);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0x3ff0000000000000;
  local_a8 = 0x30;
  puVar6 = (ulonglong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a46a58);
  uStack_bc = 0xd;
  local_c8 = 0;
  if (&local_c8 != puVar6) {
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = uStack_c0;
    uStack_cc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_d8);
  }
  local_a8 = 0x32;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a46ba8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0;
  local_a8 = 0x33;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a464f8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0;
  local_a8 = 0x34;
  puVar6 = (ulonglong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a46b88);
  uStack_bc = 0xd;
  local_c8 = 0x3ff0000000000000;
  if (&local_c8 != puVar6) {
    local_d8 = 0;
    uStack_d4 = 0x3ff00000;
    uStack_d0 = uStack_c0;
    uStack_cc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_d8);
  }
  local_a8 = 0x36;
  puVar4 = (uint *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a46d68);
  FUN_140e609c0(param_1);
  if (0 < (int)local_50[0]) {
    puVar7 = (uint *)*local_48;
  }
  if (puVar7 != puVar4) {
    local_d8 = *puVar7;
    uStack_d4 = puVar7[1];
    uStack_d0 = puVar7[2];
    uStack_cc = puVar7[3];
    if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_d8);
  }
  FUN_140e60910(1);
  local_a8 = 0x37;
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  local_90 = 0;
  local_88 = 0;
  local_84 = 5;
  puVar7 = (uint *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a550a0);
  local_d8 = DAT_141a448e8 & 0xffffff;
  uStack_d4 = (int)(DAT_141a448e8 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_d4 == 0xf) {
    uStack_d4 = 0x4000004;
  }
  else {
    uStack_d4 = uStack_d4 | 0x1000000;
  }
  uStack_bc = 0xf;
  local_c8 = CONCAT44(uStack_d4,DAT_141a448e8) & 0xffffffff00ffffff;
  uStack_d0 = uStack_c0;
  uStack_cc = 0xf;
  if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_80);
  }
  FUN_140041b80(local_80,&local_d8);
  local_60 = local_80;
  FUN_140e609c0(param_1);
  puVar4 = (uint *)FUN_140e634e0(param_1,param_2,&local_90,1,CONCAT44(uVar10,DAT_1419fd6d8),
                                 &local_60);
  if (puVar4 != puVar7) {
    local_d8 = *puVar4;
    uStack_d4 = puVar4[1];
    uStack_d0 = puVar4[2];
    uStack_cc = puVar4[3];
    if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_d8);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  _eh_vector_destructor_iterator_(local_80,0x10,2,FUN_140041b30);
  if (0 < (int)local_50[0]) {
    puVar5 = local_48;
    do {
      puVar1 = (undefined8 *)*puVar5;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 5;
      puVar5 = puVar5 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  FUN_140e4cd60(local_48);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}

