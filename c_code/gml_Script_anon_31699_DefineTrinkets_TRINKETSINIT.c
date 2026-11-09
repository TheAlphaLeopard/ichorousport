// gml_Script_anon_31699_DefineTrinkets_TRINKETSINIT @ 0x14060a0b0

undefined8 *
gml_Script_anon_31699_DefineTrinkets_TRINKETSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 **ppuVar6;
  undefined8 uVar7;
  undefined1 **ppuVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  double *pdVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  code *pcVar15;
  undefined8 *puVar16;
  double **ppdVar17;
  ulonglong uVar18;
  undefined8 **ppuVar19;
  ulonglong in_stack_fffffffffffffdb0;
  double **ppdVar20;
  ulonglong uVar21;
  undefined1 *local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 local_22c;
  double local_228;
  uint local_21c;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 local_20c;
  undefined1 *local_208;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 local_1ec;
  undefined8 local_1e8;
  char *local_1e0;
  undefined4 local_1d8;
  undefined1 **local_1d0;
  undefined8 *local_1c8;
  double *local_1c0;
  undefined8 *local_1b8;
  double *local_1b0;
  undefined1 *local_1a8 [2];
  undefined8 local_198 [2];
  double local_188;
  byte local_17c;
  undefined8 local_178;
  byte local_16c;
  double local_168;
  byte local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined1 *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined1 *local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined1 *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined1 *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined1 *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  local_1e0 = "gml_Script_anon@30782@DefineTrinkets@TRINKETSINIT";
  local_1e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1e8;
  local_1d8 = 0x465;
  pcVar15 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_1a8,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_5c = 0xffffff;
  local_68 = (undefined1 *)0x0;
  local_1fc = 0xffffff;
  local_208 = (undefined1 *)0x0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_f8 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1f1b0);
  uStack_10c = 0xffffff;
  local_118 = (undefined1 *)0x0;
  local_1ec = 0xffffff;
  local_1f8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  ppuVar6 = (undefined1 **)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a572b0);
  uVar7 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57320);
  uStack_8c = 0xffffff;
  local_98 = (undefined1 *)0x0;
  local_12c = 0xffffff;
  local_138 = 0;
  uStack_11c = 0xffffff;
  local_128 = (undefined1 *)0x0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_e8 = (undefined1 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1ef20);
  uStack_ac = 0xffffff;
  local_b8 = (undefined1 *)0x0;
  ppuVar8 = (undefined1 **)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ff9e8);
  uStack_bc = 0xffffff;
  local_c8 = (undefined1 *)0x0;
  local_21c = 0xffffff;
  local_228 = 0.0;
  uStack_13c = 0xffffff;
  local_148 = (undefined1 *)0x0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_22c = 0;
  uVar13 = 0;
  uVar14 = 0;
  local_238 = 0;
  local_20c = 0;
  local_218 = 0;
  local_14c = 0;
  local_158 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1d8 = 0x466;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  uVar21 = (ulonglong)pcVar15 & 0xffffffffffffff00;
  FUN_140e87440(param_5,DAT_141a1f440,0x80000000,&local_68,uVar21,
                in_stack_fffffffffffffdb0 & 0xffffffffffffff00);
  uVar4 = (undefined4)(uVar21 >> 0x20);
  local_248 = local_68;
  uStack_240 = uStack_60;
  uStack_23c = uStack_5c;
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  FUN_140041b80(&local_208,&local_248);
  local_1d8 = 0x467;
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_238 = 0;
  local_230 = 0;
  local_22c = 5;
  local_1d0 = &local_208;
  ppdVar20 = (double **)&local_1d0;
  uVar21 = CONCAT44(uVar4,DAT_141a02ef8);
  uVar9 = FUN_140e634e0(param_1,param_2,&local_238,1,uVar21,ppdVar20);
  cVar2 = FUN_140e491e0(uVar9);
  if (cVar2 == '\0') {
    local_1d8 = 0x467;
    goto LAB_14060b0c9;
  }
  local_1d8 = 0x468;
  uVar18 = (ulonglong)ppdVar20 & 0xffffffffffffff00;
  uVar21 = uVar21 & 0xffffffffffffff00;
  FUN_140e87440(&local_208,DAT_141a56cd0,0x80000000,&local_78,uVar21,uVar18);
  uStack_23c = 10;
  local_248 = (undefined1 *)0x2;
  iVar3 = FUN_140e851f0(&local_78,&local_248,DAT_141955260,0);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if (iVar3 == 0) {
    local_1d8 = 0x468;
    goto LAB_14060b0c9;
  }
  local_1d8 = 0x46a;
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_238 = 0;
  local_230 = 0;
  local_22c = 5;
  uVar18 = uVar18 & 0xffffffffffffff00;
  uVar21 = uVar21 & 0xffffffffffffff00;
  FUN_140e87440(&local_208,DAT_1419f59d8,0x80000000,&local_88,uVar21,uVar18);
  FUN_140e87440(local_f8,DAT_1419f5f58,0x80000000,&local_118,uVar21 & 0xffffffffffffff00,
                uVar18 & 0xffffffffffffff00);
  local_248 = local_118;
  uStack_240 = uStack_110;
  uStack_23c = uStack_10c;
  if ((1 << ((byte)local_1a8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1a8);
  }
  FUN_140041b80(local_1a8,&local_248);
  local_1d0 = local_1a8;
  switch(local_1fc) {
  default:
switchD_14060a51c_caseD_1:
    puVar10 = (undefined1 *)0x0;
    break;
  case 6:
    puVar10 = local_208;
    break;
  case 0xf:
    iVar3 = (int)((ulonglong)local_208 >> 0x20);
    if ((iVar3 != 0x1000000) && (iVar3 != 0x4000001)) goto switchD_14060a51c_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar4 = FUN_140e4a8b0(&local_208);
    puVar10 = (undefined1 *)FUN_140e87250(uVar4);
  }
  ppdVar20 = (double **)&local_1d0;
  puVar16 = &local_88;
  puVar11 = (undefined8 *)FUN_140e63610(puVar10,param_2,&local_238,1,puVar16,ppdVar20);
  if (puVar11 != &local_1f8) {
    local_248 = (undefined1 *)*puVar11;
    uStack_240 = *(undefined4 *)(puVar11 + 1);
    uStack_23c = *(undefined4 *)((longlong)puVar11 + 0xc);
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_248);
  }
  local_1d8 = 0x46b;
  uStack_23c = 0;
  local_248 = &DAT_bff0000000000000;
  iVar3 = FUN_140e851f0(&local_1f8,&local_248,DAT_141955260,0);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if (iVar3 == 0) {
    local_1d8 = 0x46b;
LAB_14060b0c9:
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
    _eh_vector_destructor_iterator_(local_1a8,0x10,5,FUN_140041b30);
    DAT_141dc7a50 = (undefined8 *)local_1e8;
    return param_3;
  }
  local_1d8 = 0x46d;
  uVar18 = (ulonglong)ppdVar20 & 0xffffffffffffff00;
  uVar21 = (ulonglong)puVar16 & 0xffffffffffffff00;
  FUN_140e87440(&local_208,DAT_1419f62b8,0x80000000,&local_108,uVar21,uVar18);
  uStack_23c = 0;
  local_248 = (undefined1 *)0x4008000000000000;
  FUN_140042560(&local_108,&local_248);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  FUN_140e87930(&local_208,DAT_1419f62b8,0x80000000,&local_108);
  local_1d8 = 0x46f;
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_238 = 0;
  local_230 = 0;
  local_22c = 5;
  uVar21 = uVar21 & 0xffffffffffffff00;
  FUN_140e87440(uVar7,DAT_1419ff9b8,0x80000000,&local_98,uVar21,uVar18 & 0xffffffffffffff00);
  uVar4 = (undefined4)(uVar21 >> 0x20);
  if (ppuVar6 != local_1a8) {
    local_248 = *ppuVar6;
    uStack_240 = *(undefined4 *)(ppuVar6 + 1);
    uStack_23c = *(undefined4 *)((longlong)ppuVar6 + 0xc);
    if ((1 << ((byte)local_1a8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1a8);
    }
    FUN_140041b80(local_1a8,&local_248);
  }
  local_1d0 = local_1a8;
  local_248 = local_98;
  uStack_240 = uStack_90;
  uStack_23c = uStack_8c;
  if ((1 << ((byte)local_198[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_198);
  }
  FUN_140041b80(local_198,&local_248);
  local_1c8 = local_198;
  ppdVar20 = (double **)&local_1d0;
  ppdVar17 = (double **)CONCAT44(uVar4,DAT_141a573f0);
  uVar7 = FUN_140e634e0(param_1,param_2,&local_238,2,ppdVar17,ppdVar20);
  uStack_23c = 0;
  local_248 = &DAT_bff0000000000000;
  iVar3 = FUN_140e851f0(uVar7,&local_248,DAT_141955260,0);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_12c = 0xd;
  if (iVar3 == 0) {
    local_138 = 0;
  }
  else {
    local_138 = 0x3ff0000000000000;
  }
  local_1d8 = 0x471;
  cVar2 = FUN_140e491e0(&local_138);
  if (cVar2 != '\0') {
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_238 = 0;
    local_230 = 0;
    local_22c = 5;
    uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
    ppdVar20 = (double **)((ulonglong)ppdVar20 & 0xffffffffffffff00);
    FUN_140e87440(uVar7,DAT_1419ffdd8,0x80000000,&local_128,(ulonglong)ppdVar17 & 0xffffffffffffff00
                  ,ppdVar20);
    local_248 = local_128;
    uStack_240 = uStack_120;
    uStack_23c = uStack_11c;
    if ((1 << ((byte)local_1a8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1a8);
    }
    FUN_140041b80(local_1a8,&local_248);
    local_1d0 = local_1a8;
    local_1c8 = &local_1f8;
    ppdVar17 = (double **)&local_1d0;
    uVar7 = FUN_14022ffd0(param_1,param_2,&local_238,2,ppdVar17);
    uStack_23c = 0;
    local_248 = &DAT_bff0000000000000;
    iVar3 = FUN_140e851f0(uVar7,&local_248,DAT_141955260,0);
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    if (iVar3 == 0) {
      local_1d8 = 0x472;
      if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      local_218 = 0;
      local_210 = 0;
      local_20c = 5;
      uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
      uVar21 = (ulonglong)ppdVar17 & 0xffffffffffffff00;
      FUN_140e87440(uVar7,DAT_1419ffdd8,0x80000000,&local_128,uVar21,
                    (ulonglong)ppdVar20 & 0xffffffffffffff00);
      uVar13 = (undefined4)(uVar21 >> 0x20);
      local_248 = local_128;
      uStack_240 = uStack_120;
      uStack_23c = uStack_11c;
      if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_248);
      local_1c0 = &local_188;
      local_1b8 = &local_1f8;
      FUN_140e634e0(param_1,param_2,&local_218,2,CONCAT44(uVar13,DAT_1419fe568),&local_1c0);
      goto LAB_14060b0c9;
    }
  }
  local_1d8 = 0x474;
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_238 = 0;
  local_230 = 0;
  local_22c = 5;
  FUN_140e87440(&local_1f8,DAT_1419ff2c8,0x80000000,&local_a8,
                (ulonglong)ppdVar17 & 0xffffffffffffff00,(ulonglong)ppdVar20 & 0xffffffffffffff00);
  switch(local_1ec) {
  default:
switchD_14060aa6e_caseD_1:
    uVar7 = 0;
    break;
  case 6:
    uVar7 = local_1f8;
    break;
  case 0xf:
    iVar3 = (int)((ulonglong)local_1f8 >> 0x20);
    if ((iVar3 != 0x1000000) && (iVar3 != 0x4000001)) goto switchD_14060aa6e_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar4 = FUN_140e4a8b0(&local_1f8);
    uVar7 = FUN_140e87250(uVar4);
  }
  uVar21 = 0;
  puVar16 = &local_a8;
  FUN_140e63610(uVar7,param_2,&local_238,0,puVar16,0);
  local_1d8 = 0x475;
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_238 = 0;
  local_230 = 0;
  local_22c = 5;
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_218 = 0;
  local_210 = 0;
  local_20c = 5;
  uVar21 = uVar21 & 0xffffffffffffff00;
  uVar18 = (ulonglong)puVar16 & 0xffffffffffffff00;
  FUN_140e87440(local_e8,DAT_1419ef3a8,0x80000000,&local_b8,uVar18,uVar21);
  uVar18 = uVar18 & 0xffffffffffffff00;
  FUN_140e87440(&local_1f8,DAT_141a05b88,0x80000000,&local_c8,uVar18,uVar21 & 0xffffffffffffff00);
  uVar4 = (undefined4)(uVar18 >> 0x20);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_248,gml_Script_anon_31582_DefineTrinkets_TRINKETSINIT,0);
  if (&local_248 != ppuVar8) {
    local_e8 = local_248;
    uStack_e0 = uStack_240;
    uStack_dc = uStack_23c;
    if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(ppuVar8);
    }
    FUN_140041b80(ppuVar8,&local_e8);
  }
  FUN_140e60910(1);
  if (ppuVar8 != local_1a8) {
    local_e8 = *ppuVar8;
    uStack_e0 = *(undefined4 *)(ppuVar8 + 1);
    uStack_dc = *(undefined4 *)((longlong)ppuVar8 + 0xc);
    if ((1 << ((byte)local_1a8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1a8);
    }
    FUN_140041b80(local_1a8,&local_e8);
  }
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_1d0 = local_1a8;
  local_248 = local_c8;
  uStack_240 = uStack_c0;
  uStack_23c = uStack_bc;
  if ((1 << ((byte)local_198[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_198);
  }
  FUN_140041b80(local_198,&local_248);
  local_1c8 = local_198;
  local_1c0 = (double *)&local_208;
  local_248 = local_b8;
  uStack_240 = uStack_b0;
  uStack_23c = uStack_ac;
  if ((1 << ((byte)_local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  FUN_140041b80(&local_178,&local_248);
  ppdVar20 = (double **)&local_1d0;
  local_1b8 = &local_178;
  pdVar12 = (double *)
            FUN_140e634e0(param_1,param_2,&local_218,3,CONCAT44(uVar4,DAT_1419fd6d8),ppdVar20);
  if (pdVar12 != &local_168) {
    local_248 = (undefined1 *)*pdVar12;
    uStack_240 = *(undefined4 *)(pdVar12 + 1);
    uStack_23c = *(undefined4 *)((longlong)pdVar12 + 0xc);
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_248);
  }
  local_1b0 = &local_168;
  ppuVar19 = &local_1b8;
  gml_Script___remove_listener_from_signal_anon_1472_SignalController_SIGNALS
            (param_1,param_2,&local_238,2,ppuVar19);
  local_1d8 = 0x476;
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_21c = 0;
  local_228 = 0.0;
  bVar1 = true;
  do {
    if (!bVar1) {
      local_1d8 = 0x476;
      uVar5 = local_21c & 0xffffff;
      if (uVar5 == 0) {
LAB_14060adb7:
        local_228 = (double)CONCAT44(uVar14,uVar13) + 1.0;
      }
      else if (uVar5 == 1) {
        local_228 = (double)FUN_140e4b060(&local_228);
        local_228 = local_228 + 1.0;
        local_21c = 0;
      }
      else if (uVar5 == 7) {
        local_228 = (double)CONCAT44(local_228._4_4_,local_228._0_4_ + 1);
      }
      else if (uVar5 == 10) {
        local_228 = (double)((longlong)local_228 + 1);
      }
      else {
        if (uVar5 == 0xd) {
          local_21c = 0;
          goto LAB_14060adb7;
        }
        FUN_140042910(&DAT_14172c3d8,&local_228,&local_228);
      }
    }
    bVar1 = false;
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_238 = 0;
    local_230 = 0;
    local_22c = 5;
    uVar21 = (ulonglong)ppuVar19 & 0xffffffffffffff00;
    FUN_140e87440(&local_208,DAT_1419f5b68,0x80000000,&local_148,uVar21,
                  (ulonglong)ppdVar20 & 0xffffffffffffff00);
    uVar13 = (undefined4)(uVar21 >> 0x20);
    local_248 = local_148;
    uStack_240 = uStack_140;
    uStack_23c = uStack_13c;
    if ((1 << ((byte)local_1a8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1a8);
    }
    FUN_140041b80(local_1a8,&local_248);
    local_1d0 = local_1a8;
    ppdVar20 = (double **)&local_1d0;
    uVar21 = CONCAT44(uVar13,DAT_1419f5e98);
    uVar7 = FUN_140e634e0(param_1,param_2,&local_238,1,uVar21,ppdVar20);
    iVar3 = FUN_140e851f0(&local_228,uVar7,DAT_141955260,1);
    if ((iVar3 == -2) || (-1 < iVar3)) goto LAB_14060b0c9;
    local_1d8 = 0x477;
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_218 = 0;
    local_210 = 0;
    local_20c = 5;
    uVar21 = uVar21 & 0xffffffffffffff00;
    FUN_140e87440(&local_208,DAT_1419f5b68,0x80000000,&local_148,uVar21,
                  (ulonglong)ppdVar20 & 0xffffffffffffff00);
    uVar13 = (undefined4)(uVar21 >> 0x20);
    local_248 = local_148;
    uStack_240 = uStack_140;
    uStack_23c = uStack_13c;
    if ((1 << ((byte)local_198[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_198);
    }
    FUN_140041b80(local_198,&local_248);
    local_1c8 = local_198;
    local_1c0 = &local_228;
    ppuVar19 = &local_1c8;
    uVar21 = CONCAT44(uVar13,DAT_1419f5a78);
    uVar7 = FUN_140e634e0(param_1,param_2,&local_218,2,uVar21,ppuVar19);
    uVar18 = (ulonglong)ppuVar19 & 0xffffffffffffff00;
    uVar21 = uVar21 & 0xffffffffffffff00;
    FUN_140e87440(uVar7,DAT_141a05b88,0x80000000,&local_d8,uVar21,uVar18);
    ppdVar20 = (double **)(uVar18 & 0xffffffffffffff00);
    ppuVar19 = (undefined8 **)(uVar21 & 0xffffffffffffff00);
    FUN_140e87440(local_f8,DAT_1419f5f58,0x80000000,&local_118,ppuVar19,ppdVar20);
    iVar3 = FUN_140e851f0(&local_d8,&local_118,DAT_141955260,0);
    if (iVar3 == 0) break;
    uVar13 = SUB84(local_228,0);
    uVar14 = (undefined4)((ulonglong)local_228 >> 0x20);
  } while( true );
  local_1d8 = 0x478;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  uVar21 = (ulonglong)ppuVar19 & 0xffffffffffffff00;
  FUN_140e87440(&local_208,DAT_1419f5b68,0x80000000,&local_148,uVar21,
                (ulonglong)ppdVar20 & 0xffffffffffffff00);
  uVar13 = (undefined4)(uVar21 >> 0x20);
  local_248 = local_148;
  uStack_240 = uStack_140;
  uStack_23c = uStack_13c;
  if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  FUN_140041b80(&local_178,&local_248);
  local_1b0 = &local_228;
  local_1b8 = &local_178;
  FUN_140e634e0(param_1,param_2,&local_158,2,CONCAT44(uVar13,DAT_1419f5938),&local_1b8);
  local_1d8 = 0x479;
  goto LAB_14060b0c9;
}

