// gml_Script_BM_NOINPUT @ 0x14023eb80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script_BM_NOINPUT(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 **ppuVar7;
  undefined4 uVar9;
  undefined8 uVar8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8 [3];
  byte local_ac;
  undefined4 local_a8 [3];
  byte local_9c;
  undefined4 local_98 [3];
  byte local_8c;
  undefined4 *local_88;
  undefined4 *local_80;
  undefined4 *local_78;
  undefined8 local_70;
  char *local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 *local_48;
  undefined4 *local_40;
  
  local_68 = "gml_Script_BM_DEFAULT_BUTTON_SETTINGS";
  local_70 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_70;
  local_60 = 0x97;
  _eh_vector_constructor_iterator_(local_b8,0x10,3,FUN_1400424d0,FUN_140041b30);
  puVar1 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a454a8);
  puVar2 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a45498);
  puVar3 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a452b8);
  puVar4 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a449e8);
  puVar5 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a44cf8);
  local_48 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a45318);
  local_40 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a452f8);
  local_cc = 0;
  local_d8 = 0;
  local_4c = 0;
  local_58 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dddc30) {
    _Init_thread_header(&DAT_141dddc30);
    if (DAT_141dddc30 == -1) {
      DAT_141dddc78 = FUN_140e63aa0(DAT_141a448e8);
      _Init_thread_footer(&DAT_141dddc30);
    }
  }
  FUN_140e643a0(param_1,DAT_141dddc78);
  local_60 = 0x99;
  puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a44d18);
  local_c8 = _DAT_141dcdf28;
  uStack_c4 = uRam0000000141dcdf2c;
  uStack_c0 = uRam0000000141dcdf30;
  uStack_bc = DAT_141dcdf34;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_c8);
  local_88 = local_b8;
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_c8,gml_Script____struct___70_BM_DEFAULT_BUTTON_SETTINGS_BYTEMAP_config,0);
  if (&local_c8 != puVar1) {
    local_e8 = local_c8;
    uStack_e4 = uStack_c4;
    uStack_e0 = uStack_c0;
    uStack_dc = uStack_bc;
    if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_e8);
  }
  FUN_140e60910(1);
  if (puVar1 != local_a8) {
    local_e8 = *puVar1;
    uStack_e4 = puVar1[1];
    uStack_e0 = puVar1[2];
    uStack_dc = puVar1[3];
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_e8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_80 = local_a8;
  ppuVar7 = &local_88;
  puVar1 = (undefined4 *)gml_Script_anon_6431_INIT(param_1,param_2,&local_58,1,ppuVar7);
  uVar9 = (undefined4)((ulonglong)ppuVar7 >> 0x20);
  if (puVar1 != local_98) {
    local_e8 = *puVar1;
    uStack_e4 = puVar1[1];
    uStack_e0 = puVar1[2];
    uStack_dc = puVar1[3];
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_e8);
  }
  local_78 = local_98;
  FUN_140e609c0(param_1);
  uVar8 = CONCAT44(uVar9,DAT_1419fd6d8);
  puVar1 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_d8,2,uVar8,&local_80);
  uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
  if (puVar1 != puVar6) {
    local_e8 = *puVar1;
    uStack_e4 = puVar1[1];
    uStack_e0 = puVar1[2];
    uStack_dc = puVar1[3];
    if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_e8);
  }
  FUN_140e60910(1);
  local_60 = 0xa3;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a44db8);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_c8,gml_Script____struct___71_BM_DEFAULT_BUTTON_SETTINGS_BYTEMAP_config,0);
  if (&local_c8 != puVar2) {
    local_e8 = local_c8;
    uStack_e4 = uStack_c4;
    uStack_e0 = uStack_c0;
    uStack_dc = uStack_bc;
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_e8);
  }
  FUN_140e60910(1);
  if (puVar2 != local_b8) {
    local_e8 = *puVar2;
    uStack_e4 = puVar2[1];
    uStack_e0 = puVar2[2];
    uStack_dc = puVar2[3];
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_e8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_88 = local_b8;
  FUN_140e609c0(param_1);
  uVar8 = CONCAT44(uVar9,DAT_1419fd6d8);
  puVar2 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_d8,1,uVar8,&local_88);
  uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
  if (puVar2 != puVar1) {
    local_e8 = *puVar2;
    uStack_e4 = puVar2[1];
    uStack_e0 = puVar2[2];
    uStack_dc = puVar2[3];
    if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_e8);
  }
  FUN_140e60910(1);
  local_60 = 0xaa;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a447f8);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_c8,gml_Script____struct___72_BM_DEFAULT_BUTTON_SETTINGS_BYTEMAP_config,0);
  if (&local_c8 != puVar3) {
    local_e8 = local_c8;
    uStack_e4 = uStack_c4;
    uStack_e0 = uStack_c0;
    uStack_dc = uStack_bc;
    if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_e8);
  }
  FUN_140e60910(1);
  if (puVar3 != local_b8) {
    local_e8 = *puVar3;
    uStack_e4 = puVar3[1];
    uStack_e0 = puVar3[2];
    uStack_dc = puVar3[3];
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_e8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_88 = local_b8;
  FUN_140e609c0(param_1);
  uVar8 = CONCAT44(uVar9,DAT_1419fd6d8);
  puVar2 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_d8,1,uVar8,&local_88);
  uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
  if (puVar2 != puVar1) {
    local_e8 = *puVar2;
    uStack_e4 = puVar2[1];
    uStack_e0 = puVar2[2];
    uStack_dc = puVar2[3];
    if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_e8);
  }
  FUN_140e60910(1);
  local_60 = 0xb1;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a44e88);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_c8,gml_Script____struct___73_BM_DEFAULT_BUTTON_SETTINGS_BYTEMAP_config,0);
  if (&local_c8 != puVar4) {
    local_e8 = local_c8;
    uStack_e4 = uStack_c4;
    uStack_e0 = uStack_c0;
    uStack_dc = uStack_bc;
    if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_e8);
  }
  FUN_140e60910(1);
  if (puVar4 != local_b8) {
    local_e8 = *puVar4;
    uStack_e4 = puVar4[1];
    uStack_e0 = puVar4[2];
    uStack_dc = puVar4[3];
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_e8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_88 = local_b8;
  FUN_140e609c0(param_1);
  uVar8 = CONCAT44(uVar9,DAT_1419fd6d8);
  puVar2 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_d8,1,uVar8,&local_88);
  uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
  if (puVar2 != puVar1) {
    local_e8 = *puVar2;
    uStack_e4 = puVar2[1];
    uStack_e0 = puVar2[2];
    uStack_dc = puVar2[3];
    if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_e8);
  }
  FUN_140e60910(1);
  local_60 = 0xb8;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a45218);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_c8,gml_Script____struct___74_BM_DEFAULT_BUTTON_SETTINGS_BYTEMAP_config,0);
  if (&local_c8 != puVar5) {
    local_e8 = local_c8;
    uStack_e4 = uStack_c4;
    uStack_e0 = uStack_c0;
    uStack_dc = uStack_bc;
    if ((1 << ((byte)puVar5[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_e8);
  }
  FUN_140e60910(1);
  if (puVar5 != local_b8) {
    local_e8 = *puVar5;
    uStack_e4 = puVar5[1];
    uStack_e0 = puVar5[2];
    uStack_dc = puVar5[3];
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_e8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_88 = local_b8;
  FUN_140e609c0(param_1);
  uVar8 = CONCAT44(uVar9,DAT_1419fd6d8);
  puVar2 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_d8,1,uVar8,&local_88);
  uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
  if (puVar2 != puVar1) {
    local_e8 = *puVar2;
    uStack_e4 = puVar2[1];
    uStack_e0 = puVar2[2];
    uStack_dc = puVar2[3];
    if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_e8);
  }
  FUN_140e60910(1);
  local_60 = 0xbf;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a45598);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_c8,gml_Script_BM_DEFAULT_BUTTON_SETTINGS,0);
  puVar1 = local_48;
  if (&local_c8 != local_48) {
    local_e8 = local_c8;
    uStack_e4 = uStack_c4;
    uStack_e0 = uStack_c0;
    uStack_dc = uStack_bc;
    if ((1 << ((byte)local_48[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_48);
    }
    FUN_140041b80(puVar1,&local_e8);
  }
  FUN_140e60910(1);
  if (puVar1 != local_b8) {
    local_e8 = *puVar1;
    uStack_e4 = puVar1[1];
    uStack_e0 = puVar1[2];
    uStack_dc = puVar1[3];
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_e8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_88 = local_b8;
  FUN_140e609c0(param_1);
  uVar8 = CONCAT44(uVar9,DAT_1419fd6d8);
  puVar1 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_d8,1,uVar8,&local_88);
  uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
  if (puVar1 != puVar2) {
    local_e8 = *puVar1;
    uStack_e4 = puVar1[1];
    uStack_e0 = puVar1[2];
    uStack_dc = puVar1[3];
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_e8);
  }
  FUN_140e60910(1);
  local_60 = 0xc6;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a44cb8);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_c8,gml_Script_BM_INPUTS,0);
  puVar1 = local_40;
  if (&local_c8 != local_40) {
    local_e8 = local_c8;
    uStack_e4 = uStack_c4;
    uStack_e0 = uStack_c0;
    uStack_dc = uStack_bc;
    if ((1 << ((byte)local_40[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_40);
    }
    FUN_140041b80(puVar1,&local_e8);
  }
  FUN_140e60910(1);
  if (puVar1 != local_b8) {
    local_e8 = *puVar1;
    uStack_e4 = puVar1[1];
    uStack_e0 = puVar1[2];
    uStack_dc = puVar1[3];
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_e8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_88 = local_b8;
  FUN_140e609c0(param_1);
  puVar1 = (undefined4 *)
           FUN_140e634e0(param_1,param_2,&local_d8,1,CONCAT44(uVar9,DAT_1419fd6d8),&local_88);
  if (puVar1 != puVar2) {
    local_e8 = *puVar1;
    uStack_e4 = puVar1[1];
    uStack_e0 = puVar1[2];
    uStack_dc = puVar1[3];
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_e8);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_70;
  return param_3;
}

