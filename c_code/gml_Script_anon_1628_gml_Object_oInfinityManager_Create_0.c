// gml_Script_anon_1628_gml_Object_oInfinityManager_Create_0 @ 0x140b2d320

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_1628_gml_Object_oInfinityManager_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  code *pcVar10;
  undefined4 uVar11;
  ulonglong in_stack_ffffffffffffff00;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  byte local_8c;
  uint local_68 [2];
  undefined8 *local_60;
  undefined8 *local_58 [6];
  
  local_c0 = "gml_Script_BossAttribute@gml_Object_oInfinityManager_Create_0";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 7;
  FUN_140041df0(local_68,param_4,3,param_5);
  pcVar10 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_98,0x10,3,FUN_1400424d0,FUN_140041b30);
  uVar2 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1ef20);
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de2954) &&
     (_Init_thread_header(&DAT_141de2954), DAT_141de2954 == -1)) {
    DAT_141de2958 = FUN_140e63aa0(DAT_1419f3a78);
    _Init_thread_footer(&DAT_141de2954);
  }
  local_b8 = 7;
  puVar9 = &DAT_1419df7b0;
  uVar8 = (ulonglong)local_68[0];
  if ((int)local_68[0] < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*local_60;
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_b8 = 7;
    if ((int)local_68[0] < 1) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)*local_60;
      if (puVar3 == (undefined8 *)&DAT_141dd9958) goto LAB_140b2d4d0;
    }
    local_f8 = CONCAT44(uRam0000000141dd995c,_DAT_141dd9958);
    uStack_f0 = uRam0000000141dd9960;
    uStack_ec = DAT_141dd9964;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_f8);
  }
LAB_140b2d4d0:
  if ((int)local_68[0] < 2) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_60[1];
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    pcVar10 = (code *)((ulonglong)pcVar10 & 0xffffffffffffff00);
    FUN_140e87440(uVar2,DAT_141a1f3f0,0x80000000,&local_a8,pcVar10,
                  in_stack_ffffffffffffff00 & 0xffffffffffffff00);
    if ((int)local_68[0] < 2) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_60[1];
      if (&local_a8 == puVar3) goto LAB_140b2d55e;
    }
    local_f8 = local_a8;
    uStack_f0 = uStack_a0;
    uStack_ec = uStack_9c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_f8);
  }
LAB_140b2d55e:
  uVar11 = (undefined4)((ulonglong)pcVar10 >> 0x20);
  if ((int)local_68[0] < 3) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_60[2];
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    FUN_140e645a0(&local_f8,&LAB_140b2cc10,param_1);
    if ((int)local_68[0] < 3) {
      puVar3 = &DAT_1419df7b0;
LAB_140b2d5b2:
      local_e8 = (undefined4)local_f8;
      uStack_e4 = local_f8._4_4_;
      uStack_e0 = uStack_f0;
      uStack_dc = uStack_ec;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_e8);
    }
    else {
      puVar3 = (undefined8 *)local_60[2];
      if (&local_f8 != puVar3) goto LAB_140b2d5b2;
    }
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
  }
  FUN_140e643a0(param_1,DAT_141de2958);
  local_b8 = 9;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05b88);
  FUN_140e609c0(param_1);
  if ((int)local_68[0] < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*local_60;
  }
  if (puVar4 != puVar3) {
    local_e8 = *(undefined4 *)puVar4;
    uStack_e4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_e0 = *(undefined4 *)(puVar4 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_e8);
  }
  FUN_140e60910(1);
  local_b8 = 10;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1ef20);
  if ((int)local_68[0] < 2) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_60[1];
    if (puVar3 == &local_98) goto LAB_140b2d70a;
  }
  local_e8 = *(undefined4 *)puVar3;
  uStack_e4 = *(undefined4 *)((longlong)puVar3 + 4);
  uStack_e0 = *(undefined4 *)(puVar3 + 1);
  uStack_dc = *(undefined4 *)((longlong)puVar3 + 0xc);
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_e8);
LAB_140b2d70a:
  local_58[0] = &local_98;
  FUN_140e609c0(param_1);
  uVar2 = CONCAT44(uVar11,DAT_1419fdca8);
  puVar6 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_d8,1,uVar2,local_58);
  uVar11 = (undefined4)((ulonglong)uVar2 >> 0x20);
  if (puVar6 != puVar5) {
    local_e8 = *puVar6;
    uStack_e4 = puVar6[1];
    uStack_e0 = puVar6[2];
    uStack_dc = puVar6[3];
    if ((1 << ((byte)puVar5[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_e8);
  }
  FUN_140e60910(1);
  local_b8 = 0xb;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3aa8);
  if (((int)local_68[0] < 3) || (puVar9 = (undefined8 *)local_60[2], puVar9 != &local_98)) {
    local_e8 = *(undefined4 *)puVar9;
    uStack_e4 = *(undefined4 *)((longlong)puVar9 + 4);
    uStack_e0 = *(undefined4 *)(puVar9 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar9 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_e8);
  }
  local_58[0] = &local_98;
  FUN_140e609c0(param_1);
  puVar6 = (undefined4 *)
           FUN_140e634e0(param_1,param_2,&local_d8,1,CONCAT44(uVar11,DAT_1419fdca8),local_58);
  if (puVar6 != puVar5) {
    local_e8 = *puVar6;
    uStack_e4 = puVar6[1];
    uStack_e0 = puVar6[2];
    uStack_dc = puVar6[3];
    if ((1 << ((byte)puVar5[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_e8);
  }
  FUN_140e60910(1);
  local_b8 = 0xd;
  puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3a98);
  uStack_ec = 0xd;
  local_f8 = 0;
  if (&local_f8 != puVar9) {
    local_e8 = 0;
    uStack_e4 = 0;
    uStack_e0 = uStack_f0;
    uStack_dc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    FUN_140041b80(puVar9,&local_e8);
  }
  local_b8 = 0xe;
  puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3ac8);
  FUN_140e609c0(param_1);
  puVar6 = (undefined4 *)FUN_140e8da20(&local_d8,param_1,0);
  if (puVar6 != puVar5) {
    local_e8 = *puVar6;
    uStack_e4 = puVar6[1];
    uStack_e0 = puVar6[2];
    uStack_dc = puVar6[3];
    if ((1 << ((byte)puVar5[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_e8);
  }
  FUN_140e60910(1);
  local_b8 = 0x10;
  puVar7 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3a88);
  if (puVar7 != &DAT_141dd9958) {
    local_e8 = _DAT_141dd9958;
    uStack_e4 = uRam0000000141dd995c;
    uStack_e0 = uRam0000000141dd9960;
    uStack_dc = DAT_141dd9964;
    if ((1 << ((byte)*(undefined4 *)(puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_e8);
  }
  local_b8 = 0x12;
  puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f520);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_f8,gml_Script_anon_659_BossAttribute_gml_Object_oInfinityManager_Create_0,
                param_1);
  if (&local_f8 != puVar9) {
    local_e8 = (undefined4)local_f8;
    uStack_e4 = local_f8._4_4_;
    uStack_e0 = uStack_f0;
    uStack_dc = uStack_ec;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    FUN_140041b80(puVar9,&local_e8);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140e60910(1);
  local_b8 = 0x18;
  puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a43db8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_f8,gml_Script_BossAttribute_gml_Object_oInfinityManager_Create_0,param_1);
  if (&local_f8 != puVar9) {
    local_e8 = (undefined4)local_f8;
    uStack_e4 = local_f8._4_4_;
    uStack_e0 = uStack_f0;
    uStack_dc = uStack_ec;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    FUN_140041b80(puVar9,&local_e8);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140e60910(1);
  local_b8 = 0x1f;
  puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5858);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_f8,gml_Script_anon_969_gml_Object_oInfinityManager_Create_0,param_1);
  if (&local_f8 != puVar9) {
    local_e8 = (undefined4)local_f8;
    uStack_e4 = local_f8._4_4_;
    uStack_e0 = uStack_f0;
    uStack_dc = uStack_ec;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    FUN_140041b80(puVar9,&local_e8);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(&local_98,0x10,3,FUN_140041b30);
  if (0 < (int)local_68[0]) {
    puVar9 = local_60;
    do {
      puVar3 = (undefined8 *)*puVar9;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined4 *)((longlong)puVar3 + 0xc) = 5;
      puVar9 = puVar9 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  FUN_140e4cd60(local_60);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

