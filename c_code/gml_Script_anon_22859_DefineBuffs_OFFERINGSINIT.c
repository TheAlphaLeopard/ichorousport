// gml_Script_anon_22859_DefineBuffs_OFFERINGSINIT @ 0x1403df3c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_22859_DefineBuffs_OFFERINGSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong *local_res8;
  undefined8 local_res10;
  code *pcVar7;
  code *pcVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined1 **in_stack_fffffffffffffe60;
  ulonglong uVar11;
  undefined1 **ppuVar12;
  undefined1 *local_198;
  undefined8 uStack_190;
  double local_188;
  uint local_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  char *local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined4 local_124;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [16];
  longlong local_78;
  
  local_140 = "gml_Script_anon@22457@DefineBuffs@OFFERINGSINIT";
  local_148 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_148;
  local_138 = 0x3b0;
  pcVar7 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_f8,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_124 = 0xffffff;
  local_130 = 0;
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1f1b0);
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_17c = 0xffffff;
  local_188 = 0.0;
  local_15c = 0;
  local_168 = 0;
  local_114 = 0;
  local_120 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_138 = 0x3b2;
  uStack_190 = CONCAT44(0xd,(undefined4)uStack_190);
  local_198 = (undefined1 *)0x0;
  local_158 = 0;
  uStack_150 = uStack_190;
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  FUN_140041b80(&local_130,&local_158);
  local_138 = 0x3b3;
  uStack_150._4_4_ = 0xf;
  local_158 = 0x10000000000009d;
  iVar2 = FUN_140e63cb0(local_88,&local_res8,&local_res10,&local_158);
  if ((1 << ((byte)uStack_150._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if (0 < iVar2) {
    do {
      local_138 = 0x3b5;
      uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a56cd0);
      uStack_150._4_4_ = 10;
      local_158 = 2;
      iVar2 = FUN_140e851f0(uVar5,&local_158,DAT_141955260,0);
      if ((1 << ((byte)uStack_150._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      if (iVar2 == 0) {
        local_138 = 0x3b5;
      }
      else {
        local_138 = 0x3b6;
        pcVar8 = pcVar7;
        if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
          pcVar8 = pcVar7;
        }
        local_168 = 0;
        local_160 = 0;
        local_15c = 5;
        pcVar7 = (code *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f59d8);
        FUN_140e87440(uVar4,DAT_1419f5bc8,0x80000000,&local_98,
                      (ulonglong)pcVar8 & 0xffffffffffffff00,
                      (ulonglong)in_stack_fffffffffffffe60 & 0xffffffffffffff00);
        local_108 = (undefined4)local_98;
        uStack_104 = local_98._4_4_;
        uStack_100 = uStack_90;
        uStack_fc = uStack_8c;
        if ((1 << ((byte)_local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_f8);
        }
        FUN_140041b80(local_f8,&local_108);
        local_d8 = local_f8;
        in_stack_fffffffffffffe60 = &local_d8;
        uVar5 = FUN_140e63610(local_res8,local_res10,&local_168,1,pcVar7,in_stack_fffffffffffffe60);
        uStack_190 = uStack_190 & 0xffffffff;
        local_198 = &DAT_bff0000000000000;
        iVar2 = FUN_140e851f0(uVar5,&local_198,DAT_141955260,0);
        if ((1 << ((byte)(uStack_190 >> 0x20) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        if (iVar2 != 0) {
          local_138 = 0x3b8;
          local_198 = (undefined1 *)0x3ff0000000000000;
          uStack_190 = CONCAT44(0xd,(undefined4)uStack_190);
          local_108 = 0;
          uStack_104 = 0x3ff00000;
          uStack_100 = (undefined4)uStack_190;
          uStack_fc = 0xd;
          if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_130);
          }
          FUN_140041b80(&local_130,&local_108);
          local_138 = 0x3b9;
          break;
        }
        local_138 = 0x3b6;
      }
      cVar1 = FUN_140e643f0(local_88,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_88,&local_res8,&local_res10);
  local_138 = 0x3bd;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  uStack_190._4_4_ = 0xf;
  local_198 = (undefined1 *)0x1000000000000ee;
  uVar11 = (ulonglong)in_stack_fffffffffffffe60 & 0xffffffffffffff00;
  uVar9 = (ulonglong)pcVar7 & 0xffffffffffffff00;
  FUN_140e87440(&local_198,DAT_1419f5868,0x80000000,&local_178,uVar9,uVar11);
  if ((1 << ((byte)uStack_190._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  FUN_140e87440(&local_178,DAT_1419f5848,0x80000000,&local_a8,uVar9 & 0xffffffffffffff00,
                uVar11 & 0xffffffffffffff00);
  local_108 = _DAT_141dd2898;
  uStack_104 = uRam0000000141dd289c;
  uStack_100 = uRam0000000141dd28a0;
  uStack_fc = DAT_141dd28a4;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_108);
  local_d8 = local_f8;
  switch(local_16c) {
  default:
switchD_1403df8a1_caseD_1:
    uVar4 = 0;
    break;
  case 6:
    uVar4 = local_178;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_178 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_1403df8a1_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar3 = FUN_140e4a8b0(&local_178);
    uVar4 = FUN_140e87250(uVar3);
  }
  ppuVar12 = &local_d8;
  puVar10 = &local_a8;
  uVar4 = FUN_140e63610(uVar4,local_res10,&local_168,1,puVar10,ppuVar12);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') goto LAB_1403dfbad;
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5948);
  ppuVar12 = (undefined1 **)((ulonglong)ppuVar12 & 0xffffffffffffff00);
  puVar10 = (undefined8 *)((ulonglong)puVar10 & 0xffffffffffffff00);
  FUN_140e87440(uVar4,DAT_1419f5c38,0x80000000,&local_b8,puVar10,ppuVar12);
  uStack_190._4_4_ = 0;
  local_198 = (undefined1 *)0x0;
  iVar2 = FUN_140e851f0(&local_b8,&local_198,DAT_141955260,1);
  if ((1 << ((byte)uStack_190._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if (iVar2 < 1) goto LAB_1403dfbad;
  local_138 = 0x3bf;
  cVar1 = FUN_140e491e0(&local_130);
  if (cVar1 != '\0') {
    local_138 = 0x3c0;
    if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_120);
    }
    local_120 = 0;
    local_118 = 0;
    local_114 = 5;
    uStack_190._4_4_ = 0xf;
    local_198 = (undefined1 *)0x1000000000000ee;
    uVar11 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
    uVar9 = (ulonglong)puVar10 & 0xffffffffffffff00;
    FUN_140e87440(&local_198,DAT_1419f5868,0x80000000,&local_178,uVar9,uVar11);
    if ((1 << ((byte)uStack_190._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140e87440(&local_178,DAT_141a55540,0x80000000,&local_c8,uVar9 & 0xffffffffffffff00,
                  uVar11 & 0xffffffffffffff00);
    local_108 = _DAT_141dd2898;
    uStack_104 = uRam0000000141dd289c;
    uStack_100 = uRam0000000141dd28a0;
    uStack_fc = DAT_141dd28a4;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_108);
    local_d0 = local_e8;
    switch(local_16c) {
    default:
switchD_1403dfa9c_caseD_1:
      uVar4 = 0;
      break;
    case 6:
      uVar4 = local_178;
      break;
    case 0xf:
      iVar2 = (int)((ulonglong)local_178 >> 0x20);
      if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_1403dfa9c_caseD_1;
    case 0:
    case 7:
    case 10:
    case 0xd:
      uVar3 = FUN_140e4a8b0(&local_178);
      uVar4 = FUN_140e87250(uVar3);
    }
    ppuVar12 = &local_d0;
    puVar10 = &local_c8;
    FUN_140e63610(uVar4,local_res10,&local_120,1,&local_c8,ppuVar12);
  }
  local_138 = 0x3c1;
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5948);
  FUN_140e87440(uVar4,DAT_1419f5c38,0x80000000,&local_188,(ulonglong)puVar10 & 0xffffffffffffff00,
                (ulonglong)ppuVar12 & 0xffffffffffffff00);
  uVar6 = local_17c & 0xffffff;
  if (uVar6 == 0) {
LAB_1403dfb83:
    local_188 = local_188 + -1.0;
  }
  else if (uVar6 == 1) {
    local_188 = (double)FUN_140e4b060(&local_188);
    local_188 = local_188 - 1.0;
    local_17c = 0;
  }
  else if (uVar6 == 7) {
    local_188 = (double)CONCAT44(local_188._4_4_,local_188._0_4_ + -1);
  }
  else if (uVar6 == 10) {
    local_188 = (double)((longlong)local_188 + -1);
  }
  else {
    if (uVar6 == 0xd) {
      local_17c = 0;
      goto LAB_1403dfb83;
    }
    FUN_140042910(&DAT_14172c450,&local_188,&local_188);
  }
  FUN_140e87930(uVar4,DAT_1419f5c38,0x80000000,&local_188);
LAB_1403dfbad:
  if (local_78 != 0) {
    FUN_140e4cd60();
    local_78 = 0;
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  _eh_vector_destructor_iterator_(local_f8,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_148;
  return param_3;
}

