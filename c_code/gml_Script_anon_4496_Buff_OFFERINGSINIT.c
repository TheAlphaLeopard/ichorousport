// gml_Script_anon_4496_Buff_OFFERINGSINIT @ 0x1403c2e00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_4496_Buff_OFFERINGSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  code *pcVar11;
  undefined4 uVar12;
  ulonglong in_stack_fffffffffffffef0;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uint local_a8 [2];
  undefined8 *local_a0;
  longlong *local_98;
  undefined4 local_8c;
  undefined8 local_88;
  byte local_7c;
  longlong **local_58;
  undefined8 *local_50;
  
  local_d0 = "gml_Script_Attribute";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 0x54;
  FUN_140041df0(local_a8,param_4,4,param_5);
  pcVar11 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_98,0x10,4,FUN_1400424d0,FUN_140041b30);
  uVar2 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1ef20);
  uStack_ac = 0xffffff;
  local_b8 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddeaf8) &&
     (_Init_thread_header(&DAT_141ddeaf8), DAT_141ddeaf8 == -1)) {
    DAT_141ddeb60 = FUN_140e63aa0(DAT_1419f5898);
    _Init_thread_footer(&DAT_141ddeaf8);
  }
  local_c8 = 0x54;
  puVar10 = &DAT_1419df7b0;
  uVar9 = (ulonglong)local_a8[0];
  if ((int)local_a8[0] < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*local_a0;
  }
  iVar1 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_c8 = 0x54;
    if ((int)local_a8[0] < 1) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)*local_a0;
      if (puVar4 == (undefined8 *)&DAT_141dd2618) goto LAB_1403c2fb7;
    }
    local_108 = CONCAT44(uRam0000000141dd261c,_DAT_141dd2618);
    uStack_100 = uRam0000000141dd2620;
    uStack_fc = DAT_141dd2624;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_108);
  }
LAB_1403c2fb7:
  if ((int)local_a8[0] < 2) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_a0[1];
  }
  iVar1 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (((iVar1 == 0) && (1 < (int)local_a8[0])) &&
     (puVar4 = (undefined8 *)local_a0[1], puVar4 != &DAT_1419df7b0)) {
    local_108 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_100 = DAT_1419df7b8;
    uStack_fc = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_108);
  }
  if ((int)local_a8[0] < 3) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_a0[2];
  }
  iVar1 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    pcVar11 = (code *)((ulonglong)pcVar11 & 0xffffffffffffff00);
    FUN_140e87440(uVar2,DAT_141a1f3f0,0x80000000,&local_b8,pcVar11,
                  in_stack_fffffffffffffef0 & 0xffffffffffffff00);
    if ((int)local_a8[0] < 3) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_a0[2];
      if (&local_b8 == puVar4) goto LAB_1403c30ac;
    }
    local_108 = local_b8;
    uStack_100 = uStack_b0;
    uStack_fc = uStack_ac;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_108);
  }
LAB_1403c30ac:
  uVar12 = (undefined4)((ulonglong)pcVar11 >> 0x20);
  if ((int)local_a8[0] < 4) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_a0[3];
  }
  iVar1 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    FUN_140e645a0(&local_108,&LAB_1403c17f0,param_1);
    if ((int)local_a8[0] < 4) {
      puVar4 = &DAT_1419df7b0;
LAB_1403c3100:
      local_f8 = (undefined4)local_108;
      uStack_f4 = local_108._4_4_;
      uStack_f0 = uStack_100;
      uStack_ec = uStack_fc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_f8);
    }
    else {
      puVar4 = (undefined8 *)local_a0[3];
      if (&local_108 != puVar4) goto LAB_1403c3100;
    }
    if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
  }
  FUN_140e643a0(param_1,DAT_141ddeb60);
  local_c8 = 0x56;
  puVar3 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f6288);
  if (puVar3 != &DAT_141dd2578) {
    local_f8 = _DAT_141dd2578;
    uStack_f4 = uRam0000000141dd257c;
    uStack_f0 = uRam0000000141dd2580;
    uStack_ec = DAT_141dd2584;
    if ((1 << ((byte)*(undefined4 *)(puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_f8);
  }
  local_c8 = 0x57;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a8a8);
  FUN_140e609c0(param_1);
  if ((int)local_a8[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_a0;
  }
  if (puVar5 != puVar4) {
    local_f8 = *(undefined4 *)puVar5;
    uStack_f4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_f0 = *(undefined4 *)(puVar5 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_f8);
  }
  FUN_140e60910(1);
  local_c8 = 0x59;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a9f8);
  FUN_140e609c0(param_1);
  if ((int)local_a8[0] < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_a0[1];
  }
  if (puVar5 != puVar4) {
    local_f8 = *(undefined4 *)puVar5;
    uStack_f4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_f0 = *(undefined4 *)(puVar5 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_f8);
  }
  FUN_140e60910(1);
  local_c8 = 0x5a;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5de8);
  FUN_140e609c0(param_1);
  uVar2 = CONCAT44(uVar12,DAT_1419fd6d8);
  puVar7 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_e8,0,uVar2,0);
  uVar12 = (undefined4)((ulonglong)uVar2 >> 0x20);
  if (puVar7 != puVar6) {
    local_f8 = *puVar7;
    uStack_f4 = puVar7[1];
    uStack_f0 = puVar7[2];
    uStack_ec = puVar7[3];
    if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_f8);
  }
  FUN_140e60910(1);
  local_c8 = 0x5b;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5d08);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_108,&LAB_1403c1820,param_1);
  if (&local_108 != puVar4) {
    local_f8 = (undefined4)local_108;
    uStack_f4 = local_108._4_4_;
    uStack_f0 = uStack_100;
    uStack_ec = uStack_fc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_f8);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140e60910(1);
  local_c8 = 0x5d;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5de8);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_8c = 6;
  local_98 = param_1;
  uVar8 = FUN_140e5c910();
  FUN_140e42c10(uVar8,param_1);
  local_58 = &local_98;
  if ((int)local_a8[0] < 4) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_a0[3];
    if (puVar4 == &local_88) goto LAB_1403c34ab;
  }
  local_f8 = *(undefined4 *)puVar4;
  uStack_f4 = *(undefined4 *)((longlong)puVar4 + 4);
  uStack_f0 = *(undefined4 *)(puVar4 + 1);
  uStack_ec = *(undefined4 *)((longlong)puVar4 + 0xc);
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_f8);
LAB_1403c34ab:
  local_50 = &local_88;
  if (2 < (int)local_a8[0]) {
    puVar10 = (undefined8 *)local_a0[2];
  }
  uVar8 = FUN_140e634e0(param_1,param_2,&local_e8,2,CONCAT44(uVar12,DAT_1419fed78),&local_58);
  FUN_140e98ef0(param_1,param_2,uVar2,puVar10,uVar8);
  uVar12 = (undefined4)((ulonglong)uVar8 >> 0x20);
  local_c8 = 0x5f;
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0ab58);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar10);
  }
  *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
  *puVar10 = 0x3ff0000000000000;
  local_c8 = 0x60;
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a918);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar10);
  }
  *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
  *puVar10 = &DAT_bff0000000000000;
  local_c8 = 0x61;
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0ab68);
  uStack_fc = 0xd;
  local_108 = 0;
  if (&local_108 != puVar10) {
    local_f8 = 0;
    uStack_f4 = 0;
    uStack_f0 = uStack_100;
    uStack_ec = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    FUN_140041b80(puVar10,&local_f8);
  }
  local_c8 = 99;
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a908);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_108,gml_Script_anon_3069_Attribute_OFFERINGSINIT,param_1);
  if (&local_108 != puVar10) {
    local_f8 = (undefined4)local_108;
    uStack_f4 = local_108._4_4_;
    uStack_f0 = uStack_100;
    uStack_ec = uStack_fc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    FUN_140041b80(puVar10,&local_f8);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140e60910(1);
  local_c8 = 0x68;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5948);
  FUN_140e609c0(param_1);
  puVar7 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_e8,0,CONCAT44(uVar12,DAT_1419fd6d8),0)
  ;
  if (puVar7 != puVar6) {
    local_f8 = *puVar7;
    uStack_f4 = puVar7[1];
    uStack_f0 = puVar7[2];
    uStack_ec = puVar7[3];
    if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_f8);
  }
  FUN_140e60910(1);
  local_c8 = 0x6a;
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f6268);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar10);
  }
  *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
  *puVar10 = &DAT_bff0000000000000;
  local_c8 = 0x6c;
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a928);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_108,gml_Script_anon_3376_Attribute_OFFERINGSINIT,param_1);
  if (&local_108 != puVar10) {
    local_f8 = (undefined4)local_108;
    uStack_f4 = local_108._4_4_;
    uStack_f0 = uStack_100;
    uStack_ec = uStack_fc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    FUN_140041b80(puVar10,&local_f8);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140e60910(1);
  local_c8 = 0x71;
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f520);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_108,gml_Script_anon_3481_Attribute_OFFERINGSINIT,param_1);
  if (&local_108 != puVar10) {
    local_f8 = (undefined4)local_108;
    uStack_f4 = local_108._4_4_;
    uStack_f0 = uStack_100;
    uStack_ec = uStack_fc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    FUN_140041b80(puVar10,&local_f8);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140e60910(1);
  local_c8 = 0x78;
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0aae8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_108,gml_Script_anon_3591_Attribute_OFFERINGSINIT,param_1);
  if (&local_108 != puVar10) {
    local_f8 = (undefined4)local_108;
    uStack_f4 = local_108._4_4_;
    uStack_f0 = uStack_100;
    uStack_ec = uStack_fc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    FUN_140041b80(puVar10,&local_f8);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140e60910(1);
  local_c8 = 0x7d;
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0aa08);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_108,gml_Script_anon_3698_Attribute_OFFERINGSINIT,param_1);
  if (&local_108 != puVar10) {
    local_f8 = (undefined4)local_108;
    uStack_f4 = local_108._4_4_;
    uStack_f0 = uStack_100;
    uStack_ec = uStack_fc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    FUN_140041b80(puVar10,&local_f8);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140e60910(1);
  local_c8 = 0x83;
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0aa28);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_108,gml_Script_anon_3851_Attribute_OFFERINGSINIT,param_1);
  if (&local_108 != puVar10) {
    local_f8 = (undefined4)local_108;
    uStack_f4 = local_108._4_4_;
    uStack_f0 = uStack_100;
    uStack_ec = uStack_fc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    FUN_140041b80(puVar10,&local_f8);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140e60910(1);
  local_c8 = 0x89;
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a43db8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_108,gml_Script_anon_3965_Attribute_OFFERINGSINIT,param_1);
  if (&local_108 != puVar10) {
    local_f8 = (undefined4)local_108;
    uStack_f4 = local_108._4_4_;
    uStack_f0 = uStack_100;
    uStack_ec = uStack_fc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    FUN_140041b80(puVar10,&local_f8);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140e60910(1);
  local_c8 = 0x8e;
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f58f8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_108,gml_Script_Attribute,param_1);
  if (&local_108 != puVar10) {
    local_f8 = (undefined4)local_108;
    uStack_f4 = local_108._4_4_;
    uStack_f0 = uStack_100;
    uStack_ec = uStack_fc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    FUN_140041b80(puVar10,&local_f8);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140e60910(1);
  local_c8 = 0x93;
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5858);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_108,gml_Script_anon_4319_Buff_OFFERINGSINIT,param_1);
  if (&local_108 != puVar10) {
    local_f8 = (undefined4)local_108;
    uStack_f4 = local_108._4_4_;
    uStack_f0 = uStack_100;
    uStack_ec = uStack_fc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    FUN_140041b80(puVar10,&local_f8);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(&local_98,0x10,4,FUN_140041b30);
  if (0 < (int)local_a8[0]) {
    puVar10 = local_a0;
    do {
      puVar4 = (undefined8 *)*puVar10;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 5;
      puVar10 = puVar10 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  FUN_140e4cd60(local_a0);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}

