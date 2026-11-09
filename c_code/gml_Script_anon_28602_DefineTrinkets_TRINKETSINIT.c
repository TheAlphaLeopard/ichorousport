// gml_Script_anon_28602_DefineTrinkets_TRINKETSINIT @ 0x140606550

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_28602_DefineTrinkets_TRINKETSINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  code *pcVar7;
  ulonglong uVar8;
  ulonglong in_stack_fffffffffffffe20;
  undefined8 **ppuVar9;
  ulonglong uVar10;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  char *local_190;
  undefined4 local_188;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined1 *local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined8 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined1 *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  
  local_190 = "gml_Script_anon@28296@DefineTrinkets@TRINKETSINIT";
  local_198 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_198;
  local_188 = 0x41d;
  pcVar7 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_e8,0x10,8,FUN_1400424d0,FUN_140041b30);
  uStack_11c = 0xffffff;
  local_128 = (undefined1 *)0x0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1f1b0);
  uStack_14c = 0xffffff;
  local_158 = 0;
  uStack_15c = 0xffffff;
  local_168 = 0;
  uStack_16c = 0xffffff;
  local_178 = 0;
  local_1ac = 0;
  local_1b8 = 0;
  local_19c = 0;
  local_1a8 = 0;
  local_ec = 0;
  local_f8 = 0;
  local_fc = 0;
  local_108 = 0;
  local_10c = 0;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_188 = 0x41e;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  uVar8 = (ulonglong)pcVar7 & 0xffffffffffffff00;
  FUN_140e87440(param_5,DAT_141a1f440,0x80000000,&local_128,uVar8,
                in_stack_fffffffffffffe20 & 0xffffffffffffff00);
  uVar2 = (undefined4)(uVar8 >> 0x20);
  local_1d8 = local_128;
  uStack_1d0 = uStack_120;
  uStack_1cc = uStack_11c;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  FUN_140041b80(&local_1c8,&local_1d8);
  local_188 = 0x41f;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  local_68 = &local_1c8;
  ppuVar9 = &local_68;
  uVar8 = CONCAT44(uVar2,DAT_141a02ef8);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_1b8,1,uVar8,ppuVar9);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_188 = 0x41f;
    goto LAB_140606bb4;
  }
  local_188 = 0x420;
  uVar10 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(&local_1c8,DAT_1419ffb48,0x80000000,&local_138,uVar8,uVar10);
  cVar1 = FUN_140e491e0(&local_138);
  if (cVar1 != '\0') goto LAB_140606921;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  uVar10 = uVar10 & 0xffffffffffffff00;
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(&local_1c8,DAT_1419f59d8,0x80000000,&local_148,uVar8,uVar10);
  FUN_140e87440(uVar4,DAT_1419f6028,0x80000000,&local_158,uVar8 & 0xffffffffffffff00,
                uVar10 & 0xffffffffffffff00);
  local_1d8 = (undefined1 *)local_158;
  uStack_1d0 = uStack_150;
  uStack_1cc = uStack_14c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140041b80(&local_e8,&local_1d8);
  local_68 = &local_e8;
  switch(local_1bc) {
  default:
switchD_14060686f_caseD_1:
    uVar4 = 0;
    break;
  case 6:
    uVar4 = local_1c8;
    break;
  case 0xf:
    iVar3 = (int)((ulonglong)local_1c8 >> 0x20);
    if ((iVar3 != 0x1000000) && (iVar3 != 0x4000001)) goto switchD_14060686f_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_1c8);
    uVar4 = FUN_140e87250(uVar2);
  }
  uVar4 = FUN_140e63610(uVar4,param_2,&local_1b8,1,&local_148,&local_68);
  uStack_1cc = 0;
  local_1d8 = &DAT_bff0000000000000;
  iVar3 = FUN_140e851f0(uVar4,&local_1d8,DAT_141955260,0);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if (iVar3 != 0) {
LAB_140606921:
    local_188 = 0x421;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    FUN_140e87170(&local_1c8,DAT_1419fe0e8,0x80000000,&local_168,param_1,param_2);
    FUN_140e87170(&local_1c8,DAT_1419fe158,0x80000000,&local_178,param_1,param_2);
    local_1d8 = (undefined1 *)local_168;
    uStack_1d0 = uStack_160;
    uStack_1cc = uStack_15c;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_1d8);
    local_60 = local_d8;
    local_1d8 = (undefined1 *)local_178;
    uStack_1d0 = uStack_170;
    uStack_1cc = uStack_16c;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_1d8);
    local_58 = local_c8;
    puVar6 = (undefined8 *)FUN_140e8da20(&local_f8,param_1,2,&DAT_141dc6760,&DAT_1419e6ae0);
    if (puVar6 != &local_b8) {
      local_1d8 = (undefined1 *)*puVar6;
      uStack_1d0 = *(undefined4 *)(puVar6 + 1);
      uStack_1cc = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      FUN_140041b80(&local_b8,&local_1d8);
    }
    local_50 = &local_b8;
    puVar6 = (undefined8 *)FUN_140e8da20(&local_108,param_1,2,&DAT_1419e6a60,&DAT_1419e6b80);
    if (puVar6 != &local_a8) {
      local_1d8 = (undefined1 *)*puVar6;
      uStack_1d0 = *(undefined4 *)(puVar6 + 1);
      uStack_1cc = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      FUN_140041b80(&local_a8,&local_1d8);
    }
    local_48 = &local_a8;
    local_1d8 = (undefined1 *)CONCAT44(uRam00000001419e6af4,_DAT_1419e6af0);
    uStack_1d0 = uRam00000001419e6af8;
    uStack_1cc = uRam00000001419e6afc;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_1d8);
    local_40 = local_98;
    puVar6 = (undefined8 *)FUN_140e8da20(&local_118,param_1,2,&DAT_1419e6ab0,&DAT_1419e6b80);
    if (puVar6 != &local_88) {
      local_1d8 = (undefined1 *)*puVar6;
      uStack_1d0 = *(undefined4 *)(puVar6 + 1);
      uStack_1cc = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      FUN_140041b80(&local_88,&local_1d8);
    }
    local_38 = &local_88;
    local_30 = &local_1c8;
    gml_Script_get_blood_col(param_1,param_2,&local_1a8,7,&local_60);
  }
LAB_140606bb4:
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  _eh_vector_destructor_iterator_(&local_e8,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_198;
  return param_3;
}

