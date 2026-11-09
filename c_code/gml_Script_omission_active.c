// gml_Script_omission_active @ 0x1403c4700

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_omission_active
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
  uint local_100 [2];
  undefined8 *local_f8;
  undefined8 local_e8;
  byte local_dc;
  undefined8 local_d8;
  byte local_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  
  local_110 = "gml_Script_Buff";
  local_118 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_118;
  local_108 = 0xa0;
  FUN_140041df0(local_100,param_4,4,param_5);
  _eh_vector_constructor_iterator_(&local_e8,0x10,8,FUN_1400424d0,FUN_140041b30);
  uVar2 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef2d8);
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddeb14) &&
     (_Init_thread_header(&DAT_141ddeb14), DAT_141ddeb14 == -1)) {
    DAT_141ddeac0 = FUN_140e63aa0(DAT_1419f6148);
    _Init_thread_footer(&DAT_141ddeb14);
  }
  local_108 = 0xa0;
  puVar9 = &DAT_1419df7b0;
  uVar8 = (ulonglong)local_100[0];
  if ((int)local_100[0] < 4) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_f8[3];
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_108 = 0xa0;
    FUN_140e645a0(&local_148,&LAB_1403c3d20,param_1);
    if ((int)local_100[0] < 4) {
      puVar3 = &DAT_1419df7b0;
LAB_1403c4898:
      local_138 = (undefined4)local_148;
      uStack_134 = local_148._4_4_;
      uStack_130 = uStack_140;
      uStack_12c = uStack_13c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_138);
    }
    else {
      puVar3 = (undefined8 *)local_f8[3];
      if (&local_148 != puVar3) goto LAB_1403c4898;
    }
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  if ((int)local_100[0] < 1) {
    puVar3 = &DAT_1419df7b0;
LAB_1403c492c:
    local_138 = *(undefined4 *)puVar3;
    uStack_134 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_130 = *(undefined4 *)(puVar3 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_138);
  }
  else {
    puVar3 = (undefined8 *)*local_f8;
    if (puVar3 != &local_e8) goto LAB_1403c492c;
  }
  local_68 = &local_e8;
  if ((int)local_100[0] < 2) {
    puVar3 = &DAT_1419df7b0;
LAB_1403c497c:
    local_138 = *(undefined4 *)puVar3;
    uStack_134 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_130 = *(undefined4 *)(puVar3 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_138);
  }
  else {
    puVar3 = (undefined8 *)local_f8[1];
    if (puVar3 != &local_d8) goto LAB_1403c497c;
  }
  local_60 = &local_d8;
  if ((int)local_100[0] < 3) {
    puVar3 = &DAT_1419df7b0;
LAB_1403c49cc:
    local_138 = *(undefined4 *)puVar3;
    uStack_134 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_130 = *(undefined4 *)(puVar3 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_138);
  }
  else {
    puVar3 = (undefined8 *)local_f8[2];
    if (puVar3 != &local_c8) goto LAB_1403c49cc;
  }
  local_58 = &local_c8;
  if ((int)local_100[0] < 4) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_f8[3];
    if (puVar3 == &local_b8) goto LAB_1403c4a4c;
  }
  local_138 = *(undefined4 *)puVar3;
  uStack_134 = *(undefined4 *)((longlong)puVar3 + 4);
  uStack_130 = *(undefined4 *)(puVar3 + 1);
  uStack_12c = *(undefined4 *)((longlong)puVar3 + 0xc);
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140041b80(&local_b8,&local_138);
LAB_1403c4a4c:
  local_50 = &local_b8;
  FUN_140e64370();
  gml_Script_anon_4496_Buff_OFFERINGSINIT(param_1,param_2,&local_128,4,&local_68);
  if (DAT_141ddc16b == '\0') {
    uVar4 = FUN_140e63aa0(DAT_1419f5898);
    FUN_140e8da10(param_1,DAT_141ddeac0,uVar4);
    FUN_140e64380(DAT_141ddeac0,"gml_Script_Buff");
    FUN_140e64380(param_1,"gml_Script_Buff");
  }
  FUN_140e643a0(param_1,DAT_141ddeac0);
  local_108 = 0xa2;
  puVar5 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f6288);
  if (puVar5 != &DAT_141dd2588) {
    local_138 = _DAT_141dd2588;
    uStack_134 = uRam0000000141dd258c;
    uStack_130 = uRam0000000141dd2590;
    uStack_12c = DAT_141dd2594;
    if ((1 << ((byte)*(undefined4 *)(puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_138);
  }
  local_108 = 0xa4;
  uStack_13c = 6;
  if (0 < (int)local_100[0]) {
    puVar9 = (undefined8 *)*local_f8;
  }
  puVar3 = &local_148;
  local_148 = param_1;
  FUN_140e98ef0(param_1,param_2,uVar2,puVar9,puVar3);
  uVar10 = (undefined4)((ulonglong)puVar3 >> 0x20);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_108 = 0xa5;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5948);
  FUN_140e609c0(param_1);
  puVar7 = (undefined4 *)
           FUN_140e634e0(param_1,param_2,&local_128,0,CONCAT44(uVar10,DAT_1419fd6d8),0);
  if (puVar7 != puVar6) {
    local_138 = *puVar7;
    uStack_134 = puVar7[1];
    uStack_130 = puVar7[2];
    uStack_12c = puVar7[3];
    if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_138);
  }
  FUN_140e60910(1);
  local_108 = 0xa7;
  puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f57b8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_148,gml_Script_Buff,param_1);
  if (&local_148 != puVar9) {
    local_138 = (undefined4)local_148;
    uStack_134 = local_148._4_4_;
    uStack_130 = uStack_140;
    uStack_12c = uStack_13c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    FUN_140041b80(puVar9,&local_138);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140e60910(1);
  local_108 = 0xae;
  puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0aae8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_148,gml_Script_Debuff,param_1);
  if (&local_148 != puVar9) {
    local_138 = (undefined4)local_148;
    uStack_134 = local_148._4_4_;
    uStack_130 = uStack_140;
    uStack_12c = uStack_13c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    FUN_140041b80(puVar9,&local_138);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  _eh_vector_destructor_iterator_(&local_e8,0x10,8,FUN_140041b30);
  if (0 < (int)local_100[0]) {
    puVar9 = local_f8;
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
  FUN_140e4cd60(local_f8);
  DAT_141dc7a50 = (undefined8 *)local_118;
  return param_3;
}

