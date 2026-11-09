// gml_Script_anon_7833____struct___129_JUKEBOX_system @ 0x14039a7d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_7833____struct___129_JUKEBOX_system
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 **ppuVar8;
  ulonglong uVar9;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined8 *local_80;
  undefined1 *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  uint local_38 [2];
  undefined8 *local_30;
  
  local_90 = "gml_Script_anon@7237@___struct___129@JUKEBOX_system";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0x103;
  FUN_140041df0(local_38,param_4,2,param_5);
  _eh_vector_constructor_iterator_(&local_e8,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_ec = 0xffffff;
  local_f8 = 0;
  local_3c = 0xffffff;
  local_48 = 0;
  uStack_fc = 0xffffff;
  local_108 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_10c = 0;
  local_118 = 0;
  local_9c = 0;
  local_a8 = 0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0x104;
  uVar7 = (ulonglong)local_38[0];
  if ((int)local_38[0] < 2) {
    puVar5 = &DAT_1419df7b0;
LAB_14039a8fd:
    local_128 = *(undefined4 *)puVar5;
    uStack_124 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_120 = *(undefined4 *)(puVar5 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_128);
  }
  else {
    puVar5 = (undefined8 *)local_30[1];
    if (puVar5 != &local_c8) goto LAB_14039a8fd;
  }
  local_70 = &local_c8;
  if ((int)local_38[0] < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_30[1];
  }
  puVar3 = (undefined8 *)gml_Script_jump_predictor(param_1,param_2,&local_118,1,&local_70);
  if (puVar3 != puVar5) {
    local_128 = *(undefined4 *)puVar3;
    uStack_124 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_120 = *(undefined4 *)(puVar3 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_128);
  }
  local_88 = 0x105;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f4c48);
  if ((int)local_38[0] < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_14039a9fc:
    local_128 = *(undefined4 *)puVar5;
    uStack_124 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_120 = *(undefined4 *)(puVar5 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_128);
  }
  else {
    puVar5 = (undefined8 *)*local_30;
    if (puVar5 != &local_e8) goto LAB_14039a9fc;
  }
  local_80 = &local_e8;
  ppuVar8 = &local_80;
  puVar5 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_118,1,uVar4,ppuVar8);
  if (puVar5 != &local_f8) {
    local_128 = *(undefined4 *)puVar5;
    uStack_124 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_120 = *(undefined4 *)(puVar5 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_128);
  }
  local_88 = 0x106;
  iVar1 = FUN_140e851f0(&local_f8,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_88 = 0x106;
    if (param_3 == &DAT_1419df7b0) goto LAB_14039af63;
    local_128 = (undefined4)DAT_1419df7b0;
    uStack_124 = DAT_1419df7b0._4_4_;
    uStack_120 = DAT_1419df7b8;
    uStack_11c = DAT_1419df7bc;
    goto LAB_14039af3b;
  }
  local_88 = 0x107;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  FUN_140e87440(&local_f8,DAT_1419f49b8,0x80000000,&local_48,uVar4 & 0xffffffffffffff00,
                (ulonglong)ppuVar8 & 0xffffffffffffff00);
  if ((int)local_38[0] < 2) {
    puVar5 = &DAT_1419df7b0;
LAB_14039ab56:
    local_128 = *(undefined4 *)puVar5;
    uStack_124 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_120 = *(undefined4 *)(puVar5 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_128);
  }
  else {
    puVar5 = (undefined8 *)local_30[1];
    if (puVar5 != &local_e8) goto LAB_14039ab56;
  }
  local_80 = &local_e8;
  switch(local_ec) {
  default:
switchD_14039abac_caseD_1:
    uVar6 = 0;
    break;
  case 6:
    uVar6 = local_f8;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)local_f8 >> 0x20);
    if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) goto switchD_14039abac_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_f8);
    uVar6 = FUN_140e87250(uVar2);
  }
  ppuVar8 = &local_80;
  puVar5 = &local_48;
  puVar3 = (undefined8 *)FUN_140e63610(uVar6,param_2,&local_118,1,puVar5,ppuVar8);
  if (puVar3 != &local_108) {
    local_128 = *(undefined4 *)puVar3;
    uStack_124 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_120 = *(undefined4 *)(puVar3 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_128);
  }
  local_88 = 0x108;
  iVar1 = FUN_140e851f0(&local_108,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_88 = 0x108;
    if (param_3 == &DAT_1419df7b0) goto LAB_14039af63;
    local_128 = (undefined4)DAT_1419df7b0;
    uStack_124 = DAT_1419df7b0._4_4_;
    uStack_120 = DAT_1419df7b8;
    uStack_11c = DAT_1419df7bc;
    goto LAB_14039af3b;
  }
  local_88 = 0x109;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  uVar9 = (ulonglong)ppuVar8 & 0xffffffffffffff00;
  uVar4 = (ulonglong)puVar5 & 0xffffffffffffff00;
  FUN_140e87440(&local_108,DAT_1419f49a8,0x80000000,&local_58,uVar4,uVar9);
  FUN_140e87440(&local_108,DAT_1419f4ce8,0x80000000,&local_68,uVar4 & 0xffffffffffffff00,
                uVar9 & 0xffffffffffffff00);
  switch(uStack_fc) {
  default:
switchD_14039ad74_caseD_1:
    uVar6 = 0;
    break;
  case 6:
    uVar6 = local_108;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)local_108 >> 0x20);
    if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) goto switchD_14039ad74_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_108);
    uVar6 = FUN_140e87250(uVar2);
  }
  puVar5 = (undefined8 *)FUN_140e63610(uVar6,param_2,&local_a8,0,&local_58,0);
  if (puVar5 != &local_e8) {
    local_128 = *(undefined4 *)puVar5;
    uStack_124 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_120 = *(undefined4 *)(puVar5 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_128);
  }
  local_80 = &local_e8;
  local_128 = _DAT_141dc6510;
  uStack_124 = uRam0000000141dc6514;
  uStack_120 = uRam0000000141dc6518;
  uStack_11c = uRam0000000141dc651c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_128);
  local_78 = local_d8;
  switch(uStack_fc) {
  default:
switchD_14039ae5f_caseD_1:
    uVar6 = 0;
    break;
  case 6:
    uVar6 = local_108;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)local_108 >> 0x20);
    if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) goto switchD_14039ae5f_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_108);
    uVar6 = FUN_140e87250(uVar2);
  }
  puVar5 = &local_68;
  puVar3 = (undefined8 *)FUN_140e63610(uVar6,param_2,&local_b8,0,puVar5,0);
  uVar2 = (undefined4)((ulonglong)puVar5 >> 0x20);
  if (puVar3 != &local_c8) {
    local_128 = *(undefined4 *)puVar3;
    uStack_124 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_120 = *(undefined4 *)(puVar3 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_128);
  }
  local_70 = &local_c8;
  FUN_140e634e0(param_1,param_2,&local_118,3,CONCAT44(uVar2,DAT_1419f4a48),&local_80);
  local_88 = 0x10a;
  if (&local_108 != param_3) {
    local_128 = (undefined4)local_108;
    uStack_124 = local_108._4_4_;
    uStack_120 = uStack_100;
    uStack_11c = uStack_fc;
LAB_14039af3b:
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_128);
  }
LAB_14039af63:
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(&local_e8,0x10,3,FUN_140041b30);
  if (0 < (int)local_38[0]) {
    puVar5 = local_30;
    do {
      puVar3 = (undefined8 *)*puVar5;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined4 *)((longlong)puVar3 + 0xc) = 5;
      puVar5 = puVar5 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  FUN_140e4cd60(local_30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}

